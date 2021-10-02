try:
    from pytube import YouTube
    from pytube import Playlist
except Exception as e:
    print("some module missing {}".format(e))

url = input("enter a url: ")
ytd = YouTube(url).streams.first().download()
