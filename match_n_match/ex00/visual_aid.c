

 Example: "9...7...." "2...9..53" ".6..124.." "84...1.9."
 
 "5.....8.." ".31..4..." "..37..68."".9..5.741" "47......." 

//there is 9 input strings with numbers (1-9) and dots (.)
//input strings are in descending order
//dots (.) need to be replaced by numbers (1-9) acording to sudoku rules

9 . . . 7 . . . .
2 . . . 9 . . 5 3
. 6 . . 1 2 4 . .
8 4 . . . 1 . 9 .
5 . . . . . 8 . .
. 3 1 . . 4 . . .
. . 3 7 . . 6 8 .
. 9 . . 5 . 7 4 1
4 7 . . . . . . .

9 1 4 3 7 5 2 6 8
2 8 7 4 9 6 1 5 3
3 6 5 8 1 2 4 7 9
8 4 6 5 2 1 3 9 7
5 2 9 6 3 7 8 1 4
7 3 1 9 8 4 5 2 6
1 5 3 7 4 9 6 8 2
6 9 8 2 5 3 7 4 1
4 7 2 1 6 8 9 3 5

Ideas:
//make a 2D array with both rows(1D) and columns(2D).

//Advance through the second dimension (columns) until a dot is found. 1 while loop

//Check rows, columns and squares for a single possibility to be found. 3 if loops

//If more than one (1) possibility is found keep searching for next dot (.). Return to loop

//When a single (1) possibility is found, change the dot (.) for that number

//If the end of the column is reached, advance to next column and repeat process.

//If last row of last column is reached start anew to fill dots (.) from the beggining