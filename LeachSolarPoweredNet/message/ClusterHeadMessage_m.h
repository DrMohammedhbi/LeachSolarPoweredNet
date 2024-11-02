//
// Generated file, do not edit! Created by nedtool 4.6 from message/ClusterHeadMessage.msg.
//

#ifndef _CLUSTERHEADMESSAGE_M_H_
#define _CLUSTERHEADMESSAGE_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
 	#include "ClusterMessage_m.h"
// }}

/**
 * Class generated from <tt>message/ClusterHeadMessage.msg:28</tt> by nedtool.
 * <pre>
 * packet ClusterHeadMessage extends ClusterMessage
 * {
 *     int cHead[103];
 * }
 * </pre>
 */
class ClusterHeadMessage : public ::ClusterMessage
{
  protected:
    int cHead_var[103];

  private:
    void copy(const ClusterHeadMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ClusterHeadMessage&);

  public:
    ClusterHeadMessage(const char *name=NULL, int kind=0);
    ClusterHeadMessage(const ClusterHeadMessage& other);
    virtual ~ClusterHeadMessage();
    ClusterHeadMessage& operator=(const ClusterHeadMessage& other);
    virtual ClusterHeadMessage *dup() const {return new ClusterHeadMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getCHeadArraySize() const;
    virtual int getCHead(unsigned int k) const;
    virtual void setCHead(unsigned int k, int cHead);
};

inline void doPacking(cCommBuffer *b, ClusterHeadMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ClusterHeadMessage& obj) {obj.parsimUnpack(b);}


#endif // ifndef _CLUSTERHEADMESSAGE_M_H_

