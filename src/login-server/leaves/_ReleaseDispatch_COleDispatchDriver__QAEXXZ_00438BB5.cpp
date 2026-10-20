// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438BB5 .. +0x1A bytes.
extern "C" __declspec(naked) void _ReleaseDispatch_COleDispatchDriver__QAEXXZ_00438BB5() {
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
        ; Exact mapped bytes 74 0F: je 0x438bcd
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 83 7E 04 00: cmp dword ptr [esi + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x438bca
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
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
