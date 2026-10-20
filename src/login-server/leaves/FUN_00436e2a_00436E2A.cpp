// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436E2A .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_00436e2a_00436E2A() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 10: je 0x436e43
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 44 F9 44 00: mov ecx, dword ptr [0x44f944]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x436e43
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 37 FD FF FF: call 0x436b7a
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 26 00: and dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
