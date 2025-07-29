#book in library
from time import sleep
class Book:
    def __init__(self, name, author):
        self.name = name
        self.author = author
        self.availability = 1
        
    def borrow_book(self):
        if self.availability == 1:
            print(f"{self.name} by {self.author} borrowed!")
            self.availability = 0
        else:
            print(f"{self.name} by {self.author} not available")

    def return_book(self):
        if self.availability == 1:
            print(f"{self.name} by {self.author} has not been borrowed yet")
        else:
            print(f"Thanks for returning {self.name} by {self.author}")
            self.availability = 0

book = Book("Tempest", "Shakespear")

book.return_book()
sleep(5) 
book.borrow_book()
sleep(5)
book.return_book()

#or instead of sleep() we can add buttons to borrow and return