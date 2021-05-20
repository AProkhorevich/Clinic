class VetClinic:
    def __init__(self, name='Default name', patients_count=0):
        self.__name = name
        self.__patients_count = patients_count

    @property
    def name(self):
        return self.__name

    @property
    def patients_count(self):
        return self.__patients_count

    def set_name(self, name):
        self.__name = name

    def set_patients_count(self, count):
        self.__patients_count = count

    def __str__(self):
        return f'Название клиники: {self.__name}\n' \
               f'Количество пациентов: {self.__patients_count}\n'

    def __repr__(self):
        return f'VetClinic("{self.__name}, {self.__patients_count}")'


# создадим город с данными по умолчанию
clinic = VetClinic()
print(clinic)

# Проверим работоспособность методов гет и сет
clinic.set_name('Happy Cats')
print(f'Новое имя: {clinic.name}\n')

# NameError
# clinic.name = ghf

# Создадим город с введенными данными
clinic2 = VetClinic('Happy dogs', 15000000)
print(clinic2)
# Проверим работоспособность методов гет и сет
clinic2.set_name('Happy cats')
print(f'Новое имя: {clinic2.name}')
print(clinic2)

print(clinic2.__repr__())
