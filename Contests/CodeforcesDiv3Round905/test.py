class Book:
    def __init__(self, id, name,  quantity) -> None:
        self.id = id
        self.name = name
        self.quantity = quantity
       
class User:
    def __init__(self, id, name, password) -> None:
        self.id = id
        self.name = name
        self.password = password
        self.borrowedBooks = []
        self.returnedBooks = []

class Library:
    def __init__(self, name) -> None:
        self.name = name
        self.users = []
        self.books = []

    def addBook(self, id, name, quantity):
        book = Book(id, name, quantity)
        self.books.append(book)
        print(f'{book.name} added successfully')
        
    def addUser(self, id, name, password):
        user = User(id, name, password)
        self.users.append(user)
        return user
        
    def borrowBook(self, user, token):
        for book in self.books:
            if book.name == token:
                if book in user.borrowedBooks:
                    print('Already borrowed')
                    return
                elif book.quantity == 0:
                    print('No copy available')
                    return
                else:
                    user.borrowedBooks.append(book)
                    book.quantity = book.quantity - 1
                    print('Borrow book succesfully')
                    return    
        print(f'Not found {token}\n')

    def returnBook(self, user, token):
        for book in self.books:
            if book.name == token:
                if book in user.borrowedBooks:
                    book.quantity = book.quantity + 1
                    user.returnedBooks.append(book)
                    user.borrowedBooks.remove(book)
                    print('return book succesfully')
                

bsk = Library('Bsk')
admin = bsk.addUser(1, 'admin', 'admin')
ratin = bsk.addUser(2, 'ratin', '456')
cpbook = bsk.addBook(3, 'cp', 3)
currentUser = None
while True:
    if currentUser == None:
        print('No login user')

        option = input('Login or Register: (L/R) Or Exit(X) :')
        if option == 'L' or option == 'l':
            id = int(input('Enter your id: '))
            password = input('Enter your password: ')

            match = False
            for user in  bsk.users:
                if user.id ==  id and user.password == password:
                    currentUser = user
                    match = True
                    break
            if match == False:
                    print('No user found')
        elif option == 'R' or option == 'r':
            print("For Registation contact with the Admin")
        elif option == 'x' or option == 'X':
            break 
    else:
        print(f'Welcome Back {currentUser.name}!')
        if currentUser.name == 'admin':
            while True:
                print('Option:\n')
                print('1: Add book')
                print('2: Add user')    
                print('3: Show all books')
                print('4: Logout')

                ch = int(input('Enter Option: '))

                if ch == 1:
                    id = int(input('Enter book id: '))
                    name = input('Enter book name: ')
                    quantity = int(input('Enter quantity of book: '))

                    bsk.addBook(id, name, quantity)
                elif ch == 2:
                    name = input('Enter your name: ')
                    id = int(input('Enter your id: '))
                    password = input('Enter your password: ')

                    for user in  bsk.users:
                        if user.id ==  id:
                            print('user already exist')
                            break
                    user=bsk.addUser(id, name, password)
                    print(f"{name} Succsessfully registerd")
        
                elif ch == 3 :
                    for book in bsk.books:
                        print(f'{book.id}\t{book.name}\t{book.quantity}')
                    print('\n')
                elif ch == 4:
                    currentUser = None
                    break

        else:
            while True:
                print('Option:\n')
                print('1: Borrow book')
                print('2: Return book')    
                print('3: Show all borrow books')
                print('4: Show all return or history books')
                print('5: Logout')

                ch = int(input('Enter Option:'))

                if ch == 1:
                    name = input('Enter book name: ')
                    bsk.borrowBook(currentUser, name)

                elif ch == 2:
                    name = input('Enter book name: ')
                    bsk.returnBook(currentUser, name)

                elif ch == 3:
                    print('\nBorrowed Books:\n')
                    for book in currentUser.borrowedBooks:
                        print(f'{book.id}\t{book.name}\t{book.quantity}')
                    print('\n')

                elif ch == 4:
                    print('\nReturned Books:\n')
                    for book in currentUser.returnedBooks:
                        print(f'{book.id}\t{book.name}\t{book.quantity}')
                    print('\n')
                
                elif ch == 5:
                    currentUser = None
                    break