// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CCB00 .. +0x1AF bytes.
extern "C" __declspec(naked) void FUN_588ccb00() {
    __asm {
        cmp dword ptr [esp + 8], 2
        ; Exact mapped bytes 0F 85 9F 01 00 00: jne 0x588cccaa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 4]
        cmp eax, dword ptr [ecx + 68h]
        ; Exact mapped bytes 75 0F: jne 0x588ccb23
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 5ch]
        push 14h
        ; Exact mapped bytes E8 F2 A1 EE FF: call 0x587b6d10
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xa1
        __asm _emit 0xee
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 75 0F: jne 0x588ccb37
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 5ch]
        push 14h
        ; Exact mapped bytes E8 4E A2 EE FF: call 0x587b6d80
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xa2
        __asm _emit 0xee
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 7ch]
        ; Exact mapped bytes 75 0C: jne 0x588ccb48
        __asm _emit 0x75
        __asm _emit 0x0c
        push 0
        ; Exact mapped bytes E8 FD FD FF FF: call 0x588cc940
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 80h]
        ; Exact mapped bytes 75 0C: jne 0x588ccb5c
        __asm _emit 0x75
        __asm _emit 0x0c
        push 1
        ; Exact mapped bytes E8 E9 FD FF FF: call 0x588cc940
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push esi
        cmp eax, dword ptr [ecx + 84h]
        ; Exact mapped bytes 75 58: jne 0x588ccbbd
        __asm _emit 0x75
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 70h]
        xor esi, esi
        mov dword ptr [eax + 50h], esi
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [edx + 50h], esi
        mov eax, dword ptr [ecx + 78h]
        mov dword ptr [eax + 50h], esi
        mov edx, dword ptr [ecx + 7ch]
        mov eax, 1
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 87h], 0fh
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [edx + 50h], eax
        mov eax, dword ptr [ecx + 84h]
        ; Exact mapped bytes EB 58: jmp 0x588ccc15
        __asm _emit 0xeb
        __asm _emit 0x58
        cmp eax, dword ptr [ecx + 88h]
        ; Exact mapped bytes 75 6B: jne 0x588ccc30
        __asm _emit 0x75
        __asm _emit 0x6b
        mov eax, dword ptr [ecx + 70h]
        xor esi, esi
        mov dword ptr [eax + 50h], esi
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [edx + 50h], esi
        mov eax, dword ptr [ecx + 78h]
        mov dword ptr [eax + 50h], esi
        mov edx, dword ptr [ecx + 7ch]
        mov eax, 1
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 87h], 14h
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [edx + 50h], eax
        mov eax, dword ptr [ecx + 88h]
        push esi
        mov dword ptr [eax + 50h], 5
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ecx + 70h]
        mov edx, dword ptr [edx + 18h]
        push 2
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop esi
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 70h]
        ; Exact mapped bytes 75 0D: jne 0x588ccc42
        __asm _emit 0x75
        __asm _emit 0x0d
        push 0
        ; Exact mapped bytes E8 04 FE FF FF: call 0x588cca40
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 74h]
        ; Exact mapped bytes 75 0D: jne 0x588ccc54
        __asm _emit 0x75
        __asm _emit 0x0d
        push 1
        ; Exact mapped bytes E8 F2 FD FF FF: call 0x588cca40
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 78h]
        ; Exact mapped bytes 75 50: jne 0x588ccca9
        __asm _emit 0x75
        __asm _emit 0x50
        mov edx, dword ptr [ecx + 70h]
        xor esi, esi
        mov eax, 1
        cmp dword ptr [edx + 50h], esi
        ; Exact mapped bytes 74 03: je 0x588ccc6b
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 74h]
        cmp dword ptr [edx + 50h], esi
        ; Exact mapped bytes 74 03: je 0x588ccc76
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 78h]
        cmp dword ptr [edx + 50h], esi
        ; Exact mapped bytes 74 03: je 0x588ccc81
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [edx + 50h], eax
        mov eax, dword ptr [ecx + 50h]
        mov byte ptr [eax + 86h], 7
        mov ecx, dword ptr [ecx + 78h]
        mov dword ptr [ecx + 50h], 5
        ; Exact mapped bytes 8B 15 A0 45 A2 58: mov edx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 0a00h]
        push esi
        push 7
        ; Exact mapped bytes E8 A7 C5 FF FF: call 0x588c9250
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
