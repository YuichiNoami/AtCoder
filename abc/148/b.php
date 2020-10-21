<?php
fscanf(STDIN, '%d', $len);
fscanf(STDIN, '%s %s', $evenStr, $oddStr);
for ($i=0; $i < $len; $i++) { 
    echo $evenStr[$i];
    echo $oddStr[$i];
}