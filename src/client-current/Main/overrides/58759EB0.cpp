// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58759EB0 .. +0x11 bytes.
extern "C" __declspec(naked) void FUN_58759eb0() {
    __asm {
        ; Exact mapped bytes 8B 81 84 00 00 00: mov eax, dword ptr [ecx + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 04: je 0x58759ebe
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
