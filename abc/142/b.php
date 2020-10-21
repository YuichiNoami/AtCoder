<?php
fscanf(STDIN, '%d %d', $cnt, $must);
$friends = explode(' ', trim(fgets(STDIN)));
$ans = 0;
for ($i=0; $i < $cnt; $i++) { 
    if ($friends[$i] >= $must) {
        $ans++;
    }
}
echo $ans."\n";