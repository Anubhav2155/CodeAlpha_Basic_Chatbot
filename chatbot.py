# CodeAlpha Internship
# Task 4: Basic Chatbot

def chatbot():
    print("================================")
    print("       Welcome to ChatBot       ")
    print("================================")
    print("Type 'bye' to exit the chatbot.")
    print()

    while True:
        user_input = input("You: ").lower().strip()

        if user_input == "hello" or user_input == "hi":
            print("Bot: Hi! Nice to meet you.")

        elif user_input == "how are you":
            print("Bot: I'm fine, thanks!")

        elif user_input == "what is your name":
            print("Bot: My name is CodeAlpha ChatBot.")

        elif user_input == "help":
            print("Bot: You can say hello, ask how I am, or say bye.")

        elif user_input == "bye":
            print("Bot: Goodbye! Have a nice day!")
            break

        else:
            print("Bot: Sorry, I don't understand that.")

# Start the chatbot
chatbot()