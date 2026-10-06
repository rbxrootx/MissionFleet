# Current Main.dll communicator clan-message child constructor

`FUN_58823270` is called by byte-matched `FUN_58849B70` at `0x5884A4AC`.
The caller constructs it as child `+0x114` of the communicator ID panel and
passes the parent pointer, values `0x130` and `0x14A`, two zero values, and
flag `0x40`. The returned pointer is stored at `+0x114`.

The original mapped instructions call base initializer `FUN_589031A0`, install
the `CMenuScreen` vtable, then install vtable `0x5899DB64`. The vtable's RTTI
type descriptor names the class `CPannelCommunicatorClanMessage`; the
communicator RTTI verification now checks both that name and the constructor's
vtable write. The constructor then allocates and initializes nested controls
and stores child pointers across receiver fields `+0x60` through `+0xA0`.
Resource selection uses count and pointer fields rooted at `0x58A2476C` and
`0x58A246B8`.

The complete indexed body is 1,756 bytes, from `0x58823270` through
`0x5882394B`; decoding reaches the boundary immediately after `ret 0x18`.
`src/client-current/Main/FUN_58823270.cpp` preserves that instruction stream
literally and is checked against the mapped image. RTTI establishes the child
class and the caller establishes its parent-panel slot, but nested control
roles, resource meanings, exception-cleanup invariants, and rendered
appearance remain unverified. No emulator visual comparison was performed.

The class's vtable `+0x10` input method is documented in
[the clan-message input notes](current-main-communicator-clan-message-input-58823950.md).
Its vtable `+0x18` notification handler is documented in
[the notification-handler notes](current-main-communicator-clan-message-notification-58823eb0.md).
