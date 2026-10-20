// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897D0A6 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_5897d0a6() {
    __asm {
        ; Exact mapped bytes 83 7D E4 00: cmp dword ptr [ebp - 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xe4
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x5897d0bd
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes FF 75 14: push dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes FF 75 10: push dword ptr [ebp + 0x10]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes FF 75 0C: push dword ptr [ebp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 40 FF FF FF: call 0x5897cffd
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
