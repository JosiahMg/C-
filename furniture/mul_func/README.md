multiple inheritance of invoking some function in different of base classes.

There are several some function in multiple base classes,we can invoking function as follow:

// invoking class Sofa::setWeight()
sofabed.Sofa::setWeight(100);
cout << sofabed.Sofa::getWeight() << endl;

//invoking class Bed::setWeight()
sofabed.Bed::setWeight(10);
cout << sofabed.Bed::getWeight() << endl;
