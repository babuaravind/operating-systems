echo "ENTER THE STRING TO CHECK PALINDROME"
read str
len=`echo $str | wc -c` 
len=`expr $len-1 | bc`
i=1
j=`expr $len/2 | bc`
while [ $i -le $j ]
do
k=`echo $str | cut -c $i`
l=`echo $str | cut -c $len`
if [ $k != $l ]
then
echo "$str is not a palindrome"
exit
fi
i=`expr $i+1 | bc`
len=`expr $len-1 | bc`
done
echo "$str is  a palindrome"