// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879A7A0 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_5879a7a0() {
    __asm {
        ; Exact mapped bytes 8B 49 0C: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 13: je 0x5879a7ba
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8D 04 40: lea eax, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x40
        ; Exact mapped bytes 83 7C C1 10 00: cmp dword ptr [ecx + eax*8 + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x5879a7ba
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 32 C0: xor al, al
        __asm _emit 0x32
        __asm _emit 0xc0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
