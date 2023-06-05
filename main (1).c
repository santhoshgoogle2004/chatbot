#include <stdio.h>
#include <string.h>

void chatbotResponse(char* message) {
    if (strcmp(message, "Hii") == 0) {
        printf("Hii! How can I assist you today?\n");
    } else if (strcmp(message, "How are you") == 0) {
        printf("I'm an AI, so I don't have feelings, but I'm here to help!\n");
    }
    else if (strcmp(message, "how are you") == 0) {
        printf("I'm an AI, so I don't have feelings, But I,m here to help!\n");
    }
    else if (strcmp(message, "Your name") == 0) {
        printf("I'm just a simple chatbot. You can call me ChatBot.\n");
    } 
    else if (strcmp(message, "your name") == 0) {
        printf("I'm just a simple chatbot. You can call me chatbot.\n");
    }
    else if (strcmp(message, "Play any song tamil") == 0) {
        printf("I'm just chatbot.\n");
    }
    else if (strcmp(message, "play any song tamil") == 0) {
        printf("I'm just chatbot.\n");
    }
    else if (strcmp(message, "SIET full form") == 0) {
        printf("Sri Shakthi Institute Of Engineering And Technology.\n");
    }
    else if (strcmp(message, "siet full form") == 0) {
        printf("Sri Shakthi Institute Of Engineering And Technology.\n");
    }
    else if (strcmp(message, "sri shakthi institute of engineering and technology website") == 0) {
        printf("https://www.siet.ac.in/ \n");
    }
    else if(strcmp(message,"I love you") == 0) {
        printf("Love you to \n");
    }
    else if(strcmp(message,"i love you") == 0) {
        printf("Love you to \n");
    }
    else if(strcmp(message,"I miss you") == 0) {
        printf("Miss you to \n");
    }
    else if(strcmp(message,"i miss you") == 0) {
        printf("Miss you to \n");
    }
  else if (strcmp(message,"you like me") == 0) {
      printf("Yes i like you \n");
  }
  else if (strcmp(message,"C program") == 0) {
      printf("https://www.w3schools.com/c/index.php \n");
  }
  else if (strcmp(message,"Java program") == 0) {
      printf("https://www.w3schools.com/java/ \n");
  }
  else if (strcmp(message,"best coding language") == 0) {
      printf("HTML,CSS,JavaScript, or Python.\n");
  }
  else if(strcmp(message,"What is the most popular programming language") ==0) {
      printf("Python is currently the most sought-after programming language \n");
  }
    else if (strcmp(message, "Exit") == 0) {
        printf("Goodbye! Have a nice day.\n");
    } else {
        printf("Sorry, I didn't understand that. Can you please rephrase?\n");
    }
}

int main() {
    char message[100];

    printf("Welcome to the ChatBot. How can I assist you?\n");
    printf("Enter 'Exit' to quit the chat.\n");

    while (1) {
        printf("User: ");
        fgets(message, sizeof(message), stdin);
        message[strcspn(message, "\n")] = '\0';  // Remove the trailing newline character

        chatbotResponse(message);

        if (strcmp(message, "Exit") == 0) {
            break;
        }
    }

    return 0;
}
