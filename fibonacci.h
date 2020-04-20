//
// Created by Geoffrey Chandler on 3/28/20.
//

#ifndef CPPAPP_FIBONACCI_H
#define CPPAPP_FIBONACCI_H

#include <vector>

class fibonacci {
 public:
  fibonacci () noexcept
	  : series{1LL, 1LL}
  { };

  /**
   * Do everything with only five addresses.
   */
  static unsigned long long fast (const unsigned int n) noexcept
  {
	unsigned long long a{0}, b{1}, c{1};
	for (unsigned int i = 1; i < n; i++)
	  c = a + b, a = b, b = c;
	return c;
  }

  /**
   * Uses more memory, but subsequent calls are faster because they don't need to recalculate.
   */
  unsigned long long with_cache (const unsigned int n) noexcept
  {
	if (series.size () < n)
	  for (size_t i = series.size (); i <= n; i++)
		series.push_back (series.at (i - 2) + series.back ());
	return series.at (n - 1);
  }

 private:
  std::vector<unsigned long long> series{1LL, 1LL};
};

#endif //CPPAPP_FIBONACCI_H
