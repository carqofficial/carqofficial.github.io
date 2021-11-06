#include <stdio.h>

int main()
{
    // Read the number of test cases.
    int T;
    printf("\nEnter the number of the test cases : ");
    scanf("%d", &T);
    int K;
    int A[T], B[T];
    int ans[T];
    K = T;
    while (T > 0)
    {
        // Read the input A, b
        scanf(" \n%d %d", &A[T], &B[T]);
        ans[T] = A[T] + B[T];
        // Compute the ans.
        T--;
    }
    while (K > 0)
    {
        printf("\n%d", ans[K]);
        K--;
    }
    return 0;
}
#include <stdio.h> 

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	while (T--) {
		// Read the input a, b
		int a, b;
		scanf("%d %d", &a, &b);

		// Compute the ans.
		int ans = a + b;
		printf("%d\n", ans);
	}

	return 0;
}