## Тест по классам

В этой задаче необходимо реализовать класс ``SantaBag``, который будет описывать мешок Деда Мороза с подарками.

В техническом плане это означает следующее:

1. Нужно создать структуру под названием ``Gift``, которая описывает один подарок на Новый год. В структуре должны быть поля ``string name``, ``int cost``, ``bool for_good_child``, которые означают, соответственно, название подарка, его стоимость, а также ответ на вопрос, хорошо ли вел себя ребенок, которому этот подарок предназначен.
2. Нужно создать класс ``SantaBag``, который будет представлять собой мешок подарков. Внутри он будет хранить динамический массив структур ``Gift`` (по сути, то же самое, что в задаче vector, только вместо int'ов подарки). Вам нужно хранить указатель на динамический массив ``Gift* gifts_``, а также размер мешка с подарками ``int size_``.
3. В классе ``SantaBag`` должны быть следующие методы:
    - Конструктор по умолчанию (пустой мешок)
    - Конструктор с двумя параметрами ``(int size, const Gift& gift)``. Этот конструктор должен создать мешок с ``size`` одинаковыми подарками, копиями подарка ``gift``.
    - Конструктор копирования
    - Деструктор
    - Оператор присваивания
    - **Константный** метод ``Size``, возвращающий размер мешка
    - Метод ``Add``, позволяющий добавить подарок в мешок (в конец массива)
    - Метод ``Remove(int index)``, позволяющий удалить один подарок из мешка по индексу (должен бросать исключение в случае некорректного индекса)
    - **Константный** метод ``GetAverageCost``, возвращающий среднюю стоимость всех подарков в мешке
    - Метод ``CountGoodChildren``, который подсчитывает, сколько подарков предназначено детям, которые хорошо себя вели в этом году
    - Метод ``SortByName``,  который упорядочивает подарки в мешке в алфавитном порядке
    - Оператор [ ] доступа по индексу, константный и неконстантный (должны бросать исключения в случае некорректных индексов).
    - Оператор == сравнения двух мешков на равенство
4. Также перегрузить оператор << (так, чтобы можно было написать ``cout << bag;``). Можно это сделать как отдельной функцией, можно как дружественной.
5. В функции ``main`` продемонстрировать работу класса.

### Разбалловка
- 5 баллов - за созданную структуру ``Gift`` и класс ``SantaBag`` с двумя конструкторами
- 2 балла - конструктор копирования
- 0.5 балла - деструктор
- 2 балла - оператор присваивания
- 0.5 балла - ``Size``
- 1.5 балла - ``Add``
- 2 балла - ``Remove``
- 1 балл - операторы [ ]
- 1.5 балла - оператор ==
- 1 балл - ``GetAverageCost``
- 1 балл - ``CountGoodChildren``
- 1 балл - ``SortByName``
- 1 балл - оператор <<

Всего 20 баллов

Интернетом пользоваться можно, списывать нельзя. За подозрение в списывании всем причастным, включая изначального автора, буду уменьшать баллы в 2 раза.
