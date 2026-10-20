// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435CF0 .. +0x35 bytes.
extern "C" __declspec(naked) void _Unlock_CTypeLibCache__QAEXXZ_00435CF0() {
    __asm {
        push esi
        mov esi, ecx
        lea eax, [esi + 20h]
        push eax
        ; Exact mapped bytes FF 15 98 C2 43 00: call dword ptr [0x43c298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x435d23
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [esi + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x435d12
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        and dword ptr [esi + 1ch], 0
        mov eax, dword ptr [esi + 8]
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x435d23
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        and dword ptr [esi + 8], 0
        pop esi
        ret
    }
}
