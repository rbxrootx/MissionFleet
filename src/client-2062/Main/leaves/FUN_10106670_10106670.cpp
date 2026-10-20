// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10106670 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_10106670_10106670() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 4E 50: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x50
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0D: je 0x10106687
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes C7 46 50 00 00 00 00: mov dword ptr [esi + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
