if [ "$#" -ne 1 ]; then
    echo "Illegal number of parameters"
else

    echo "Checking..."
    if [[ -e $1 ]] ; then
        sleep 1
        echo "$1 exists."
    else
        sleep 1
        echo "$1 doesn't exist."
    fi
    if [[ -f $1 ]] ; then
        sleep 1
        echo "$1 is a regular file."
    else
        sleep 1
        echo "$1 isn't a regular file."
    fi
    if [[ -d $1 ]] ; then
        sleep 1
        echo "$1 is a directory."
    else
        sleep 1
        echo "$1 isn't a directory."
    fi
    if [[ -r $1 ]] ; then
        sleep 1
        echo "$1 is readable by the user."
    else
        sleep 1
        echo "$1 isn't readable by the user."
    fi
    if [[ -w $1 ]] ; then
        sleep 1
        echo "$1 is writable by the user."
    else
        sleep 1
        echo "$1 isn't writable by the user."
    fi
    if [[ -N $1 ]] ; then
        sleep 1
        echo "$1 was modified since last read."
    else
        sleep 1
        echo "$1 wasn't modified since last read."
    fi
    sleep 2
    echo "...done."
    sleep 3
fi