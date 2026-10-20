// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416B0A .. +0x17 bytes.
extern "C" __declspec(naked) void _GetOwner_CWnd__QBEPAV1_XZ_00416B0A() {
    __asm {
        ; Exact mapped bytes 8B 41 20: mov eax, dword ptr [ecx + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x20
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 09: jne 0x416b1a
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes FF 71 1C: push dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x71
        __asm _emit 0x1c
        ; Exact mapped bytes FF 15 08 C5 43 00: call dword ptr [0x43c508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B8 87 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
