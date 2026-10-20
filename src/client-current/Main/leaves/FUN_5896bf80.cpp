// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896BF80 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_5896bf80() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 18h]
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5896bf8e
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
        ; Exact mapped bytes 75 09: jne 0x5896bfa0
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
        ; Exact mapped bytes 74 EA: je 0x5896bf8a
        __asm _emit 0x74
        __asm _emit 0xea
        cmp dword ptr [esi + 28h], 0
        ; Exact mapped bytes 74 36: je 0x5896bfdc
        __asm _emit 0x74
        __asm _emit 0x36
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
        mov eax, dword ptr [esi + 28h]
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x5896bfdc
        __asm _emit 0x74
        __asm _emit 0x1a
        push -1
        push eax
        ; Exact mapped bytes FF 15 28 C1 98 58: call dword ptr [0x5898c128]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 28h]
        push eax
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [esi + 28h], 0
        mov eax, 1
        pop esi
        ret
    }
}
