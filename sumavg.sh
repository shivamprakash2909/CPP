echo "Enter number of elements"
read n
sum=0
i=1
echo "Enter $n elements"

while [ $i -le $n ]
do
    read num
    sum=$((sum + num))
    i=$((i + 1))
done

avg=$((sum / n))

echo "Sum is $sum"
echo "Average is $avg"