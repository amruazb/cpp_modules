void PhoneBook::searchContact() {
    int search_index;

    std::cout << std::right << "|";
    std::cout << std::right << std::setw(10) << "INDEX" << "|";
    std::cout << std::right << std::setw(10) << "FIRST NAME" << "|";
    std::cout << std::right << std::setw(10) << "LAST NAME" << "|";
    std::cout << std::right << std::setw(10) << "NICKNAME" << "|" << std::endl;

    for (int i = 0; i < count; i++) {
        std::cout << std::right << "|";
        std::cout << std::right << std::setw(10) << i + 1 << "|";
        std::cout << std::right << std::setw(10) << checkLen(Contacts[i].First_Name) << "|";
        std::cout << std::right << std::setw(10) << checkLen(Contacts[i].Last_Name) << "|";
        std::cout << std::right << std::setw(10) << checkLen(Contacts[i].Nickname) << "|" << std::endl;
    }

    std::cout << "PLEASE ENTER AN INDEX" << std::endl;
    std::cin >> search_index;
    search_index--;

    if (search_index >= 0 && search_index < count) {
        std::cout << std::endl;
        std::cout << "FIRST NAME      : " << Contacts[search_index].First_Name << std::endl;
        std::cout << "LAST NAME       : " << Contacts[search_index].Last_Name << std::endl;
        std::cout << "NICK NAME       : " << Contacts[search_index].Nickname << std::endl;
        std::cout << "PHONE NO        : " << Contacts[search_index].Phone_Number << std::endl;
        std::cout << "DARKEST SECRET  : " << Contacts[search_index].Darkest_Secret << std::endl;
        std::cout << std::endl;
    } else {
        std::cout << "*INVALID INDEX*" << std::endl;
    }
}
