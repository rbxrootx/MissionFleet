// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A09E0 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_587a09e0() {
    __asm {
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 07: je 0x587a09ef
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 89 41 60: mov dword ptr [ecx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x60
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
