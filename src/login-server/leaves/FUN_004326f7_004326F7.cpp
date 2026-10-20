// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004326F7 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_004326f7_004326F7() {
    __asm {
        ; Exact mapped bytes 83 79 04 00: cmp dword ptr [ecx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 75 03: jne 0x432700
        __asm _emit 0x75
        __asm _emit 0x03
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes E8 C8 FF FF FF: call 0x4326cd
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 98 C3 43 00: call dword ptr [0x43c398]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
