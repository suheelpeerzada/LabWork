#bank deposit
class BankAccount:
    def __init__(self, account_holder, balance):
        self.account_holder = account_holder
        self.balance = balance

    def deposit(self, amount):
        self.balance+=amount
        print("Done")

    def withdraw(self, amount):
        self.balance-=amount
        print("Done")
    def display_info(self):
        print("Balance: ", self.balance)
        pass

# Example usage:
account = BankAccount("John Doe", 1000)

# Deposit and withdraw money
account.deposit(500)
account.withdraw(200)

# Display the account information
account.display_info()
