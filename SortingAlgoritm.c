// ## | 버블 정렬(Bubble Sort)

        #include <stdio.h>
        #include <stdlib.h>
        #define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t))
        #define MAX_SIZE 5

        int list[MAX_SIZE];
        int n;

        void bubble_sort(int list[], int n)
        {
            int i, j, temp;
            for (i = n - 1; i > 0; i--)
            {
                for (j = 0; j < i; j++)
                {
                    if (list[j] > list[j + 1])
                        SWAP(list[j], list[j + 1], temp);
                }
            }       
        }

        int main(void)
        {
            int i;
            n = MAX_SIZE;
            int list[n] = {6, 3, 9, 1, 2};

            bubble_sort(list, n);

            for (i = 0; i < n; i++)
                printf("%d", list[i]);

            return 0;

//---------------------------------------------------------------------------------------------------------------------------

// ## | 선택 정렬(Selection Sort)

        #include <stdio.h>
        #include <stdlib.h>
        #define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t))
        #define MAX_SIZE 5

        int list[MAX_SIZE];
        int n;

        void selection_sort(int list[], int n)
        {
            int i, j, least, temp;
            for (i = 0; i < n-1; i++)
            {
                least = i;
                for (j = i+1; j < n; j++)
                {
                    if (list[j] < list[least])
                        least = j;
                    SWAP(list[i], list[least], temp);
                }
            }       
        }

        int main(void)
        {
            int i;
            n = MAX_SIZE;
            int list[n] = {6, 3, 9, 1, 2};

            selection_sort(list, n);

            for (i = 0; i < n; i++)
                printf("%d", list[i]);

            return 0;
            

//---------------------------------------------------------------------------------------------------------------------------

// ## | 삽입 정렬(Insertion Sort)
          
        #include <stdio.h>
        #include <stdlib.h>
        #define MAX_SIZE 5

        int list[MAX_SIZE];
        int n;

        void insertion_sort(int list[], int n)
        {
            int i, j, key;
            for (i = 1; i < n; i++)
            {
               key = list[i];
                for (j = i-1; j >= 0 && list[j] > key ; j--)
                    list[j+1] = list[j];
                list[j+1] = key;
            }       
        }

        int main(void)
        {
            int i;
            n = MAX_SIZE;
            int list[n] = {6, 3, 9, 1, 2};

            insertion_sort(list, n);

            for (i = 0; i < n; i++)
                printf("%d", list[i]);

            return 0;

//---------------------------------------------------------------------------------------------------------------------------

// ## | 쉘 정렬(Shell Sort)

        #include <stdio.h>
        #include <stdlib.h>
        #define MAX_SIZE 5

        int list[MAX_SIZE];
        int n;
        
        inc_insertion_sort(int list[], int first, int last, int gap)
        {
            int i, j, key;
            for (i=first+gap; i<=last; i=i+gap)
            {
                key=list[i];
                for(j=i-gap; j>=first && key<list[j]; j=j-gap)
                    list[j+gap]=list[j];
                list[j+gap] = key;
            }
        }
        void shell_sort(int list[], int n)
        {
            int i, gap;
            for (gap=n/2; gap>0; gap=gap/2)
            {
                if((gap%2)==0)
                    gap++;
                for(i=0; i<gap; i++)
                    inc_insertion_sort(list, i, n-1, gap);
            }  
        }

        int main(void)
        {
            int i;
            n = MAX_SIZE;
            int list[n] = {6, 3, 9, 1, 2};

            shell_sort(list, n);

            for (i = 0; i < n; i++)
                printf("%d", list[i]);

            return 0;

//---------------------------------------------------------------------------------------------------------------------------

// ## | 퀵 정렬(Quick Sort)
        #include <stdio.h>
        #include <stdlib.h>
        #include <time.h>
        #define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t))
        #define MAX_SIZE 5

        int list[MAX_SIZE];
        int n;
        
        int partition(int list[], int left, int right);
        {
            int pivot, temp;
            int low, high;
          
            low=left;
            high=right+1;
            pivot=list[left];
          do
          {
              do
                  low++;
              while(list[low]<pivot);
              do
                  high--;
              while(list[high]>pivot);
              if((low<high))
                  SWAP (list[low], list[high], temp);
          }while (low<high);
          
          SWAP (list[left], list[high], temp);
          
          return high;
        }
        
        void quick_sort(int list[], int left, int right)
        {
            if(left<right)
            [
                int q=partition(list, left, right);
                quick_sort(list, left, q-1);
                quick_sort(list, q-1; right);
            }
        }

        int main(void)
        {
            int i;
            n = MAX_SIZE;
            int list[n] = {6, 3, 9, 1, 2};

            quick_sort(list, 0, n-1);

            for (i = 0; i < n; i++)
                printf("%d", list[i]);

            return 0;
          
