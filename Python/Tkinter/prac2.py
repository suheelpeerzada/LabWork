import tkinter as tk
from tkinter import ttk

text = "Hi Tkinter, press the button"

def change(*args):
    ttk.Label(frame, text="Pressed!").grid(row=2, column=2, sticky="")


window = tk.Tk()
window.title("practice")

frame = ttk.Frame(window, padding="3 3 12 12")
frame.grid(column=0, row= 0, sticky=('N', 'W', 'E', 'S'))
ttk.Label(frame, text = "Hi Tkinter, press the button").grid(row=0, column=1, sticky=('N', 'W'))
ttk.Button(frame, text="Click", command= change).grid(row=1, column=2, sticky='')

for child in window.winfo_children():
    child.grid_configure(padx=3,pady=3)

window.mainloop()