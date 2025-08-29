class person {
  private:
    char *_name;
    char *_surname;
    char *_manager;
    bool _contract;

  public:
    person();
    person(const char *name, const char *surname);
    person(const char *name, const char *surname, const char *manager);
    person(const char *name, const char *surname, const char *manager,
           const bool contract);
    void debug() const;
    ~person();
};
