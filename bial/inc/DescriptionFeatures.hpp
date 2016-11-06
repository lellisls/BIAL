#include "Vector.hpp"

#ifndef FEATURES_H
#define FEATURES_H

namespace Bial {

  template< class T >
  class Features {
private:
    Vector< T > item;

public:
    Features( );
    Features( size_t n );
    T &operator[]( size_t i );
    const T &operator[]( size_t i ) const;
    size_t size( ) const;
    void clear( );
    void push_back( T i );
    void resize( size_t n );
    T* data( );
  };
}
#include "DescriptionFeatures.cpp"

#endif
