//Lab-6
//Create structure for Books and display the data.
#include <stdio.h>

//Define book structure
struct BookStructure {
	char book_title[50];
	char author_name[70];
	char book_publication[50];
	float book_price;
};

int main(){

	int size;
	
	printf("Enter the number of books:: ");
	scanf("%d", &size);
	
	struct BookStructure books[size];
	
	
	printf("Enter book details::");
	for(int i = 0; i < size; i++){
		
		printf("Book # %d \n", i + 1);
		
		//Read Title using 'fgets' and standard input method 'stdin'
		printf("Book Title:");
		getchar();
		fgets(books[i].book_title, sizeof(books[i].book_title), stdin);

		// Read author name
        printf("Author Name: ");
        fgets(books[i].author_name, sizeof(books[i].author_name), stdin);

        // Read publication
        printf("Publication Info: ");
        fgets(books[i].book_publication, sizeof(books[i].book_publication), stdin);

        // Read price
        printf("Price of Book: ");
        scanf("%f", &books[i].book_price);
	}
	
	// Display data of n books
    printf("\nBook Details::\n");
    for (int i = 0; i < size; i++) {
        printf("Book %d:\n", i + 1);
        printf("Book Title: %s", books[i].book_title);
        printf("Author Name: %s", books[i].author_name);
        printf("Publication: %s", books[i].book_publication);
        printf("Book Price: %.2f\n", books[i].book_price);
    }

    return 0; // Return 0 to indicate successful execution

}
