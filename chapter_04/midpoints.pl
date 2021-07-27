#!/usr/bin/perl


my $filename = $ARGV[0]; 
my $interval = 20;

my $sum = 0;

open(my $data, "<", $filename);

my $new = 0; my $prev = 0; 

for (my $i = 0; my $line = <$data>; $i++)
{
    chomp $line;
    my @fields = split(",", $line);

    $new = $fields[1];

    my $value = $new;
    $sum += $value;

}

$sum *= $interval;
print "The sum is $sum\n"; 
