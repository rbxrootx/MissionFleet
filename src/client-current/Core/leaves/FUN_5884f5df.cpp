// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F5DF .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_5884f5df() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0E: je 0x5884f5f7
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 3D 98 95 96 58: cmp eax, 0x58969598
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 07: je 0x5884f5f7
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 0A A0 00 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
