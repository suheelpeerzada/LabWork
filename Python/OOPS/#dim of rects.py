class Rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        return self.length*self.width
        

    def perimeter(self):
        return 2 * (self.length+self.width)

# Example usage:
rectangle = Rectangle(4, 6)

# Calculate and print the area and perimeter of the rectangle
print("Area:", rectangle.area())
print("Perimeter:", rectangle.perimeter())
