//
// Generated file, do not edit! Created by nedtool 4.6 from message/DataToCHMessage.msg.
//

#ifndef _DATATOCHMESSAGE_M_H_
#define _DATATOCHMESSAGE_M_H_

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
 * Class generated from <tt>message/DataToCHMessage.msg:25</tt> by nedtool.
 * <pre>
 * //
 * // Data sent by nodes to cluster heads
 * //
 * packet DataToCHMessage extends ClusterMessage
 * {
 *     int newSun;       // node has now sun, become new cluster head?
 *     int data;
 * }
 * </pre>
 */
class DataToCHMessage : public ::ClusterMessage
{
  protected:
    int newSun_var;
    int data_var;

  private:
    void copy(const DataToCHMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const DataToCHMessage&);

  public:
    DataToCHMessage(const char *name=NULL, int kind=0);
    DataToCHMessage(const DataToCHMessage& other);
    virtual ~DataToCHMessage();
    DataToCHMessage& operator=(const DataToCHMessage& other);
    virtual DataToCHMessage *dup() const {return new DataToCHMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getNewSun() const;
    virtual void setNewSun(int newSun);
    virtual int getData() const;
    virtual void setData(int data);
};

inline void doPacking(cCommBuffer *b, DataToCHMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, DataToCHMessage& obj) {obj.parsimUnpack(b);}


#endif // ifndef _DATATOCHMESSAGE_M_H_

