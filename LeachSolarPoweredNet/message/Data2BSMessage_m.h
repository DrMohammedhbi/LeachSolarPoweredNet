//
// Generated file, do not edit! Created by nedtool 4.6 from message/Data2BSMessage.msg.
//

#ifndef _DATA2BSMESSAGE_M_H_
#define _DATA2BSMESSAGE_M_H_

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
 * Class generated from <tt>message/Data2BSMessage.msg:25</tt> by nedtool.
 * <pre>
 * //
 * // Data sent by nodes to BS
 * //
 * packet Data2BSMessage extends ClusterMessage
 * {
 *     int data;
 * }
 * </pre>
 */
class Data2BSMessage : public ::ClusterMessage
{
  protected:
    int data_var;

  private:
    void copy(const Data2BSMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Data2BSMessage&);

  public:
    Data2BSMessage(const char *name=NULL, int kind=0);
    Data2BSMessage(const Data2BSMessage& other);
    virtual ~Data2BSMessage();
    Data2BSMessage& operator=(const Data2BSMessage& other);
    virtual Data2BSMessage *dup() const {return new Data2BSMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getData() const;
    virtual void setData(int data);
};

inline void doPacking(cCommBuffer *b, Data2BSMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Data2BSMessage& obj) {obj.parsimUnpack(b);}


#endif // ifndef _DATA2BSMESSAGE_M_H_

