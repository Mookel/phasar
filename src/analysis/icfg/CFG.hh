/*
 * CFG.hh
 *
 *  Created on: 07.06.2017
 *      Author: philipp
 */

#ifndef SRC_ANALYSIS_ICFG_CFG_HH_
#define SRC_ANALYSIS_ICFG_CFG_HH_

#include <iostream>
#include <vector>
#include <set>
#include <utility>
using namespace std;


template <typename N, typename M>
class CFG {
public:
	virtual ~CFG() = default;

	virtual M getMethodOf(N stmt) = 0;

	virtual vector<N> getPredsOf(N stmt) = 0;

	virtual vector<N> getSuccsOf(N stmt) = 0;

	virtual vector<pair<N,N>> getAllControlFlowEdges(M fun) = 0;

	virtual vector<N> getAllInstructionsOf(M fun) = 0;

	virtual bool isExitStmt(N stmt) = 0;

	virtual bool isStartPoint(N stmt) = 0;

	virtual bool isFallThroughSuccessor(N stmt, N succ) = 0;

	virtual bool isBranchTarget(N stmt, N succ) = 0;

	virtual string getMethodName(M fun) = 0;
};

#endif /* SRC_ANALYSIS_ICFG_CFG_HH_ */
