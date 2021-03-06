// Boost.Geometry Index
//
// Copyright (c) 2011-2013 Adam Wulkiewicz, Lodz, Poland.
//
// Use, modification and distribution is subject to the Boost Software License,
// Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <boost/range.hpp>
#include <boost/mpl/aux_/has_type.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/and.hpp>
//#include <boost/type_traits/is_convertible.hpp>

#ifndef BOOST_GEOMETRY_INDEX_DETAIL_META_HPP
#define BOOST_GEOMETRY_INDEX_DETAIL_META_HPP

namespace pdalboost {} namespace boost = pdalboost; namespace pdalboost { namespace geometry { namespace index { namespace detail {

template <typename T>
struct is_range
    : ::pdalboost::mpl::aux::has_type< ::pdalboost::range_iterator<T> >
{};

//template <typename T, typename V, bool IsRange>
//struct is_range_of_convertible_values_impl
//    : ::pdalboost::is_convertible<typename ::pdalboost::range_value<T>::type, V>
//{};
//
//template <typename T, typename V>
//struct is_range_of_convertible_values_impl<T, V, false>
//    : ::pdalboost::mpl::bool_<false>
//{};
//
//template <typename T, typename V>
//struct is_range_of_convertible_values
//    : is_range_of_convertible_values_impl<T, V, is_range<T>::value>
//{};

}}}} // namespace pdalboost::geometry::index::detail

#endif // BOOST_GEOMETRY_INDEX_DETAIL_META_HPP
