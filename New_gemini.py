"""
At the command line, only need to run once to install the package via pip:

$ pip install google-generativeai
"""

import google.generativeai as genai

genai.configure(api_key="AIzaSyCCiR79DP4KYun2jgM3KfLt-xpPI-x4lGA")
def Text(text):
    model = genai.GenerativeModel('gemini-pro')
    response = model.generate_content(text)
    #print(response.text)
    return response.text
