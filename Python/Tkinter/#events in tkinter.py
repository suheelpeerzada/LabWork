#events in tkinter
import tkinter as tk

def on_button_click():
    # Function to be executed when the button is clicked
    entered_text = entry.get()
    print("Text entered:", entered_text)

# Create the main window
window = tk.Tk()

# Create an Entry widget for text input
entry = tk.Entry(window)
label = tk.Label(entry, text="hello", height=400, width=400)
# Create a Button widget with a callback function
button = tk.Button(window, text="Print Text", command=on_button_click)

# Pack the widgets into the window
label.pack()
entry.pack()
button.pack()

# Start the GUI event loop
window.mainloop()
