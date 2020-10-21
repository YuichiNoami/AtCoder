<?php
fscanf(STDIN, '%d', $cnt);
$map = ['AC' => 0, 'WA' => 0, 'TLE' => 0, 'RE' => 0];
for ($i=0; $i < $cnt; $i++) { 
    fscanf(STDIN, '%s', $str);
    $map[$str]++;
}
echo "AC x ".$map['AC']."\n";
echo "WA x ".$map['WA']."\n";
echo "TLE x ".$map['TLE']."\n";
echo "RE x ".$map['RE']."\n";
