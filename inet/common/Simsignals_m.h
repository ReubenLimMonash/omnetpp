//
// Generated file, do not edit! Created by opp_msgtool 6.0 from inet/common/Simsignals.msg.
//

#ifndef __INET_SIMSIGNALS_M_H
#define __INET_SIMSIGNALS_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API
#  endif
#endif


namespace inet {

class PacketDropDetails;

}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs


namespace inet {

/**
 * Enum generated from <tt>inet/common/Simsignals.msg:12</tt> by opp_msgtool.
 * <pre>
 * enum PacketDropReason
 * {
 *     ADDRESS_RESOLUTION_FAILED = 0;
 *     FORWARDING_DISABLED = 1;
 *     HOP_LIMIT_REACHED = 2;
 *     INCORRECTLY_RECEIVED = 3;
 *     INTERFACE_DOWN = 4;
 *     NO_CARRIER = 5;
 *     NO_INTERFACE_FOUND = 6;
 *     NO_ROUTE_FOUND = 7;
 *     NOT_ADDRESSED_TO_US = 8;
 *     QUEUE_OVERFLOW = 9;
 *     RETRY_LIMIT_REACHED = 10;
 *     LIFETIME_EXPIRED = 11;
 *     CONGESTION = 12;
 *     NO_PROTOCOL_FOUND = 13;
 *     NO_PORT_FOUND = 14;
 *     DUPLICATE_DETECTED = 15;
 *     OTHER_PACKET_DROP = -1;
 * }
 * </pre>
 */
enum PacketDropReason {
    ADDRESS_RESOLUTION_FAILED = 0,
    FORWARDING_DISABLED = 1,
    HOP_LIMIT_REACHED = 2,
    INCORRECTLY_RECEIVED = 3,
    INTERFACE_DOWN = 4,
    NO_CARRIER = 5,
    NO_INTERFACE_FOUND = 6,
    NO_ROUTE_FOUND = 7,
    NOT_ADDRESSED_TO_US = 8,
    QUEUE_OVERFLOW = 9,
    RETRY_LIMIT_REACHED = 10,
    LIFETIME_EXPIRED = 11,
    CONGESTION = 12,
    NO_PROTOCOL_FOUND = 13,
    NO_PORT_FOUND = 14,
    DUPLICATE_DETECTED = 15,
    OTHER_PACKET_DROP = -1
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PacketDropReason& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PacketDropReason& e) { int n; b->unpack(n); e = static_cast<PacketDropReason>(n); }

/**
 * Class generated from <tt>inet/common/Simsignals.msg:33</tt> by opp_msgtool.
 * <pre>
 * class PacketDropDetails extends cObject
 * {
 *     PacketDropReason reason;
 *     int limit = -1;
 * }
 * </pre>
 */
class INET_API PacketDropDetails : public ::omnetpp::cObject
{
  protected:
    PacketDropReason reason = static_cast<inet::PacketDropReason>(-1);
    int limit = -1;

  private:
    void copy(const PacketDropDetails& other);

  protected:
    bool operator==(const PacketDropDetails&) = delete;

  public:
    PacketDropDetails();
    PacketDropDetails(const PacketDropDetails& other);
    virtual ~PacketDropDetails();
    PacketDropDetails& operator=(const PacketDropDetails& other);
    virtual PacketDropDetails *dup() const override {return new PacketDropDetails(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual PacketDropReason getReason() const;
    virtual void setReason(PacketDropReason reason);

    virtual int getLimit() const;
    virtual void setLimit(int limit);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PacketDropDetails& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PacketDropDetails& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

template<> inline inet::PacketDropDetails *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::PacketDropDetails*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_SIMSIGNALS_M_H
