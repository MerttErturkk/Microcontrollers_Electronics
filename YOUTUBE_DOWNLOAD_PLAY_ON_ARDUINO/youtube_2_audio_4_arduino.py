from pydub import AudioSegment
import yt_dlp
import os 

def check_for_http(url):
    if url[0:8] == "https://":
        new_url = url
    else:
        new_url = r"https://" + url
    return new_url
 
def song_download_split(web_link,sample_name,t_sec):

    web_link = check_for_http(web_link)
    options = {
      'format': 'bestaudio/best',
      'extractaudio' : True,    # only keep the audio
      'audioformat' : "wav",    # convert to wav
      'outtmpl': 'temp.wav',    # '%(id)s' == name the file the ID of the video
      'noplaylist' : True,      # only download single song, not playlist
    }
    with yt_dlp.YoutubeDL(options) as ydl:
        ydl.download([web_link])
        
    t1 = t_sec * 1000 #Works in milliseconds
    t2 = (t_sec +3.85)* 1000
    AudioSegment.converter = r"ffmpeg/bin/ffmpeg.exe" #r"C:\ffmpeg\bin\ffmpeg.exe"
    newAudio = AudioSegment.from_file(r'temp.wav')
    newAudio = newAudio[t1:t2]
    
    sample_name = "".join(i for i in sample_name if i not in "\/:*?<>|") # DROP ILLEGAL CHARS FOR FILE NAMING
    newAudio.export(f"{str(os.getcwd())}\\ffmpeg\\bin\\{sample_name}.wav", format="wav")
    os.remove(r'temp.wav')
    return 1

web_link = "https://www.youtube.com/watch?v=Xgaj5suTCgk"
sample_name = "AAH"
t_sec = 0

output_msg = song_download_split(web_link, sample_name, t_sec)

from librosa import load

audio, sr = load(fr"{str(os.getcwd())}\\ffmpeg\\bin\\{sample_name}.wav",sr=8000)

audio = (audio+1)/2*255
audio= [round(i) if i>0 else 0 for i in audio]
audio= [round(i) if i<255 else 255 for i in audio]

textfile = open("a_file.txt", "w")
for element in audio:
    textfile.write(str(element)+ ",")
textfile.close()

