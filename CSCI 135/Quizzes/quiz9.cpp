// Daniel Oh Quiz 9

/*int main(){
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(img, h, w);
    int out[MAX_H][MAX_W];
    for(int row = 0; row < h; row++){
        for(int col = 0; col < w; col++){ provided code */
            if(row % 2 == 0){ 
                if(col % 2 == 0){ 
                    out[row][col] = 0; 
                }
                else{
                    out[row][col] = img[row][col]; 
                }   
            }
            else if(row % 2 != 0){ 
                if(col % 2 == 0){ 
                    out[row][col] = img[row][col]; 
                }
                else{ 
                    out[row][col] = 0; 
                }
            }
/*            
        }
    }
    writeImage(out, h, w);
    return 0;
}
provided code */