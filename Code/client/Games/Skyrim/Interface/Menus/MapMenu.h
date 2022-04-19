#pragma once

#include <Games/Events.h>
#include <Interface/IMenu.h>

class MenuOpenCloseEvent;

struct IMapCameraCallbacks
{
  public:
    // add
    virtual void Unk_00(void); // 00
    virtual void Unk_01(void); // 01

    virtual ~IMapCameraCallbacks(); // 02
};
static_assert(sizeof(IMapCameraCallbacks) == 0x8);

class MapMenu final : public IMenu, public BSTEventSink<MenuOpenCloseEvent>, public IMapCameraCallbacks
{
  public:
    // TBD
};
