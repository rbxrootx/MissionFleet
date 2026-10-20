// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589076A0 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_589076a0() {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 18h], 0
        ; Exact mapped bytes 74 6B: je 0x58907715
        __asm _emit 0x74
        __asm _emit 0x6b
        ; Exact mapped bytes 83 3D 34 85 A2 58 00: cmp dword ptr [0x58a28534], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x589076bc
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
        ; Exact mapped bytes 74 59: je 0x58907715
        __asm _emit 0x74
        __asm _emit 0x59
        mov eax, dword ptr [esi + 18h]
        mov ecx, dword ptr [eax]
        lea edx, [esp + 4]
        push edx
        push eax
        mov eax, dword ptr [ecx + 24h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 7C 45: jl 0x58907715
        __asm _emit 0x7c
        __asm _emit 0x45
        test byte ptr [esp + 4], 1
        ; Exact mapped bytes 74 17: je 0x589076ee
        __asm _emit 0x74
        __asm _emit 0x17
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
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        mov esi, dword ptr [esi + 18h]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 30h]
        push ecx
        push 0
        push 0
        push esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        neg eax
        sbb eax, eax
        inc eax
        xor ecx, ecx
        test eax, eax
        setge cl
        pop esi
        mov eax, ecx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        pop esi
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
