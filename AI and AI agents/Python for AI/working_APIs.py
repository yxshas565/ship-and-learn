# first API call


import requests

latitude = 20.5937
longitude = 78.9629

url = f"https://api.open-meteo.com/v1/forecast?latitude={latitude}&longitude={longitude}&current=temperature_2m"

response = requests.get(url)
data = response.json()

dashes = '-' * 20


print(response)
print(dashes)
print(type(response))
print(dashes)
print(type(data))
print(dashes)
print(data)
print(dashes)
print(data.get("longitude"))
print(dashes)
print(data.keys())
print(dashes)
print(data.values())
print(dashes)
print(data.items())
print(dashes)

print()
print()
temperature = data["current"]["temperature_2m"]
print(temperature)


