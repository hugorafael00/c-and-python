#include <cs50.h>
#include <stdio.h>
#include <string.h>

//max number of candidates
#define MAX 9

int voter_count;
// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }
    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{

    for(int j = 0; j < voter_count; j++)
    {
        if(strcmp(candidates[j].name, name) == 0)
        {
            candidates[j].votes++;
            return true;
        }
    }
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    int qntd = voter_count; int maiorx = 0; int maiory = 0;

    string maiorcand;

    string maiorcandy;

    for(int x = 0; x < voter_count; x++)
    {

        if(candidates[x].votes == maiorx)
        {
        }

        if(candidates[x].votes > maiorx)
        {
            maiorx = candidates[x].votes;
            maiorcand = candidates[x].name;
        }
    }

    int maiorxx  = maiorx - 1;
    for(int y = 0; y < voter_count; y++)
    {
        if(candidates[y].votes == maiory)
        {
        }
        if((candidates[y].votes > maiory) & (candidates[y].name != maiorcand))
        {
            maiory = candidates[y].votes;
            maiorcandy = candidates[y].name;
        }
    }

    if(maiorxx == maiory)
    {
        printf("melhor do mundo: %s\n", maiorcand);
        return;
    }

    if(maiorxx != maiory)
    {
    printf("empate\n");
    return;
    }
}
