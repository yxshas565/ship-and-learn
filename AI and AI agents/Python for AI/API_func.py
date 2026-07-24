import requests


def API_weather(latitude,longitude):
    response = requests.get(f"https://api.open-meteo.com/v1/forecast?latitude={latitude}&longitude={longitude}&current=temperature_2m")
    data = response.json()
    return data["current"]["temperature_2m"]


india_temp = API_weather(20.5937, 78.9629)      # India
paris_temp = API_weather(48.8566, 2.3522)       # Paris, France
germany_temp = API_weather(52.5200, 13.4050)    # Berlin, Germany
norway_temp = API_weather(59.9139, 10.7522)     # Oslo, Norway


print(f"India: {india_temp}°C")
print(f"Paris: {paris_temp}°C")
print(f"Germany: {germany_temp}°C")
print(f"Norway: {norway_temp}°C")