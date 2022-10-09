#!/bin/bash
#!/bin/bash
echo "Bash version ${BASH_VERSION}..."
for i in {0..10}
do
echo "Welcome $i times"
done

#!/bin/bash
# set counter 'c' to 1 and condition 
# c is less than or equal to 5
for (( c=1; c<=5; c++ ))
do 
   echo "Welcome $c times"
done

echo $(date +%X)
       