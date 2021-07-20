
BEGIN  {
    sum = 0.0; 
}

{   
    sum = sum + ($3 * 14) ; 
    print (int($3) * 10);
} 

END {
    print sum; 
}
