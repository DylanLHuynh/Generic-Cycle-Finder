#ifndef GENERIC_CYCLE_HPP_
#define GENERIC_CYCLE_HPP_

template <typename T, typename F>
int findCycleLength(const T& start, const F& f) {
  T hare = f(f(start));
  T tortoise = f(start);
  int cycleLength = 1;

  while (hare != tortoise) {
    hare = f(f(hare));
    tortoise = f(tortoise);
  }
  
  hare = f(tortoise);
  while(hare != tortoise) {
    hare = f(hare);
    cycleLength++;
  }

  return cycleLength;
}

#endif    // GENERIC_CYCLE_HPP_

