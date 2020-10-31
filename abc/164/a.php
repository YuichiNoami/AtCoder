<?php
fscanf(STDIN, '%d %d', $sheep, $wolve);
echo $wolve >= $sheep ? 'unsafe' : 'safe';