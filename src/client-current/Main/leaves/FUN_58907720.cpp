// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58907720 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_58907720() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 18h], 0
        ; Exact mapped bytes 75 04: jne 0x5890772d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        ; Exact mapped bytes 83 3D 34 85 A2 58 00: cmp dword ptr [0x58a28534], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x5890773f
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 83 3D 38 85 A2 58 00: cmp dword ptr [0x58a28538], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 EA: je 0x58907729
        __asm _emit 0x74
        __asm _emit 0xea
        mov eax, dword ptr [esi + 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 48h]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 34h]
        push 0
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, 1
        pop esi
        ret
    }
}
