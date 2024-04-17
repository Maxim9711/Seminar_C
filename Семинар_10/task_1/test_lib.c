void ch_smbls(int size, char * line)
{
    char smbl;
    for (int i=0, j=0; i < size; i = j + 1){
        while (line[i] == ' ')
            i++;
        
        j = i + 1;
        
        while (line[j] == ' ')
            j++;
        
        if (j >= size)
            break; 
            

        smbl = line[i];
        line[i] = line[j];
        line[j] = smbl;
    }
}