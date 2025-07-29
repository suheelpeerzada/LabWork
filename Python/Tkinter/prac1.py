import tkinter as tk
from tkinter import ttk

def calculate(*args):
    try:
        value = float(feet.get())
        meters.set(int(0.3048 * value * 10000.0 + 0.5)/10000.0)
    except ValueError:
        pass

window = tk.Tk()    #main window
window.title("Calculator")

mainframe = ttk.Frame(window, padding="3 3 12 12") #frame added
mainframe.grid(column=0, row=0, sticky = ('N','W','E','S'))
window.columnconfigure(0, weight=1)
window.rowconfigure(0, weight=1)

feet = tk.StringVar()
feet_entry = ttk.Entry(mainframe, width=7, textvariable=feet)
feet_entry.grid(column=2,row=1, sticky=('W','E'))

meters = tk.StringVar()

ttk.Label(mainframe, textvariable=meters).grid(column=2, row=2, sticky=('W','E'))
ttk.Button(mainframe, text="Calculate", command=calculate).grid(column=3,row=3,sticky='W')
ttk.Label(mainframe, text="feet").grid(column=3, row=1, sticky='W')
ttk.Label(mainframe, text="is equivalent to").grid(column=1, row=2, sticky='E')
ttk.Label(mainframe, text= "meters").grid(column=3,row=2,sticky='W')

for child in mainframe.winfo_children():
    child.grid_configure(padx=5,pady=5)
feet_entry.focus()
window.bind("<Return>", calculate)

window.mainloop()