
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cinema.h"

struct movie {
    char title[MAX_STR_LENGTH];
    int length;
    double rating;

    struct movie *next;
};

struct genre {
    char name[MAX_STR_LENGTH];

    struct movie *movies;
    struct genre *next;
};

struct cinema {
    struct genre *genres;
};

struct genre *find_genre(struct cinema *cinema, char *genre_name);
void print_movie(struct movie *movie);
struct movie *new_movie(char *movie_name, int length, double rating, struct movie *next);
struct movie *last_movie(struct movie *head);

///////////////////////////////////////////////////////////

struct cinema *create_cinema() {
    struct cinema *new = malloc(sizeof(struct cinema));
    new->genres = NULL;

    return new;
}

void add_genre(struct cinema *cinema, char *genre_name) {
    struct genre *new = malloc(sizeof(struct genre));
    strcpy(new->name, genre_name);
    new->movies = NULL;
    new->next = NULL;

    new->next = cinema->genres;
    cinema->genres = new;
}

int add_movie(
    struct cinema *cinema,
    char *genre_name,
    char *movie_name,
    int length,
    double rating
) {
    struct genre *genre = find_genre(cinema, genre_name);
    if (genre == NULL) {
        return NOT_FOUND;
    }

    // From here on, we have definitely found the genre

    struct movie *new = new_movie(movie_name, length, rating, NULL);
    // Case 1: List is empty
    if (genre->movies == NULL) {
        genre->movies = new;
    } else {
        // Case 2: List is not empty
        struct movie *end_list = last_movie(genre->movies);
        end_list->next = new;
    }

    return SUCCESS;
}

void print_genre(struct cinema *cinema, char *genre_name) {
    struct genre *genre = find_genre(cinema, genre_name);
    if (genre == NULL) {
        printf("Genre doesn't exist\n");
        return;
    }

    printf("%s movies:\n", genre->name);

    struct movie *movie = genre->movies;
    while (movie != NULL) {
        print_movie(movie);
        movie = movie->next;
    }

    return;
}

/** HELPER FUNCTIONS **/

// `find_genre` finds the corresponding genre in the cinema.
//
// `find_genre` takes in:
// - the pointer to the struct cinema which contains the genres and
// - the genre name we want to find.
//
// `find_genre` returns the pointer to the corresponding genre or
// NULL if there is no matching genre.
struct genre *find_genre(struct cinema *cinema, char *genre_name) {
    struct genre *curr = cinema->genres;
    int found = 0;
    while (curr != NULL && found == 0) {
        if (strcmp(curr->name, genre_name) == 0) {
            found = 1;
        } else {
            curr = curr->next;
        }
    }
    // At the end of the while loop
    // if found == 1, then curr == desired genre
    // if found == 0, then curr == NULL

    return curr;
}

// `print_movie` prints the movie in the desired format.
//
// `print_movie` takes in a pointer to the struct movie we want to print.
// 
// `print_movie` returns nothing.
void print_movie(struct movie *movie) {
    printf("%s, %.2lf/10 (%d)\n", movie->title, movie->rating, movie->length);
}

// `new_movie` allocates memory for a new movie, initialises it and returns it.
//
// `new_movie` takes in:
// - the name of the new movie,
// - the length of the new movie,
// - the rating of the new movie and
// - the next pointer for the new movie.
//
// `new_movie` returns a pointer to the new movie.
struct movie *new_movie(char *movie_name, int length, double rating, struct movie *next) {
    struct movie *new = malloc(sizeof(struct movie));
    strcpy(new->title, movie_name);
    new->length = length;
    new->rating = rating;
    new->next = next;

    return new;
}

// `last_movie` gets the last movie in a linked list of movies.
//
// `last_movie` takes in the head of a linked list of movies.
//
// `last_movie` returns a pointer to the last movie in the linked list of movies.
struct movie *last_movie(struct movie *head) {
    if (head == NULL) {
        return head;
    }

    struct movie *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    return curr;
}