print(f"Hello, I'm a tool for calculating the lenght of the fence. Tell me RUN if you want to start")

 # start = str(input(f"if I should run, then tell me RUN: "))

trigger = str('RUN')

while trigger != str(input('>')):
    print('unnown')


while 1:
    try:
        fenceLenght = int(input("How many meters of fence mesh do you have?:  "))
    except:
        print('Invalid value <meters>')
        continue

    if fenceLenght <= 0:
        print('whether this fence mesh is made of antimatter?')
        continue
    break    



     

s_max = 0
a_max = 0
b_max = 0

a = 1

while (2 * a) < fenceLenght:

    b = fenceLenght - (2*a)
    s = b*a
    if s > s_max:
        s_max = s
        a_max = a
        b_max = b

    a = a + 1

if s_max > 0:
    print(f'długość boku a={a_max}m, długść boku b={b_max}m, wybieg dla zwiezrąt = {s_max}mkw.')   
else:
    print(f'it is not possible to calculate size of the animal enclosure - not enough fence mesh')


