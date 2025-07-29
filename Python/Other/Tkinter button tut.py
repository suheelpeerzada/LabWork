import tkinter as tk

class myGUI:
    def __init__(self):

        self.root = tk.Tk()

        self.label = tk.Label(self.root, text= "Message")

        self.label.pack(padx=10, pady=10)

        self.textbox = tk.Text(self.root, height=5)
        self.textbox.pack(padx=10, pady=10)

        self.check = tk.Checkbutton(self.root, text="show message")
        self.check.pack(padx=10,pady=10)

        self.check_state = tk.Checkbutton(self.root, text='Show messagebox')
        self.check.pack(padx=10, pady=10)

        self.button = tk.Button(self.root, text='show message', command=self.show_message())
        self.button.pack(padx=10, pady=10)

        self.root.mainloop()
    def show_message(self):
        print("Hello world")

myGUI()