#include<iostream>

using namespace std;
class Match
{
public:
    string team1,team2;
};
class Standing : public Match
{
public:
    void Match ()
    {
        cout<< "\nEnter Team 1 : ";
        cin>>team1;
        cout<< "\nEnter Team 2 : ";
        cin>>team2;
        cout<<"\nMatch Details Added Successfully \n"<<endl;
    }

    void viewStandings(){
    cout<<endl<<"Recent Year's Team Standings: "<<endl<<endl;
    cout<< "Team-1 : IND Pts 18 "<<endl;
    cout<< "Team-2 : SA  Pts 14 "<<endl;
    cout<< "Team-3 : AUS Pts 14 "<<endl;
    cout<< "Team-4 : NZ  Pts 10 "<<endl;
    cout<< "Team-5 : PAK Pts  8 "<<endl;
    cout<< "Team-6 : AFG Pts  8 "<<endl;
    cout<< "Team-7 : ENG Pts  6 "<<endl;
    cout<< "Team-8 : BAN Pts  4 "<<endl;
    cout<< "Team-9 : SL  Pts  4 "<<endl;
    cout<< "Team-10: NED Pts  4 "<<endl<<endl;
    }
};
class BookTickets : public Standing //Multilevel Inheritance
{
public:

    int availableTickets=15000;

    void Tickets()
     {
        cout<< "\nEnter the match you want to book tickets for: ";
        string s;
        cin>>s;
        cout<< "\nSelect Ticket Type:"<<endl;
        cout<< "1. Economy\n"<< "2. 1st Class\n"<< "3. Ground Stand\n"<< "4. VIP\n"<< "\nPlease Enter your Ticket Type Choice: ";

        int ticketTypeChoice;
        cin >> ticketTypeChoice;
        string ticketType;
        switch (ticketTypeChoice) {
            case 1:
                ticketType = "Economy";
                break;
            case 2:
                ticketType = "1st Class";
                break;
            case 3:
                ticketType = "Ground Stand";
                break;
            case 4:
                ticketType = "VIP";
                break;
            default:
                ticketType = "Unknown";
        }

    int ticketPrice;
    switch (ticketTypeChoice) {
        case 1:
            ticketPrice = 250;
            break;
        case 2:
            ticketPrice = 500;
            break;
        case 3:
            ticketPrice = 200;
            break;
        case 4:
            ticketPrice = 5000;
            break;
        default:
            ticketPrice = 0;
    }

    cout << endl<<"Ticket Price for " << ticketType << ": " << ticketPrice << " Rs" <<endl<<endl;

    int numberOfTickets;

    cout << "\nEnter the number of tickets you want to book: ";
    cin >> numberOfTickets;
    if (numberOfTickets <= availableTickets) {
        int totalCost = numberOfTickets * ticketPrice;
        availableTickets -= numberOfTickets;
        cout <<endl<<"\nTickets booked successfully. Total Cost: " << totalCost << " Rs" <<endl<<endl;
        cout << "\nRemaining tickets : " << availableTickets << endl<<endl;
    } else {
        cout << "\nNot enough tickets available for the selected type." << endl<<endl;
    }

  }
};
int main()
{
    while (1)
      {
        cout << "Welcome !!! Please select the given option that you want to know...\n"<<  "1.Match Details\n"<< "2.View Standings\n" << "3.Book Tickets\n"<< "4.Exit\n" << "\nEnter your choice: ";
        int choice;
        cin >> choice;
        BookTickets b;//class and object

        switch (choice) {
            case 1:
                b.Match();
                break;
            case 2:
                b. viewStandings();
                break;
            case 3:
               b.Tickets();
                break;
            case 4:
                cout << "\nExiting program. Goodbye!" << endl;
                return 0;
            default:
                cout << "\nInvalid choice. Please enter a valid option." << endl;
        }
        cout<< "................................."<<endl<<endl;
    }

    return 0;


}

