BEGIN {
    sum = 0;
    previous = 0; 

    # Seconds in a day
    interval = 24*60*60; 
    
}

NR > 1 {
    midpoint = (previous + $2) / 2; 
    sum += interval * midpoint; 
    previous = $2; 

}


END {
    print sum; 
}



