// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58841987 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_58841987() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 80 7D 08 00: cmp byte ptr [ebp + 8], 0
        __asm _emit 0x80
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 75 0D: jne 0x5884199d
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes 83 79 18 00: cmp dword ptr [ecx + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x5884199d
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
