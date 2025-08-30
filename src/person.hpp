#ifndef __PERSON_HPP__
#define __PERSON_HPP__
class person {
  private:
    char *_name;
    char *_surname;
    char *_manager;
    bool _contract;

  public:
    // Getters
    char * getName()const;
    char * getSurname()const;
    char * getManager()const;
    bool getContract()const;

    // Setters
    void setName(char *name);
    void setSurname(char *surname);
    void setManager(char *manager);
    void setContract();
    void removeContract();

    person();
    person(const char *name, const char *surname);
    person(const char *name, const char *surname, const char *manager);
    person(const char *name, const char *surname, const char *manager,
           const bool contract);
    void debug() const;
    ~person();
};
#endif
