# import requests
# from datetime import datetime, timedelta

# dash = '-' * 20 + '\n'

# # Calculate dates
# today = datetime.now()
# week_ago = today - timedelta(days=7)

# # Format dates for API (YYYY-MM-DD)
# start_date = week_ago.strftime("%Y-%m-%d")
# end_date = today.strftime("%Y-%m-%d")

# # Get Paris weather for past week
# url = f"https://api.open-meteo.com/v1/forecast?latitude=48.85&longitude=2.35&start_date={start_date}&end_date={end_date}&daily=temperature_2m_max,temperature_2m_min"

# response = requests.get(url)
# data = response.json()
# print(data)
# print(dash)


# import pandas as pd

# # Extract the daily data
# daily_data = data['daily']

# # Create a DataFrame
# df = pd.DataFrame({
#     'date': daily_data['time'],
#     'max_temp': daily_data['temperature_2m_max'],
#     'min_temp': daily_data['temperature_2m_min']
# })

# # Convert date strings to datetime
# df['date'] = pd.to_datetime(df['date'])

# print(df)
# print(dash)


# import matplotlib.pyplot as plt

# # Create the plot
# plt.figure(figsize=(10, 6))
# plt.plot(df['date'], df['max_temp'], marker='o', label='Max Temp')
# plt.plot(df['date'], df['min_temp'], marker='o', label='Min Temp')

# # Add labels and title
# plt.xlabel('Date')
# plt.ylabel('Temperature (°C)')
# plt.title('Paris Weather - Past 7 Days')
# plt.legend()

# # Rotate x-axis labels for readability
# plt.xticks(rotation=45)
# plt.tight_layout()

# # Save the plot
# plt.savefig('weather_chart.png')
# plt.show()
# print(dash)


# import os

# # Create data folder if it doesn't exist
# if not os.path.exists('data'):
#     os.makedirs('data')

# # Save to CSV
# df.to_csv('data/paris_weather.csv', index=False)
# print("Data saved to data/paris_weather.csv")
# print(dash)



import requests
import pandas as pd
import matplotlib.pyplot as plt
from datetime import datetime, timedelta
import os

# 1. Get weather data
today = datetime.now()
week_ago = today - timedelta(days=7)
start_date = week_ago.strftime("%Y-%m-%d")
end_date = today.strftime("%Y-%m-%d")

url = f"https://api.open-meteo.com/v1/forecast?latitude=48.85&longitude=2.35&start_date={start_date}&end_date={end_date}&daily=temperature_2m_max,temperature_2m_min"
response = requests.get(url)
data = response.json()

# 2. Process with pandas
df = pd.DataFrame({
    'date': pd.to_datetime(data['daily']['time']),
    'max_temp': data['daily']['temperature_2m_max'],
    'min_temp': data['daily']['temperature_2m_min']
})

# 3. Calculate average
df['avg_temp'] = (df['max_temp'] + df['min_temp']) / 2

# 4. Create visualization
plt.figure(figsize=(10, 6))
plt.plot(df['date'], df['max_temp'], 'r-o', label='Max')
plt.plot(df['date'], df['min_temp'], 'b-o', label='Min')
plt.plot(df['date'], df['avg_temp'], 'g--', label='Average')

plt.xlabel('Date')
plt.ylabel('Temperature (°C)')
plt.title('Paris Weather - Past Week')
plt.legend()
plt.grid(True, alpha=0.3)
plt.xticks(rotation=45)
plt.tight_layout()

# 5. Save everything
if not os.path.exists('data'):
    os.makedirs('data')

plt.savefig('data/weather_chart.png')
df.to_csv('data/paris_weather.csv', index=False)

print(f"Average temperature: {df['avg_temp'].mean():.1f}°C")
print("Files saved in 'data' folder")