/***
 * @file   OAARdataStucture.h
 * @brief  Claiming OAARNode, OAARLink, OAARTopology, OAARFlow
 * @author He Xingqiu
 *
***/

#ifndef __OAAR_DATA_STRUCTURE__
#define __OAAR_DATA_STRUCTURE__

typedef struct {
   double ProcDelay;
   double QueueDelay;
   double Jitter;
   int IsOptical;
   int nConnLinks;
   int* ConnLinks;
} OAARNode;

typedef struct  {
   int Capacity; 
   double TransDelay; /* = 1500B/capacity */
   double PropDelay;
   double BandCost;
   int IsOptical;
   int Head;
   int Tail;
} OAARLink;

typedef struct {
   int Source;
   int Destination;
   double Priority;
   int BandWidth;
   double DelayPrice;
   double JitterPrice;
} OAARFlow;

#define nWaveLength 1
#define WaveLengthBand 3

#define MAX_PROPDELAY 1000
#define MAX_BANDCOST 10
//#define USER_DEBUG 1

//#ifdef USER_DEBUG
void printNode(OAARNode Node);
void printLink(OAARLink Link);
void printFlow(OAARFlow Flow);
extern void printNodes(OAARNode* Nodes, int nNodes);
extern void printLinks(OAARLink* Links, int nLinks);
extern void printFlows(OAARFlow* Flows, int nFlows);
//#endif

#endif

