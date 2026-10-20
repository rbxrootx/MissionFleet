// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055631D .. +0x344 bytes.
extern "C" __declspec(naked) void FUN_0055631d_0055631D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 16ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 15ch], ecx
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 30h], 0
        push 5c5h
        push 5cfa08h
        mov eax, dword ptr [ebp - 15ch]
        push eax
        ; Exact mapped bytes E8 FF 4D FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x4d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 15ch]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x556381
        __asm _emit 0x75
        __asm _emit 0x14
        push 5c6h
        push 5cfa08h
        ; Exact mapped bytes E8 84 E6 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556381
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x556361
        __asm _emit 0x75
        __asm _emit 0xda
        push 58ec68h
        mov eax, dword ptr [ebp - 15ch]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 EB 5A FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 14: jne 0x5563b8
        __asm _emit 0x75
        __asm _emit 0x14
        push 5cah
        push 5cfa08h
        ; Exact mapped bytes E8 4D E6 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe6
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5563b8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x55639e
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes 66 C7 45 D8 03 00: mov word ptr [ebp - 0x28], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 20h], 4
        mov dword ptr [ebp - 1ch], 0ffffffffh
        mov dword ptr [ebp - 18h], 20h
        lea eax, [ebp - 0ch]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 0F 84 F5 01 00 00: je 0x5565f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        lea edx, [ebp - 14ch]
        push edx
        mov eax, dword ptr [ebp - 15ch]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 15ch]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x556432
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 22 02 00 00: jmp 0x556654
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 150h], 0
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 9D 19 00 00: call 0x557de4
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 05 01 00 00: jne 0x556555
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58ea88h
        mov eax, dword ptr [ebp - 15ch]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 22 5A FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        cmp dword ptr [ebp - 154h], 0
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x556555
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 158h], 0
        lea edx, [ebp - 158h]
        push edx
        mov eax, dword ptr [ebp - 154h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 154h]
        push edx
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        cmp dword ptr [ebp - 158h], 0
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x556543
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 13ch], 0
        mov eax, dword ptr [ebp - 158h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 0C: jne 0x5564c9
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 160h], 0
        ; Exact mapped bytes EB 3E: jmp 0x556507
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 D8 22 5E 00: call dword ptr [0x5e22d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [eax + eax + 2]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 D9 32 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x32
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], esp
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 164h]
        push edx
        ; Exact mapped bytes E8 AF 62 F4 FF: call 0x49c7b0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x62
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        push 104h
        lea eax, [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 160h]
        push ecx
        ; Exact mapped bytes E8 60 9A FA FF: call 0x4fff7f
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x9a
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 0F BE 95 C4 FE FF FF: movsx edx, byte ptr [ebp - 0x13c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x556536
        __asm _emit 0x74
        __asm _emit 0x0c
        lea eax, [ebp - 13ch]
        mov dword ptr [ebp - 150h], eax
        mov ecx, dword ptr [ebp - 158h]
        push ecx
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 154h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 154h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 150h]
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 0C: jne 0x556570
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 168h], 0
        ; Exact mapped bytes EB 3F: jmp 0x5565af
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 31 32 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x32
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], esp
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 16ch]
        push eax
        ; Exact mapped bytes E8 17 AA F3 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xaa
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        xor ecx, ecx
        cmp dword ptr [ebp - 150h], 0
        sete cl
        push ecx
        mov edx, dword ptr [ebp - 168h]
        push edx
        lea eax, [ebp - 14ch]
        push eax
        ; Exact mapped bytes FF 15 A4 2A 5E 00: call dword ptr [0x5e2aa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 14: je 0x5565ed
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 EC FB FF FF: call 0x5561d4
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        ; Exact mapped bytes EB 67: jmp 0x556654
        __asm _emit 0xeb
        __asm _emit 0x67
        xor eax, eax
        ; Exact mapped bytes EB 63: jmp 0x556654
        __asm _emit 0xeb
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x556611
        __asm _emit 0x74
        __asm _emit 0x0e
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 1C 2A 5E 00: call dword ptr [0x5e2a1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 43: jmp 0x556654
        __asm _emit 0xeb
        __asm _emit 0x43
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 74 14: je 0x55662b
        __asm _emit 0x74
        __asm _emit 0x14
        push 606h
        push 5cfa08h
        ; Exact mapped bytes E8 DA E3 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55662b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x556611
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x55664b
        __asm _emit 0x75
        __asm _emit 0x14
        push 607h
        push 5cfa08h
        ; Exact mapped bytes E8 BA E3 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55664b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x556631
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 8]
        lea esp, [ebp - 178h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
