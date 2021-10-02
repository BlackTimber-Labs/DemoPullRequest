import speedtest

st = speedtest.Speedtest()
download = st.download()
upload = st.upload()
dw = round(download/1000000)
up = round(upload/1000000)

print(dw,"mbps")
print(up,"mbps")
