// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041864D .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_0041864d_0041864D() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 46 48: mov eax, dword ptr [esi + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x48
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 09: je 0x418660
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B 40 50: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 89 46 48: mov dword ptr [esi + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x48
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
