from logging import root
import pygame
from pygame import mixer
from tkinter import *
import os
def play():
    current=playlist.get(ACTIVE)
    print (current)
    mixer.music.load(current)
    status.set("Playing")
    mixer.music.play()

def pause():
    status.set("Paused")
    mixer.music.pause()

def resume():
    status.set("Resuming")
    mixer.music.unpause()

def stop():
    status.set("Stopped")
    mixer.music.stop()

root=Tk()
root.title("Music Player")

mixer.init()
status=StringVar()
status.set("Choosing")

playlist=Listbox(root,selectmode=SINGLE,bg="White",fg="Black",font=('Poppins',15),width=60)
playlist.pack(pady=50,padx=30)

os.chdir(r'.\Music')
songs=os.listdir()
for s in songs:
    playlist.insert(END,s)

frame=Frame(root)
frame.pack()

playbtn=Button(frame,text="Play",command=play)
playbtn.config(font=('Poppins',20),bg="Black",fg="White",padx=5)
playbtn.pack(side=LEFT)

pausebtn=Button(frame,text="Pause",command=pause)
pausebtn.config(font=('Poppins',20),bg="Black",fg="White",padx=5)
pausebtn.pack(side=LEFT)

resumebtn=Button(frame,text="Resume",command=resume)
resumebtn.config(font=('Poppins',20),bg="Black",fg="White",padx=5)
resumebtn.pack(side=LEFT)

stopbtn=Button(frame,text="Stop",command=stop)
stopbtn.config(font=('Poppins',20),bg="Black",fg="White",padx=5)
stopbtn.pack(side=LEFT)

mainloop()