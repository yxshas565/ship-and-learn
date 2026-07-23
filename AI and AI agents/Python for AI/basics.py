print("Hello , World !!")
print("I am learning Python for AI")


import requests 

response = requests.get("https://api.github.com")
print(response.status_code) # should print 200