import random
import re

# A wide database of user intents and multiple random responses for each
BOT_KNOWLEDGE = {
    "greeting": {
        "patterns": [r"hi", r"hello", r"hey", r"greetings", r"sup", r"yo"],
        "responses": [
            "Hello! How can I help you today?",
            "Hey there! What's on your mind?",
            "Hi! Great to chat with you.",
            "Greetings! How are things going?"
        ]
    },
    "goodbye": {
        "patterns": [r"bye", r"goodbye", r"see you", r"later", r"exit", r"quit"],
        "responses": [
            "Goodbye! Have a wonderful day.",
            "See you later! Feel free to chat anytime.",
            "Bye! Take care.",
            "Adios! Stay curious!"
        ]
    },
    "wellbeing": {
        "patterns": [r"how are you", r"hows it going", r"how do you do", r"you good"],
        "responses": [
            "I'm doing great, thank you for asking! How are you?",
            "As a bot, I don't have feelings, but my code is running flawlessly!",
            "Fantastic! Ready to help you with your Python journey.",
            "Doing well! Keeping busy processing data."
        ]
    },
    "identity": {
        "patterns": [r"who are you", r"what is your name", r"whats your name"],
        "responses": [
            "I am PyBot, a friendly Python-powered assistant!",
            "You can call me PyBot. I'm a basic chatbot.",
            "I'm a chatbot built purely out of basic Python loops and logic!"
        ]
    },
    "joke": {
        "patterns": [r"tell me a joke", r"make me laugh", r"joke"],
        "responses": [
            "Why do programmers wear glasses? Because they can't C#!",
            "How many programmers does it take to change a light bulb? None, that's a hardware problem.",
            "There are 10 types of people in the world: those who understand binary, and those who don't.",
            "Why did the Python programmer clear out their garage? Because it was full of junk arrays!"
        ]
    },
    "creator": {
        "patterns": [r"who made you", r"who created you", r"who is your developer"],
        "responses": [
            "Mr Anubhav Raj! Using the power of Python.",
            "Mr Anubhav Raj built me using a custom response library.",
            "I was written in Python script by Mr Anubhav Raj to help demonstrate basic chatbot mechanics."
        ]
    },
    "help": {
        "patterns": [r"help", r"what can you do", r"commands", r"options"],
        "responses": [
            "I can greet you, tell jokes, answer how I'm doing, or just have a basic conversation. Try asking for a joke!",
            "I am programmed to respond to basic text queries. Try saying 'hello', 'who are you', or 'tell me a joke'."
        ]
    }
}

def clean_text(text):
    """Lowercase text and strip away common trailing punctuation."""
    text = text.lower().strip()
    return re.sub(r'[^\w\s]', '', text)

def get_bot_response(user_input):
    """Matches user input against patterns using regular expressions."""
    cleaned_input = clean_text(user_input)
    
    # Iterate through our database to find a matching pattern
    for intent, data in BOT_KNOWLEDGE.items():
        for pattern in data["patterns"]:
            # Check if the pattern exists as a standalone word/phrase inside the input
            if re.search(r'\b' + pattern + r'\b', cleaned_input):
                return random.choice(data["responses"])
                
    # Fallback response if the bot doesn't understand
    return random.choice([
        "I'm not quite sure I understand that. Could you rephrase?",
        "Interesting! Tell me more about that.",
        "My database doesn't have a specific answer for that yet. Try asking for 'help'.",
        "Hmm, I'm still learning. Can you try asking something else?"
    ])

def start_chatbot():
    """Main terminal loop to handle the chat interface."""
    print("==================================================")
    print("🤖 PyBot: Hello! I'm online. (Type 'bye' to exit) ")
    print("==================================================")
    
    while True:
        try:
            user_msg = input("\nYou: ")
            if not user_msg.strip():
                continue
                
            # Fetch response
            bot_reply = get_bot_response(user_msg)
            print(f"🤖 PyBot: {bot_reply}")
            
            # Break loop if it matches a goodbye intent
            cleaned_msg = clean_text(user_msg)
            if any(re.search(r'\b' + bye_pat + r'\b', cleaned_msg) for bye_pat in BOT_KNOWLEDGE["goodbye"]["patterns"]):
                break
                
        except (KeyboardInterrupt, EOFError):
            print("\n🤖 PyBot: Force closing. Goodbye!")
            break

if __name__ == "__main__":
    start_chatbot()
