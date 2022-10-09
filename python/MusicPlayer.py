from cgitb import text
from logging import root
import string
from tkinter.font import BOLD
from pygame import mixer
from tkinter import *
import os
def play():
    current=playlist.get(ACTIVE)
    print (current)
    mixer.music.load(current)
    mixer.music.play()

def pause():
    mixer.music.pause()

def resume():
    mixer.music.unpause()

def stop():
    mixer.music.stop()

root=Tk()
root.title("Music Player")
root.resizable(False, False)
root.configure(bg='#262626')
mixer.init()

Head = Label(root, text=("♫ Music Player"),font=("Arial",30,BOLD),bg="#262626",fg="white")
Head.pack(pady=20)

playlist=Listbox(root,selectmode=SINGLE,bg="Black",fg="White",font=('Helvetica',15),width=60,borderwidth=25,highlightthickness=0)
playlist.pack(padx=30,pady=30)

os.chdir(r'.\Music')
songs=os.listdir()
for s in songs:
    playlist.insert(END,s)

frame=Frame(root)
frame.pack(pady=20)

playbtn=Button(frame,text="PLAY",command=play,highlightthickness=0,bd=0)
playbtn.config(font=('Arial',20,BOLD),bg="#00a814",fg="White")
playbtn.pack(side=LEFT,ipadx=12)

pausebtn=Button(frame,text="PAUSE",command=pause,highlightthickness=0,bd=0)
pausebtn.config(font=('Arial',20,BOLD),bg="#ffae00",fg="White")
pausebtn.pack(side=LEFT,ipadx=9)

resumebtn=Button(frame,text="RESUME",command=resume,highlightthickness=0,bd=0)
resumebtn.config(font=('Arial',20,BOLD),bg="#007fcc",fg="White")
resumebtn.pack(side=LEFT,ipadx=6)

stopbtn=Button(frame,text="STOP",command=stop,highlightthickness=0,bd=0)
stopbtn.config(font=('Arial',20,BOLD),bg="#d90021",fg="White")
stopbtn.pack(side=LEFT,ipadx=12)

mainloop()
