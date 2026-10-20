// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879DE70 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_5879de70() {
    __asm {
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x5879de82
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 89 81 C4 00 00 00: mov dword ptr [ecx + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
