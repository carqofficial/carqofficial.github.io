from tkinter import*
import pyautogui
import time
from selenium import webdriver

root=Tk()
root.title("WHATSAPP AUTOMATION")
root.geometry("800x800")
root.configure(background="black")

title=Label(root,text="WHATSAPP AUTOMATION",fg="red",bg="black",font="Helvetica 16 bold italic ")
title.place(x=200,y=0)

msglabel=Label(root,text="MESSAGE",fg="red",bg="black",font="Helvetica 16 bold italic ")
msglabel.place(x=200,y=70)

msgcountlabel=Label(root,text="REPEATATION",fg="red",bg="black",font="Helvetica 16 bold italic ")
msgcountlabel.place(x=200,y=120)

contactlabel=Label(root,text="CONTACT",fg="red",bg="black",font="Helvetica 16 bold italic ")
contactlabel.place(x=200,y=190)

msgentry=Entry(root,font="Helvetica 15 bold italic ")
msgentry.place(x=400,y=70)

contactentry=Entry(root,font="Helvetica 15 bold italic ")
contactentry.place(x=400,y=190)

msgcount=Spinbox(root,from_=0 ,to=100000,width=10,font="bold 16")
msgcount.place(x=400,y=120)

def web():
    from webdriver_manager.chrome import ChromeDriverManager
    driver=webdriver.Chrome(ChromeDriverManager().install())
    driver.get('https:web.whatsapp.com/")')
    time.sleep(30)
    pyautogui.press('tab')
    time.sleep(3)
    n=int(msgcount.get())
    contact=contactentry.get()
    pyautogui.typewrite(contact)
    time.sleep(10)
    pyautogui.press('enter')
    msg=msgentry.get()
    time.sleep(5)
    for i in range (n):
        pyautogui.typewrite(msg)
        pyautogui.press('enter')
        
        
send=Button(root,text="SEND",bg="red",fg="black",command=web,width=10,relief=GROOVE)
send.place(x=300,y=260)
root.mainloop()
