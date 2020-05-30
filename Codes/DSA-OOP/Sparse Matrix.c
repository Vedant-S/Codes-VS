//Function to add 2 sparse Matrix wherein columns are constant
//1st argument is sparse matrix-1
//2nd argument is sparse matrix-2
//3rd argument is sparse matrix-3 which is the sum of sparse matrix-1 and sparse matrix-2
void addSparseMatrix(int sa[][3], int sb[][3], int sc[][3])
{
  int i, j, k, tr1, tr2;

  //if number of rows or columns of the sparse matrix are not matching, return
  if (sa[0][0] != sb[0][0] || sa[0][1] != sb[0][1])
  {
    printf("\nInvalid matrix size for Addition");
    return;
  }

  tr1 = sa[0][2]; //Total number of rows of sparse matrix-1
  tr2 = sb[0][2]; //Total number of rows of sparse matrix-2

  /*i, j and k are the row counters for sparse matrix-1, 2 and 3 respectively*/
  i = j = k = 1;

  //loop through untill all rows of sparse matrix-1 and sparse matrix-2 are covered.
  while ( i <= tr1 && j <= tr2)
  {
    if (sa[i][0] < sb[j][0])
    {
      sc[k][0] = sa[i][0];
      sc[k][1] = sa[i][1];
      sc[k][2] = sa[i][2];
      k++;
      i++;
    }
    else if (sa[i][0] > sb[j][0])
    {
      sc[k][0] = sb[j][0];
      sc[k][1] = sb[j][1];
      sc[k][2] = sb[j][2];
      k++;
      j++;
    }
    else if (sa[i][0] == sb[j][0] )
    {
      if (sa[i][1] < sb[j][1])
      {
        sc[k][0] = sa[i][0];
        sc[k][1] = sa[i][1];
        sc[k][2] = sa[i][2];
        k++;
        i++;
      }
      else if (sa[i][1] > sb[j][1])
      {
        sc[k][0] = sb[i][0];
        sc[k][1] = sb[i][1];
        sc[k][2] = sb[i][2];
        k++;
        j++;
      }
      else
      {
        sc[k][0] = sb[j][0];
        sc[k][1] = sb[j][1];
        sc[k][2] = sa[i][2] + sb[j][2];
        k++;
        j++;
        i++;
      }
     } // end of else if for matching
    } // end of while

  /*Transfering the rest rows (if any) of sparse matrix-1 to sparse matrix-3*/
  while (i <=tr1)
  {
    sc[k][0] = sa[i][0];
    sc[k][1] = sa[i][1];
    sc[k][2] = sa[i][2];
    k++;
    i++;
  }

  /*Transfering the rest rows (if any) of sparse matrix-2 to sparse matrix-3*/
  while ( j <= tr2 )
  {
    sc[k][0] = sb[j][0];
    sc[k][1] = sb[j][1];
    sc[k][2] = sb[j][2];
    k++;
    j++;
  }

  sc[0][0] = sa[0][0];
  sc[0][1] = sa[0][1];
  sc[0][2] = k-1;
}

//Function to convert a matrix to triplet representation
//the 1st argument is the 2-D array or matrix
//m is the number of rows
//n is the number of columns
//sp is the sparse matrix
void createSparseMatrix(int a[][], m, n, sp[][3])
{
  int i, j, k=1;
  sp[0][0]=m;
  sp[0][1]=n;
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    /*If aij entry is a non-zero value, then copy this value along with its row and column index into sparse matrix sp*/
    if(a[i][j]!=0)
    {
      sp[k][0]=i;
      sp[k][1]=j
      sp[k][2]=a[i][j];
      k++;
    }
  }
 }
 k--;
 sp[0][2]=k; //k rows means k-non zero entries
}

/*Function to display a sparse matrix 3-tuple format */
void displaySparseMatrix(int sp[][3])
{
  int i;
  for(i=0; i<=sp[0][2]; i++)
   printf("\n%d\t%d\t%d\n", sp[i][0], sp[i][1], sp[i][2]);
}

/*Function to find the transpose of a sparse matrix with 3-tuple format */
void transposeSparseMatrix(int sp[][3], int ts[][3])
{
  int i, j, k, n;
  ts[0][0]=sp[0][1];
  ts[0][1]=sp[0][0];
  ts[0][2]=sp[0][2];
  k=1;
  for(i=0; i<sp[0][1]; i++)
  {
   for(j=1; j<=sp[0][2]; j++)
   /* if a column number of current triple == i then insert the current triple in ts */
   if(i==sp[j][1])
   {
     ts[k][0]=i;
     ts[k][1]=sp[j][0];
     ts[k][2]=sp[j][2];
     k++;
   }
 }
}
