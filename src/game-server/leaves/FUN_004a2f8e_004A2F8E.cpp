// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A2F8E .. +0x203 bytes.
extern "C" __declspec(naked) void FUN_004a2f8e_004A2F8E() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f3b8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 24h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 92 24 0A 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 11: jne 0x4a2fcb
        __asm _emit 0x75
        __asm _emit 0x11
        push 68h
        push 5ccb0ch
        ; Exact mapped bytes E8 3A 1A 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x1a
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a2fcb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4a2fb4
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 106ch], 0
        ; Exact mapped bytes 0F 85 AD 00 00 00: jne 0x4a308e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1048h]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 19: jne 0x4a300c
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 1048h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 1048h
        ; Exact mapped bytes E9 72 01 00 00: jmp 0x4a317e
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0D: jne 0x4a3021
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 10h]
        add eax, 1048h
        ; Exact mapped bytes E9 5D 01 00 00: jmp 0x4a317e
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 7ch
        push 5ccb0ch
        push 1ch
        ; Exact mapped bytes E8 30 A0 04 00: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 0D: je 0x4a304c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 29 04 00 00: call 0x4a3470
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4a3053
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 106ch], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1048h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1048h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 106ch]
        ; Exact mapped bytes E8 75 07 09 00: call 0x533803
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 106ch], 0
        ; Exact mapped bytes 75 14: jne 0x4a30ae
        __asm _emit 0x75
        __asm _emit 0x14
        push 85h
        push 5ccb0ch
        ; Exact mapped bytes E8 57 19 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x19
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a30ae
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4a308e
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 106ch]
        ; Exact mapped bytes E8 E6 84 04 00: call 0x4eb5b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 69: jne 0x4a3137
        __asm _emit 0x75
        __asm _emit 0x69
        push 8dh
        push 5ccb0ch
        push 24h
        ; Exact mapped bytes E8 54 9F 04 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x9f
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 0D: je 0x4a30ff
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 96 BE FE FF: call 0x48ef90
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x4a3106
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 106ch]
        ; Exact mapped bytes E8 CC 06 09 00: call 0x533803
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x06
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x4a3151
        __asm _emit 0x75
        __asm _emit 0x14
        push 92h
        push 5ccb0ch
        ; Exact mapped bytes E8 B4 18 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a3151
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4a3137
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 14: je 0x4a3175
        __asm _emit 0x74
        __asm _emit 0x14
        push 93h
        push 5ccb0ch
        ; Exact mapped bytes E8 90 18 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a3175
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DC: jne 0x4a3157
        __asm _emit 0x75
        __asm _emit 0xdc
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
