<?php
fscanf(STDIN, '%s %s', $aKey, $bKey);
fscanf(STDIN, '%s %s', $cnt[$aKey], $cnt[$bKey]);
fscanf(STDIN, '%s', $target);
$cnt[$target]--;
echo $cnt[$aKey]. ' ' . $cnt[$bKey];