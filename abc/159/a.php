<?php
fscanf(STDIN, '%d %d', $even, $odd);
echo $even * ($even - 1) / 2 + $odd * ($odd - 1) / 2;