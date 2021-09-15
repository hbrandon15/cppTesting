def greetUser(firstName, lastName):

    purpose = input('State your purpose: ')
    print(f'Hello, {firstName.title()} {lastName.title()}, are these your intentions: "{purpose}" ?') # the title 
    #function is used to avoid user error


print('You have reached the umbrella corporation website')
greetUser("rEbEcEa", "chambers")
greetUser("chambers", "rebecca")

# now lets swap the order of the parameters

greetUser(lastName='chambers', firstName='Rebecca')