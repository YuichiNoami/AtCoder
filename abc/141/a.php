<?php
fscanf(STDIN, '%s', $weather);
switch ($weather) {
    case 'Sunny':
        echo "Cloudy\n";
        break;
    
    case 'Cloudy':
        echo "Rainy\n";
        break;

    case 'Rainy':
        echo "Sunny\n";
        break;

    default:
        break;
}