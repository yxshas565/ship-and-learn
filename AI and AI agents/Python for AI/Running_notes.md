## Python for AI 


1. for storing file names preferabbly use all lower case and dashes/underscore
2. it will usually match how projects will appear in git


Workspace = It's like a bookmark of our project
-> It remmebers which folder we wre working on , editor settings , files open , debugging config.


Virtual enviroment = It's like a private copy of Python for each project
To create via terminal
"python -m venv .venv"

To activate manually : ".\.venv\Scripts\Activate.ps1"


Packages = They are pre-written codes that otehrs ahve created for us to use. We can import from them

Eg:-
1. requests
2. pandas
3. openai


Anaconda = It's another tool that manages Python environment and packages. It's most sueful in datascience world because it comes preloaded with many data science packages 


Packages and pip :- Packages are collection of python code that solve specific problem
pip is python's package manager


Syntax : Every porgramming lang. has ints own set of rules . Python's syntax is knwon for being clean and readable.


Indentation : Spaces to seprate block's of code and make it effecient for reading
--> Python won't run if indentation is wrong


Variables names follow specific rule like it cant start with a number
Python prefers snake_case --> using underscore for separating chars


Integers = whole numbers without decimals 
Float = whole numbers which include decimal numbers 


Python is "0" index based programming language 



# External tools

Python has packages of everything

1. Web scraping
2. Data analysis 
3. AI/ModuleNotFoundError
4. API's
5. Automation


Using packages

1. Built-in = comes withpython
2. External = Need to install first with pip


Understanding terminology :- 

1. Module = A single python file 
2. Package = A folder conatining multiple modules 
3. Function =  A reusuable block of code 
4. Class = A blueprint for creating objects


# Installing packages (Different ways of installing)

1. pip install requests                     # Particular module
2. pip install requests==2.28.0             # Particular version of module
3. pip install pandas numpy matplotlib      # Mulitple module's
4. pip freeze > requirement.txt             # list of all project's packages in txt file
5. pip install -r requirements.txt          # Installing all modules with specific version as mentioned in requirement.txt file


-> Best way to know more about which particular package is asking an ai tool based on requirements of project 


# Name conflicts 

1. if we improt a module named "XXX" and also use the variable named "XXX" below then module is gone



# Working with API's

.      -> Current folder
..     -> One folder up
../..  -> Two folders up
../../.. -> Three folders up
../../../.. -> Four folders up