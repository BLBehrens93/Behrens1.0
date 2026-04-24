## Behrens1.0
## Portfolio Prep
## CS-250 Module 8 Portfolio Item

# How do I interpret user needs and implement them into a program?
I record all the important points that the user needs. Detailed notes about the users needs, but not too detailed where the information becomes complex. Then, I'll take this information and use it with the knowledge I have in programming to design/develop simple, efficient, and effective code.

# How does creating “user stories” help with this?
User Stories helps compact the users important points. Creating user stories prior to the design/development phase is necessary and helps ensure the design/development phase is as productive as possible.

# How do I approach developing programs?
I would take the important information from the user (and product owner) to create user stories and also figure out solutions to the task at hand. I'll get verification on my user stories from my supervisor (or a product owner) as well as the user/customer. During the design/development phase I'll break the project down into small pieces so I can manage them more efficiently. I'll figure out what functions and data structures will work best. Also, how the program will flow. Once those things are figured out, I'll start building/designing/developing the program so that it's simple, efficient, and effective. From there I can do refactoring and fixing bugs. I'll also want to go through the program to see if it's sustainable or maintainable. Ask myself, "could someone else knowledge/understand my code in this program?" Then finally test, do rework if need be and retest until I reach the definition of "done".

# What Agile processes do I hope to incorporate into my future development work?
I intend to use many of them, if not all of them as much as possible. I think the big ones I'll emphasize the most starting out will obviously be collaborating with team members as much as possible to learn and gather new insights from them, but also breaking my work down into smaller chunks (iterations and sprints). I've noticed in previous programming courses when I enter a zone (specifically coding), I don't stop and go through my work to see if it's viable as much as I should. Sometimes I'll bunch it all together which isn't good programming practice. But I would do my best to incorporate every Agile process.

# What does it mean to be a good team member in software development?
Obivously being a friendly, fun person to work with. But that's paramount in any work environment. I would kindly ask coworkers for help when I need it and ask them if they need help. To challenge one another and not just give each other the answer if we believe we (them and myslef) can figure out the solution to a problem. When giving each other feedback, be respectful and helpful. Give constructive criticism when it is necessary and do our best to avoid destructive criticism. Hold each other responsible and accountable for our work and our actions. If anyone can do those things as consistently as possible, then I would say they're a good team member.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## Behrens1.0
## Portfolio
## CS-210 Module 8 Portfolio Item (Project 3) (7-3)

# Summarize the project and what problem it was solving.
For this project I was tasked with designing a program to help a grocery store, the Corner Grocer, figure out what items and how many of those items were purchased in a single working day. The insight received from the program would further help the Corner Grocer make any improvements to the layout of their store. The program simply reads the Corner Grocer's input file (CS210_Project_Three_Input_File.txt) and then writes (or transfers) that data into an output file (frequency.dat). As the data is written into the output file, the program takes an item sees how many times that item was purchased and records it with a number by the item. For example, if Carrots would be listed eight separate times on the input file, so then the program writes it into the output file as, Carrots 8. The program also displays every item and its frequency (like 8) if the user chooses to do so. It also displays the frequencies in a histogram form (instead of Carrots 8, Carrots ********). All of these features are presented right from the start for a user to select.

# What did you do particularly well?
I think I did a pretty good job with organizing my code in the program so that it is readable and easy to follow. I also included code to deal with error handling, specifically for the users input.

# Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
I did notice when I was basically finished with testing/running that the input had to written with a capital letter character (case sensitivity). And instead of going back to write more code to handle that, I simply added a comment in the output statement that was right before the input statement to say, "Enter an item. First letter needs to be capitalized." Which was the easy way out of having to go back to write more code for it. I was essentially at the finish line of the project and the program did run the way it was suppose to, so I put that comment in that statement so the user knew what to enter. But if the user didn't have a capital letter, program prompted an error message telling the user to capitalize the input. Regardless, I should went back and written the code for it. One of these days I'll have to go back in and adjust it.

# Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
Using the Map and Pair containers were the most tedious since we didn't have much time to work with that material in the course. I had to review the ranged for loops for the Map and Pair containers as well. I took the most time in that area of the program and went with that approach. Other options were obviously possible, but they appeared more sticky/clustered and seemed harder to read/follow in the code.

# What skills from this project will be particularly transferable to other projects or course work?
I will use everything I did from this project and transfer the knowledge/understanding to other courses in the Computer Science program. Specifically in other programming languages. A lot of languages share many similarities that help programmers learn and become more versatile.

# How did you make this program maintainable, readable, and adaptable?
The program is maintainable largely due to OOP since I've used a Class where functions do one specific objective. If changes need to be made, then they can be able in the class declaration or definition if need be. There isn't a lot of duplications within the code. It is readable since I used plain English for variable, function, parameter, and object names. The program is adaptable since data can be added to the class within the class declaration (or in the definition if need be). The program could use some improvements, but overall it does what it is suppose to do.
