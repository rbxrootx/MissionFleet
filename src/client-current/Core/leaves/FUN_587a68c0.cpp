// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A68C0 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_587a68c0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 48 58: mov ecx, dword ptr [eax + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x58
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x587a68d1
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
        ; Exact mapped bytes 68 A0 93 8B 58: push 0x588b93a0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x93
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A4 85 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
