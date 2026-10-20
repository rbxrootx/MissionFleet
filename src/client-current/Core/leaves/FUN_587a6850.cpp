// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A6850 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_587a6850() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 88 7C 01 00 00: mov ecx, dword ptr [eax + 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x587a6864
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 89 44 24 04: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes FF E1: jmp ecx
        __asm _emit 0xff
        __asm _emit 0xe1
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
