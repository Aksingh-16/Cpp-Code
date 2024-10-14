import tkinter as tk
from tkinter import messagebox

def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    if y == 0:
        return "Error: Division by zero"
    return x / y

class CalculatorApp:
    def __init__(self, master):
        self.master = master
        master.title("Simple Calculator")

        # Create and set up the entry widget
        self.entry = tk.Entry(master, width=30, justify="right")
        self.entry.grid(row=0, column=0, columnspan=4, padx=5, pady=5)

        # Create and set up the buttons
        buttons = [
            '7', '8', '9', '/',
            '4', '5', '6', '*',
            '1', '2', '3', '-',
            '0', '.', 'C', '+'
        ]

        row = 1
        col = 0
        for button in buttons:
            cmd = lambda x=button: self.click(x)
            tk.Button(master, text=button, command=cmd, width=10).grid(row=row, column=col, padx=2, pady=2)
            col += 1
            if col > 3:
                col = 0
                row += 1

        tk.Button(master, text="=", command=self.calculate, width=22).grid(row=row, column=0, columnspan=2, padx=2, pady=2)
        tk.Button(master, text="Exit", command=master.quit, width=22).grid(row=row, column=2, columnspan=2, padx=2, pady=2)

    def click(self, key):
        if key == 'C':
            self.entry.delete(0, tk.END)
        else:
            self.entry.insert(tk.END, key)

    def calculate(self):
        try:
            result = eval(self.entry.get())
            self.entry.delete(0, tk.END)
            self.entry.insert(tk.END, str(result))
        except:
            messagebox.showerror("Error", "Invalid input")
            self.entry.delete(0, tk.END)

if __name__ == "__main__":
    root = tk.Tk()
    app = CalculatorApp(root)
    root.mainloop()
