int die (int a_die)
{
  int roll = rand() % a_die + 1;
  return ( roll );
}

//needs length of array, and the actual array.
int array_min (int elements, int array[]) {
  int counter;
  int min = array[0];
  
  for (counter = 0; counter < elements; counter++) {
    if (array[counter] < min) {
      min = array[counter];
    }
  }
  return ( min );
}

int new_stat_roll ()
{
  int statroll [4] = {die(6), die(6), die(6), die(6)};
  int statrolls = statroll[0]+statroll[1]+statroll[2]+statroll[3]-array_min(4, statroll);
  return ( statrolls );
}

