#include <iostream>
#include <string>

int main() {
	bool more = 1;
	std::string input = "default";
	while (more) {
		std::cout << "[]============================================================================[]\n";
		std::cout << "|     ______          __          _                                            |\n";
		std::cout << "|    /   ___\\        /  \\        | |                                           |\n";
		std::cout << "|    |  |___        / /\\ \\       | |                                           |\n";
		std::cout << "|    \\____  \\      /  __  \\      | |                                           |\n";
		std::cout << "|    ____|  |     /  /  \\  \\     | |                                           |\n";
		std::cout << "|    \\______/    /__/    \\__\\    |_|                                           |\n";
		std::cout << "|                 ______     _     _      _                                    |\n";
		std::cout << "|                /  ___/    | |   | |    | |                                   |\n";
		std::cout << "|                | /        | |___| |    | |                                   |\n";
		std::cout << "|                | |        |  ___  |    | |                                   |\n";
		std::cout << "|                | \\___     | |   | |    | |                                   |\n";
		std::cout << "|                \\_____\\    |_|   |_|    |_|                                   |\n";
		std::cout << "|                                  __          _      _      ______     __     |\n";
		std::cout << "|                                 /  \\        | \\    / |    /  __  \\   //\\\\    |\n";
		std::cout << "|                                / /\\ \\       |  \\  /  |    | /  \\ |     //    |\n";
		std::cout << "|                               /  __  \\      | | \\/ | |    | |  | |    //     |\n";
		std::cout << "|                              /  /  \\  \\     | |\\  /| |    | \\__/ |           |\n";
		std::cout << "|                             /__/    \\__\\    |_| \\/ |_|    \\______/    ()     |\n";
		std::cout << "|                                                                              |\n";
		std::cout << "|                                                                              |\n";
		std::cout << "[]============================================================================[]\n";
		std::cout << "|[ ";
		if (input == "batta") {
			std::cout << "[]=====================[          Oghe. Ceuuuu!            ]==================[]\n";
			return 0;
		}
		else if (input == "brum") {
			std::cout << "[]=====================[           Macchininaaaaa          ]==================[]\n";
		}
		else if (input == "ciuf") {
			std::cout << "[]=====================[          Treninoooo               ]==================[]\n";
		}
		else if (input == "chi") {
			std::cout << "[]=====================[           Non te lo dicooo        ]==================[]\n";
		}
		else if (input == "puffetta") {
			std::cout << "[]=====================[         Nuuuuuuu                  ]==================[]\n";
		}
		else if (input == "pancino") {
			std::cout << "[]=====================[         Morbidinoooooooo          ]==================[]\n";
		}
		else if (input == "michela" || "io") {
			std::cout << "[]=====================[        Ciiiiiii! Tantolinissimoo  ]==================[]\n";
		}
		else if (input == "miao") {
			std::cout << "[]=====================[         Micinaaaa                 ]==================[]\n";
		}
		else if (input == "squitt") {
			std::cout << "[]=====================[         Topinoooo                 ]==================[]\n";
		}
		else if (input == "gn") {
			std::cout << "[]=====================[         Daiii lo saiii            ]==================[]\n";
		}
		else if (input == "tu") {
			std::cout << "[]=====================[         Nuuuu, chiii?             ]==================[]\n";
		}
		else if (input == "dindi") {
			std::cout << "[]=====================[         Ting Tin!                 ]==================[]\n";
		}
		else if (input == "ting") {
			std::cout << "[]=====================[         I dindiniii!              ]==================[]\n";
		}
		else if (input == "pulcino") {
			std::cout << "[]=====================[      Nu tu sei la mia pulcina     ]==================[]\n";
		}
		else if (input == "vagina") {
			std::cout << "[]=====================[         Mmmhhhh sozzaa            ]==================[]\n";
		}
		else if (input == "pisello") {
			std::cout << "[]=====================[         Ma nuuuuuuu               ]==================[]\n";
		}
		else if (input == "tette") {
			std::cout << "[]=====================[         Minchia si                ]==================[]\n";
		}
		else if (input == "aiuto") {
			std::cout << "[brum,ciuf,chi,puffetta,pancino,michela,io,miao,squitt,gn,tu,dindi,ting,pulcino,vagina,pisello,tette]\n";
		}
		else {
			std::cout << "[]=====================[       Non ho capitooo             ]==================[]\n";
		}
		std::cin >> input;
	}
	return 0;
}
