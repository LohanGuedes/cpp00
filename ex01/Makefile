# [LOHAN] - [lguedes@student.42.rio]

CFLAGS = -Wall -Werror -Wextra
NAME = PhoneBook
CONTAINER_NAME = phonebook_container
DOCKER_IMAGE_NAME = phonebook_image
CPP = g++ 

SRCS += Contact.cpp PhoneBook.cpp main.cpp

	

all: ${NAME}

${NAME}:
	$(CPP) $(CFLAGS) $(SRCS) -o $(NAME) && ./$(NAME)

clean: 
	@rm -r $(NAME)

re: clean all

container:
	docker rm -f $(CONTAINER_NAME)
	docker build -t $(DOCKER_IMAGE_NAME) .
	docker run -d --name $(CONTAINER_NAME) $(DOCKER_IMAGE_NAME)
	docker exec -ti $(CONTAINER_NAME) bash
