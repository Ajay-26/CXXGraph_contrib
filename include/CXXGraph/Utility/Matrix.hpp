/***********************************************************/
/***      ______  ____  ______                 _         ***/
/***     / ___\ \/ /\ \/ / ___|_ __ __ _ _ __ | |__	     ***/
/***    | |    \  /  \  / |  _| '__/ _` | '_ \| '_ \	 ***/
/***    | |___ /  \  /  \ |_| | | | (_| | |_) | | | |    ***/
/***     \____/_/\_\/_/\_\____|_|  \__,_| .__/|_| |_|    ***/
/***                                    |_|			     ***/
/***********************************************************/
/***     Header-Only C++ Library for Graph			     ***/
/***	 Representation and Algorithms				     ***/
/***********************************************************/
/***     Author: ZigRazor ***/
/***	 E-Mail: zigrazor@gmail.com 				     ***/
/***********************************************************/
/***	 Collaboration: ----------- 				     ***/
/***********************************************************/
/***	 License: AGPL v3.0 ***/
/***********************************************************/

#ifndef __CXXGRAPH_MATRIX_UTILITY__
#define __CXXGRAPH_MATRIX_UTILITY__

#pragma once

#include "CXXGraph/Utility/Typedef.hpp"


namespace CXXGraph{
template <typename T>
using shared = std::shared_ptr<T>;

template <typename matrix_type, typename T>
matrix_type export_matrix(shared<AdjacencyMatrix<T>> const m){
    matrix_type ret;
    // Iterate through each of the keys of the unordered_map
    for (const auto& [key, value] : (*m)) {
        // Each key in the unordered_map is a pointer to a node
        // We fetch the id of the node, which is what we will use to index 
        // Each value in the unordered_map is a vector of pairs. 
        // Iterate through each of the pairs and grab the second element
        // That has info about the edge that we need.
        for (const auto& p : value) {
            if (p.second->isDirected()) {
                if(p.second->isWeighted()) {
                    // Directed, weighted edge

                } else {

                }
            }
        }
    }
}


};

#endif // __CXXGRAPH_MATRIX_UTILITY__