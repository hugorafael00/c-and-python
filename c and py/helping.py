

import os
import requests
import urllib.parse

# onde vai ter as funçoes pre definidas
api_key = os.environ.get("API_KEY")
params = {
    "apikey": api_key,
    "language": "en-us",
    "details": "true"
}


k = 0
c = 1
f = 2

def location(city):

    try:
        url = f"http://dataservice.accuweather.com/locations/v1/cities/autocomplete?apikey={api_key}&q={city}"
        response = requests.get(url, params=params)
        response.raise_for_status()
    except requests.RequestException:
        return k

    try:
        dalin = response.json()
    #     return {
    #         "key": dalin["Key"]
    #     }
        if dalin:
            return dalin[0].get("Key")
    except (KeyError, TypeError, ValueError):
        return k
# climate == corrent conditions
def climate(location):

    try:
        # url = f"http://dataservice.accuweather.com/currentconditions/v1/{id}?apikey=%20{api_key}"
        url = f"http://dataservice.accuweather.com/currentconditions/v1/{id}"
        response = requests.get(url)
        response.raise_for_status()
        print(response.content)

    except requests.RequestException:
        return response
 
    try:
        clima = response.json()
        return {
            "temperature": clima["Temperature.Metric.Value"]
        }
    except (KeyError, TypeError, ValueError):
        return c

    # AUGN0SpcXakXe1BAPRNgh7LFEgd4NV2C
    # 1eVY8dj92ca9b3uL8BLLvfmRxOtxhoQq