# Exam Details 📝
This examination comprises four questions in total. One question will be randomly selected from each level listed below. If you fail the exam, you will restart at Level 1 when you retake it next time.

# Exam Norminette 📏
The exam does not involve Norminette.

# Exam Questions 🤔
## Question 1 - Level 1
```
  - first_word
  - fizzbuzz
  - ft_strcpy
  - ft_strlen
  - ft_swap
  - putstr
  - repeat_alpha
  - rev_print
  - rot_13
  - rotone
  - search_and_replace
  - ulstr 
```
## Question 2 - Level 2
```
  - alpha_mirror
  - camel_to_snake
  - do_op
  - ft_atoi
  - ft_strcmp
  - ft_strcspn
  - ft_strdup
  - ft_strpbrk
  - ft_strrev
  - ft_strspn
  - inter
  - is_power_of_2
  - last_word
  - max
  - print_bits
  - reverse_bits
  - snake_to_camel
  - swap_bits
  - union
  - wdmatch 
```
## Question 3 - Level 3
```
  - add_prime_sum
  - epur_str
  - expand_str
  - ft_atoi_base
  - ft_list_size
  - ft_range
  - ft_rrange
  - hidenp
  - lcm
  - paramsum
  - pgcd
  - print_hex
  - rstr_capitalizer
  - str_capitalizer
  - tab_mult 
```
## Question 4 - Level 4
```
  - flood_fill
  - fprime
  - ft_itoa
  - ft_list_foreach
  - ft_list_remove_if
  - ft_split
  - rev_wstr
  - rostring
  - sort_int_tab
  - sort_list
```

# Exam Login Details 🔐
	login -> exam
	password -> exam

Type examshell in the terminal.

	login -> your 42 intra username (e.g., rrouille)
	password -> your password

Allow photo check.

In the examshell, you have only the following three commands:
- status - checks the time and other things.
- grademe - checks the pushed exercise (moulinette).
- finish - closes examshell and finishes the exam.

Open a new terminal.

	You can find your exam subject in the subject directory.
	Then, you can see the Rendu directory, which is your repository.
	You must create a folder named by the project and start working.

    
# Exam Submission Details 🚀
When you are ready to submit your function/program, go into `Rendu` and push the folder you created by following the steps below:

1. git add .
2. git status
2. git commit -m "any commit message you like"
3. git push
4. After you git push, type `grademe` in the examshell for your project to be submitted. 

# Exam IDE 💻
You should be able to use both VSCode and Vim in the exam.<br>
[![My Skills](https://skillicons.dev/icons?i=vscode,vim)](https://skillicons.dev)

# Exam Practice 🔍
You can practice for the exam just like you would in the real exam by using this tool :
1. Clone this repository to your local machine:
	```bash
	git clone https://github.com/rphlr/42-Exam_Rank02 <folder_name>
	```
2. Navigate to the cloned folder:
	```bash
	cd <folder_name>
	```
3. Remove all `*.c` files with this simple command:
	```bash
	find . -name "*.c" -type f -delete 
	```
4. (Optional) Generate new `*.c` files with basic information such as the 42 header (which must be updated with your login), a function with the file name, and a prepared main function. Make sure you are at the root of the cloned folder for the following command to work properly:
	```bash
	for dir in */*/; do
		cd "$dir";
		printf "/* ************************************************************************** */\n" > "$(basename "$dir").c";
		printf "/*                                                                            */\n" >> "$(basename "$dir").c";
		printf "/*                                                        :::      ::::::::   */\n" >> "$(basename "$dir").c";
		printf "/*   $(basename "$dir").c                                       :+:      :+:    :+:   */\n" >> "$(basename "$dir").c";
		printf "/*                                                    +:+ +:+         +:+     */\n" >> "$(basename "$dir").c";
		printf "/*   By: <your login> <<your login>@student.42.fr>          +#+  +:+       +#+        */\n" >> "$(basename "$dir").c";
		printf "/*                                                +#+#+#+#+#+   +#+           */\n" >> "$(basename "$dir").c";
		printf "/*   Created: $(date +%Y/%m/%d) $(date +%H:%M:%S) by <your login>          #+#    #+#             */\n" >> "$(basename "$dir").c";
		printf "/*   Updated: $(date +%Y/%m/%d) $(date +%H:%M:%S) by <your login>         ###   ########.fr       */\n" >> "$(basename "$dir").c";
		printf "/*                                                                            */\n" >> "$(basename "$dir").c";
		printf "/* ************************************************************************** */\n\n" >> "$(basename "$dir").c";
		printf "#include <stdbool.h>\n#include <stdio.h>\n#include <stdlib.h>\n#include <unistd.h>\n\nvoid\t$(basename "$dir")()\n{\n\t\n}\n\n/*int\tmain(int argc, char **argv)\n{\n\tif (argc >= 2)\n\t{\n\t\t$(basename "$dir")();\n\t}\n}*/\n" >> "$(basename "$dir").c";
		cd ../..;
	done
	```
5. Congratulations on completing these steps! It is now time to commence the coding process. 😉

# For curious
Here is an additional section that breaks down the command in step 4 for those who are curious:<br>
The command in step 4 is a Bash script that generates new `*.c` files with the basic information needed for each question. Here is a brief explanation of each part of the command:

- `for dir in */*/; do`: This initiates a loop that iterates over each subdirectory in the cloned repository.
- `cd "$dir";`: This changes the working directory to the current subdirectory.
- `printf "/* ************************************************************************** */\n" > "$(basename "$dir").c";`: This writes the first line of the file, which is the 42 header.
- `printf "/* */\n" >> "$(basename "$dir").c";`: This writes the second line of the file, which is an empty line.
- `printf "/* ::: :::::::: */\n" >> "$(basename "$dir").c";`: This writes the third line of the file, which is the file's name.
- `printf "/* $(basename "$dir").c :+: :+: :+: */\n" >> "$(basename "$dir").c";`: This writes the fourth line of the file, which is the file's name again.
- `printf "/* +:+ +:+ +:+ */\n" >> "$(basename "$dir").c";`: This writes the fifth line of the file, which is an empty line.
- `printf "/* By: <your login> <<your login>@student.42.fr> +#+ +:+ +#+ */\n" >> "$(basename "$dir").c";`: This writes the sixth line of the file, which is your login information.
- `printf "/* +#+#+#+#+#+ +#+ */\n" >> "$(basename "$dir").c";`: This writes the seventh line of the file, which is an empty line.
- `printf "/* Created: $(date +%Y/%m/%d) $(date +%H:%M:%S) by <your login> #+# #+# */\n" >> "$(basename "$dir").c";`: This writes the eighth line of the file, which is the creation date and your login information.
- `printf "/* Updated: $(date +%Y/%m/%d) $(date +%H:%M:%S) by <your login> ### ########.fr */\n" >> "$(basename "$dir").c";`: This writes the ninth line of the file, which is the update date and your login information.
- `printf "/* */\n" >> "$(basename "$dir").c";`: This writes the tenth line of the file, which is an empty line.
- `printf "/* ************************************************************************** */\n\n" >> "$(basename "$dir").c";`: This writes the eleventh line of the file, which is an empty line and the start of the function.
- `printf "#include <stdbool.h>\n#include <stdio.h>\n#include <stdlib.h>\n#include <unistd.h>\n\nvoid\t$(basename "$dir")()\n{\n\t\n}\n\n" >> "$(basename "$dir").c";`: This writes the rest of the function, which includes the required header files, the function prototype, and the function definition.
- `cd ../..;`: This changes the working directory back to the root of the cloned repository.

Overall, this command generates new *.c files for each question in the repository with the basic information needed for the exam.