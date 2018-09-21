Which situations call the copy constructor ?

//call constructor to create joe
Student joe("joe", 111);

//call copy constructor to create john
Student john = joe;

//call copy constructor to create joe clone
foo(joe);

//first call Constructor to create tom in bar() and then create hm using copy constructor
Student hm = bar();
