echo "Enter the three values"  
read a b c 
if ((($a > $b) && ($a > $c))) 
then 
echo "$a is greater"
elif ((($b > $a) && ($b > $c))) 
then 
echo "$b is greater"
elif ((($c > $b) && ($c > $a))) 
then 
echo "$c is greater"
fi 
