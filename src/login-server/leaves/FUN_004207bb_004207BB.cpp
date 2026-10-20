// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004207BB .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_004207bb_004207BB() {
    __asm {
        ; Exact mapped bytes 83 3D 88 11 45 00 00: cmp dword ptr [0x451188], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 12: jne 0x4207d6
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 6A FD: push -3
        __asm _emit 0x6a
        __asm _emit 0xfd
        ; Exact mapped bytes E8 18 FC FF FF: call 0x4203e3
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C7 05 88 11 45 00 01 00 00 00: mov dword ptr [0x451188], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
