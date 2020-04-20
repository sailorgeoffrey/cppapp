//
// Created by Geoffrey Chandler on 3/30/20.
//

class letter_tree {
 public:
  explicit letter_tree (std::string s)
	  : message (move (s))
  { };
  const friend std::ostream& operator<< (std::ostream& ost, const letter_tree& lt)
  {
	for (size_t pos{0}; pos < lt.message.size (); pos++)
	  {
		const std::string line{lt.message.substr (0, pos + 1)};
		std::string mirror{line.substr (0, line.size () - 1)};
		reverse (mirror.begin (), mirror.end ());
		ost << std::string (lt.message.size () - pos, ' ') << line << mirror << std::endl;
	  }
	return ost;
  }
 private:
  const std::string message;
};
