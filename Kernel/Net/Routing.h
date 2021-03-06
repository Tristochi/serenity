#pragma once

#include <Kernel/Net/NetworkAdapter.h>

struct RoutingDecision
{
    WeakPtr<NetworkAdapter> adapter;
    MACAddress next_hop;

    bool is_zero() const;
};

RoutingDecision route_to(const IPv4Address& target, const IPv4Address& source);

Lockable<HashMap<IPv4Address, MACAddress>>& arp_table();
