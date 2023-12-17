# CS-210

# Summarize the project and what problem it was solving.
  The goal of this project was to create a program that will calculate and display accrued interest and final monetary values saved in a savings account based on the initial deposit, monthly deposits, yearly interest rate, and length of time.

# What did you do particularly well?
  I thought I did pretty well with how the displays were formatted as it was particularly challenging initially. I was especially proud of ensuring that the list of displayed values were spaced properly and consistently regardless of the number of digits the values may have.

# Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
  I did not have extensive input validation placed into this project because exception handling was covered a little after this project's submission deadline, but after learning about catching exceptions, I would be able to code for more problematic scenarios users may run into while using this program.
  As an example, the program in its current state has a check to ensure the user inputs float values within certain ranges, such as only positive values, but if the user were to input a string or a character instead of a float, the program runs into a type-mismatch error and is unable to recover from it.
  Adding exception handling would solve this issue.

# Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
  I believe writing code for the interest gained during each specific year was most challenging since it required an extra step in the calculation that deducts the interest gained from all prior to the current one. I overcame this difficulty by spending some time outside of coding to think about how I would solve this     if it were purely a mathematical question. Once I figured out several potential solutions, I tried applying each one to see if the 'logic' worked when translated into the base code I already set up. Resources like the zyBooks modules, especially the module covering for loops, StackOverflow, and even GitHub were very     helpful.

# What skills from this project will be particularly transferable to other projects or course work?
  Practicing to code is just like practicing a language, and I think as long as it is kept up with and done frequently, a person will never completely forget it. I do think that the critical thinking portion this project required will be most helpful for future projects and courses because this project was the first of    its kind to force to me think outside of the box. There were several scenarios where once I finally had an "Aha!" moment for a tough question I spent lots of time on, I was surprised at the simplicity of the answer and how it only required some thinking patterns that my brain doesn't need to experience in my daily       life.0

# How did you make this program maintainable, readable, and adaptable?
  I created a class with public and private members, with functions that target specific tasks. If any edits are made to the program, the editor only has to manipulate the relevant functions without fear of compromising the rest of the program code. The program also makes use of header files so that 'main' stays clean     and readable.
