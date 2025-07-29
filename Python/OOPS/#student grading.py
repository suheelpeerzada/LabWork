class Student:
    def __init__(self, name):
        # Constructor to initialize the student's name and grades
        pass

    def add_grade(self, subject, grade):
        # Method to add a new grade for a subject
        pass

    def calculate_average_grade(self):
        # Method to calculate the average grade
        pass

    def display_info(self):
        # Method to display the student's information
        pass

# Example usage:
student = Student("Alice")

# Add grades
student.add_grade("Math", 90)
student.add_grade("English", 85)
student.add_grade("History", 92)

# Display the student's information and average grade
student.display_info()
print("Average Grade:", student.calculate_average_grade())
