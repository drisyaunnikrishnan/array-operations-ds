#include<iostream>
#include<conio.h>
using namespace std;
class array
{
  int ar[10];
  int n;
public:
  void getelement (int n1)
  {
    n = n1;
    cout << "\n enter the elements into the arrray :\n";
    for (int i = 0; i < n; i++)
      {
	cin >> ar[i];
      }
  }

  void traversing ()
  {
    for (int i = 0; i < n; i++)
      {
	cout << " " << ar[i];
      }

    cout << "\n array sucessfully traversed\n ";

  }
  void insertion (int p, int e)
  {
    for (int i = n; i > p; i--)
      {
	ar[i] = ar[i - 1];
      }

    ar[p] = e;
    n++;
    cout << "Element inserted successfully.";
    cout << "inserted array :\n\n";
    for (int i = 0; i < n; i++)
      {
	cout << " " << ar[i] << "\t";
      }

  }

  void deletion (int p)
  {
    for (int i = p; i < n - 1; i++)
      {
	ar[i] = ar[i + 1];
      }
    n--;

    cout << "Element deleted successfully.\n\n";
    cout << "deleted array :\n\n";
    for (int i = 0; i < n; i++)
      {
	cout << " " << ar[i] << "\t";
      }
  }

};


int main ()
{
  array obj;

  int choice;
  int size;
  cout << "\n enter the size of the element :";
  cin >> size;
  obj.getelement (size);

  do
    {
      cout << "\n\n ******ARRAY OPERATIONS*********\n\n";
      cout << "\n1 = Traversing\n ";
      cout << "  2 = insertion\n ";
      cout << "  3 = deletion\n ";
      cout << "  4 = exit \n";

      cout << "\n enter your choice :";
      cin >> choice;

      switch (choice)
	{
	case 1:
	  cout << "\n array \n";
	  obj.traversing ();
	  break;
	case 2:
	  int posi, elem;
	  cout << "\n enter the Element :";
	  cin >> elem;
	  cout << "\n enter the position to insert the element :";
	  cin >> posi;
	  obj.insertion (posi, elem);
	  break;
	case 3:
	  int position;
	  cout << "\n enter the position of the element to  be deleted :";
	  cin >> position;
	  obj.deletion (position);
	  break;
	case 4:
	  cout << "\n exit :";
	  break;
	default:
	  cout << "\n invalid choice ";

	}


    }
  while (choice != 4);
}
