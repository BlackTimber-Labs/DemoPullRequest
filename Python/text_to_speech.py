from gtts import gTTS

import os

mytext = "WELCOME TO INDIA"

language = "en"

myvoice = gTTS(text = mytext, lang = language , slow = False)

myvoice.save("welcome.mp3")
os.system("welcome.mp3")