#include "FourWheeler.h"

int main()
{
    int ch = 0; /* User Input */
    int n;      /* Number of Objects you wish to create */
    int f = 0;      /* Keep count of number of four wheelr objects created */

    std::cout << "Enter the Number of Objects you want to create : ";
    std::cin >> n;

    Vehicle *ptr = new FourWheeler[n];
    FourWheeler *fptr = dynamic_cast<FourWheeler *>(ptr);

    while (ch != 4)
    {
        std::cout << "*************Welcome to YOGESH MOTORS**************" << std::endl;
        std::cout << "___________________________________________________" << std::endl;
        std::cout << "Press 1 to Create Four Wheeler Object              " << std::endl;
        std::cout << "Press 2 to Display all Four Wheeler Objects Created" << std::endl;
        std::cout << "Press 3 to Search for the Four Wheeler Object      " << std::endl;
        std::cout << "Press 4 to exit the Application                    " << std::endl;
        std::cout << "___________________________________________________" << std::endl;
        std::cout << "Enter Your Choice : ";
        std::cin >> ch;

        switch (ch)
        {
        case 1:
        {
            if (f < n)
            {
                fptr[f].Accept();
                ++f;
                break;
            }
            else
            {
                std::cout << "Limit Exceeded !" << std::endl;
                break;
            }
        }
        case 2:
        {
            if (f > 0)
            {
                for (int i = 0; i < f; ++i)
                {
                    std::cout << "Vehicle Number : " << i + 1 << std::endl;
                    std::cout << fptr[i] << std::endl;
                }
                break;
            }
            else
            {
                std::cout << "No Record to Show!" << std::endl;
                break;
            }
        }
        case 3:
        {
            if (f > 0)
            {
                std::string Brand;
                std::cout << "Enter the Brand of Vehicle you wish to search : ";
                std::cin >> Brand;

                for (int i = 0; i < f; ++i)
                {
                    if (fptr[i].getBrand() == Brand)
                    {
                        std::cout << fptr[i] << std::endl;
                    }
                    if (fptr[i].getBrand() != Brand && i == (f - 1))
                    {
                        std::cout << "No Vehicle Matches the Entered Brand as of Now !" << std::endl;
                    }
                }
                break;
            }
            else
            {
                std::cout << "No Vehicle as of now" << std::endl;
            }
        }
        case 4:
        {
            std::cout << "Thank you for using the Application !" << std::endl;
            break;
        }
        default:
        {
            std::cout << "Please Enter a Valid Choice !" << std::endl;
            break;
        }
        }
    }

    delete[] fptr;

    return 0;
}