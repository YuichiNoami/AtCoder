<?php
fscanf(STDIN, '%d', $cnt);
for ($i=0; $i < $cnt; $i++) { 
    fscanf(STDIN, '%s', $items[]);
}
$ans = count(array_values(array_unique($items)));
echo $ans;