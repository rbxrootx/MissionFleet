// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434425 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_00434425_00434425() {
    __asm {
        ; Exact mapped bytes 83 79 04 00: cmp dword ptr [ecx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 75 03: jne 0x43442e
        __asm _emit 0x75
        __asm _emit 0x03
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes E8 C8 FF FF FF: call 0x4343fb
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 B0 C0 43 00: call dword ptr [0x43c0b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
