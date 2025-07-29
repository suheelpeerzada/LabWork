import tkinter as tk

root = tk.Tk()

root.geometry("800x600")
root.title("Snakes and Ladders")

label = tk.Label(root,text="Welcome to Snakes and Ladders")
label.pack(padx=100)
label1 = tk.Label(root, text = "Enter Number of players")
label1.pack(padx=20)

textbox = tk.Text(root, height=2, width= 20)
textbox.pack()

button = tk.Button(root, text="Start")
button.pack(padx = 20)

buttonframe = tk.Frame(root)
buttonframe.columnconfigure(0 , weight=1)
buttonframe.columnconfigure(1 , weight=1)
buttonframe.columnconfigure(2 , weight=1)

btn1 = tk.Button(buttonframe, text=1)
btn1.grid(row=0, column=0, sticky=tk.W+tk.E)
btn2 = tk.Button(buttonframe, text=2)
btn2.grid(row=0, column=1, sticky=tk.W+tk.E)
btn3 = tk.Button(buttonframe, text=3)
btn3.grid(row=0, column=2, sticky=tk.W+tk.E)
btn1 = tk.Button(buttonframe, text=1)
btn1.grid(row=1, column=0, sticky=tk.W+tk.E)
btn2 = tk.Button(buttonframe, text=2)
btn2.grid(row=1, column=1, sticky=tk.W+tk.E)
btn3 = tk.Button(buttonframe, text=3)
btn3.grid(row=1, column=2, sticky=tk.W+tk.E)
btn1 = tk.Button(buttonframe, text=1)
btn1.grid(row=2, column=0, sticky=tk.W+tk.E)
btn2 = tk.Button(buttonframe, text=2)
btn2.grid(row=2, column=1, sticky=tk.W+tk.E)
btn3 = tk.Button(buttonframe, text=3)
btn3.grid(row=2, column=2, sticky=tk.W+tk.E)

buttonframe.pack(fill='x')

btnx = tk.Button(root, text='x')
btnx.place(x=400, y=300, height=50, width=100)

root.mainloop()