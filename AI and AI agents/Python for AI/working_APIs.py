# first API call


import requests

latitude = 50
longitude = 50

url = f"https://api.open-meteo.com/v1/forecast?latitude={latitude}&longitude={longitude}&current=temperature_2m"

response = requests.get(url)
data = response.json()

print(data)