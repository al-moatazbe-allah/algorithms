class VendingMachine:
    def _init_(self, num_items, item_price):
        self.numItems = num_items
        self.itemPrice = item_price

    def buy(self, req_items, money):
        if req_items > self.numItems:
            return "Not enough items in the machine"
        elif req_items <= self.numItems and self.itemPrice * req_items <= money:
            change = money - (req_items * self.itemPrice)
            self.numItems -= req_items
            return change
        totalPrice = req_items * self.itemPrice

        if totalPrice > money:
            return "Not enough coins"

    # Implement the VendingMachine here
    pass


a = [int(i) for i in input().split()]

machine = VendingMachine(a[0], a[1])
n = int(input())
for i in range(n):
    item = [int(i) for i in input().split()]
    print(machine.buy(item[0], item[1]))
