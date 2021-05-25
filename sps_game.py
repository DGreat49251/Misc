import random as rdm
import speech_recognition as sr     #Speech recognition library
import pyttsx3                      #Text to speech library

listener = sr.Recognizer()
engine = pyttsx3.init()

def talk(text):
    print(text)
    engine.say(text)
    engine.runAndWait()

def main():    
    comp=0
    ch='y'
    rnd=0
    user=0
    comp=0
    ll=['stone','paper','scissor']
    talk("Welcome to the 'Stone Paper Scissor' game.")
    talk("Press 's' for stone \nPress 'p' for paper \nPress 'c' for Scissor")
    while ch=='y' or ch=='Y':
        temp=0
        sys_choice=rdm.choice(ll)
        talk("Please enter your choice:")
        user_choice=(input())
        rnd=rnd+1
        if sys_choice=='stone':
            if user_choice=='s' or user_choice=='S':
                talk('This round is tied!')
                flag='stone'
                pass
            elif user_choice=='p' or user_choice=='P':
                user=user+1
                flag='paper'
                talk('You won this round!')
            elif user_choice=='c' or user_choice=='C':
                talk('Computer won this round!')
                comp=comp+1
                flag='scissor'
            else:
                talk("You have pressed wrong option!!!")
                temp=1
                rnd=rnd-1

        elif sys_choice=='paper':
            if user_choice=='s' or user_choice=='S':
                talk('Computer won this round!')
                comp=comp+1
                flag='stone'
            elif user_choice=='p' or user_choice=='P':
                talk('This round is tied!')
                flag='paper'
                pass
            elif user_choice=='c' or user_choice=='C':
                talk('You won this round!')
                user=user+1
                flag='scissor'
            else:
                talk("You typed wrong option!!!")
                temp=1
                rnd=rnd-1

        elif sys_choice=='scissor':
            if user_choice=='s' or user_choice=='S':
                talk('You won this round!')
                user=user+1
                flag='stone'
            elif user_choice=='p' or user_choice=='P':
                talk('Computer won this round!')
                comp=comp+1
                flag='paper'
            elif user_choice=='c' or user_choice=='C':
                talk('This round is tied!')
                flag='scissor'
                pass
            else:
                talk("You typed wrong option!!!")
                temp=1
                rnd=rnd-1
           
        if temp==0:
            talk("You chose: "+flag)
            talk("Computer chose: "+sys_choice)
            talk("Score of user by round "+str(rnd)+' is: '+str(user)+' point')
            talk("Score of computer by round "+str(rnd)+' is: '+str(comp)+' point')
        elif temp==1:
            pass
        talk("Enter 'y' to play again:")
        ch=input()
    talk("Final score is being calculated:") 
    talk("Final score of user: "+str(user)+' point')
    talk("Final score of computer: "+str(comp)+' point')
    if user>comp:
        talk("Congratulations!!! You have won the game!")
    elif user<comp:
        talk("Oopss!!! Computer has won the game!")
    else:
        talk("Game tied!")

main()
