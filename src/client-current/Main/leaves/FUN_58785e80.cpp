// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58785E80 .. +0x11 bytes.
extern "C" __declspec(naked) void FUN_58785e80() {
    __asm {
        ; Exact mapped bytes 8B 41 08: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 07: je 0x58785e8e
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 48 44: mov dword ptr [eax + 0x44], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x44
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
