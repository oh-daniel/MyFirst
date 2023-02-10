while(cin >> directions){ //input can be D U L R
        for(int i = 0; i < directions.size(); i++){
            if(directions == "D" && maze[row + 1][column] == 0){ //checks for letter and if the consequential position would be empty (0)
                row = row + 1;
            }
            else if(directions == "U" && maze[row - 1][column] == 0){
                row = row - 1;
            }
            else if(directions == "L" && maze[row][column - 1] == 0){
                column = column - 1;
            }
            else if(directions == "R" && maze[row][column + 1] == 0){
                column = column + 1;
            }
        }
    }
    if(column == ending_col && row == ending_row){ // if we get to the end by matching columns and rows, maze succesful
        cout << "You got out of the maze" << endl;
    }
    else{
        cout << "You are stuck in the maze" << endl;
    }
    return 0;
}