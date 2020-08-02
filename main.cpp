#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       dog
//  action 1:   the dog barks
dog.bark();
//  action 2:   the dog sits
dog.sit();
//  action 3:   the dog rolls over
dog.rollOver();
//  2)
//  Noun:       airplane
//  action 1:   the airplane takes off
airplane.takeOff();
//  action 2:   the airplane decelerates
airplane.decelerate;
//  action 3:   the airplane lands
airplane.land();
//  3)
//  Noun:       fish
//  action 1:   the fish swims
fish.swim();
//  action 2:   the fish eats
fish.eat();
//  action 3:   the fish hides
fish.hide();
//  4)
//  Noun:       cloud
//  action 1:   the cloud forms
cloud.form();
//  action 2:   the cloud rains
cloud.rain();
//  action 3:   the cloud dissipates
cloud.dissipate();
//  5)
//  Noun:       cashier
//  action 1:   the cashier scans items
cashier.scan();
//  action 2:   the cashier opens register
cashier.openRegister();
//  action 3:   the cashier makes change
cashier.makeChange();
//  6)
//  Noun:       flower
//  action 1:   the flower buds
flower.bud();
//  action 2:   the flower blooms
flower.bloom();
//  action 3:   the flower wilts
flower.wilt();
//  7)
//  Noun:       chef
//  action 1:   the chef chops
chef.chop();
//  action 2:   the chef dices
chef.dice();
//  action 3:   the chef peels
chef.peel();
//  8)
//  Noun:       clown
//  action 1:   the clown dances
clown.dance();
//  action 2:   the clown frowns
clown.frown();
//  action 3:   the clown laughs
clown.laugh();
//  9)  
//  Noun:       cat
//  action 1:   the cat stretches
cat.stretch();
//  action 2:   the cat yawns
cat.yawn();
//  action 3:   the cat scratches
cat.scratch();
//  10)
//  Noun:       sun
//  action 1:   the sun sets
sun.set();
//  action 2:   the sun rises
sun.rise();
//  action 3:   the sun explodes
sun.explode();
//  11)
//  Noun:       coffeeMachine
//  action 1:   the coffeeMachine turns one
coffeeMachine.turnON();
//  action 2:   the coffeeMachine timer is set
coffeeMachine.setTimer();
//  action 3:   the coffeeMachine starts to brew
coffeeMachine.beginBrew();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
