// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00554D8D .. +0x344 bytes.
extern "C" __declspec(naked) void FUN_00554d8d_00554D8D() {
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
        push 67c1e0h
        mov eax, dword ptr [ebp - 15ch]
        push eax
        ; Exact mapped bytes E8 8F 54 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x54
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 15ch]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x554df1
        __asm _emit 0x75
        __asm _emit 0x14
        push 5c6h
        push 67c1e0h
        ; Exact mapped bytes E8 54 3F FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x3f
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554df1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x554dd1
        __asm _emit 0x75
        __asm _emit 0xda
        push 641458h
        mov eax, dword ptr [ebp - 15ch]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 EB 5A FF FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 14: jne 0x554e28
        __asm _emit 0x75
        __asm _emit 0x14
        push 5cah
        push 67c1e0h
        ; Exact mapped bytes E8 1D 3F FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x3f
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554e28
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x554e0e
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
        ; Exact mapped bytes 0F 84 F5 01 00 00: je 0x555061
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
        ; Exact mapped bytes 74 07: je 0x554ea2
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 22 02 00 00: jmp 0x5550c4
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 150h], 0
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 87 19 00 00: call 0x55683e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 05 01 00 00: jne 0x554fc5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 641278h
        mov eax, dword ptr [ebp - 15ch]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 22 5A FF FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        cmp dword ptr [ebp - 154h], 0
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x554fc5
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
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x554fb3
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
        ; Exact mapped bytes 75 0C: jne 0x554f39
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 160h], 0
        ; Exact mapped bytes EB 3E: jmp 0x554f77
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 F0 B8 68 00: call dword ptr [0x68b8f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [eax + eax + 2]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 49 10 F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x10
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], esp
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 164h]
        push edx
        ; Exact mapped bytes E8 5F 3E F0 FF: call 0x458dd0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x3e
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        push 104h
        lea eax, [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 160h]
        push ecx
        ; Exact mapped bytes E8 F0 A0 F8 FF: call 0x4df07f
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xa0
        __asm _emit 0xf8
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
        ; Exact mapped bytes 74 0C: je 0x554fa6
        __asm _emit 0x74
        __asm _emit 0x0c
        lea eax, [ebp - 13ch]
        mov dword ptr [ebp - 150h], eax
        mov ecx, dword ptr [ebp - 158h]
        push ecx
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
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
        ; Exact mapped bytes 75 0C: jne 0x554fe0
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 168h], 0
        ; Exact mapped bytes EB 3F: jmp 0x55501f
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 A1 0F F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x0f
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], esp
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 16ch]
        push eax
        ; Exact mapped bytes E8 D7 85 EF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x85
        __asm _emit 0xef
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
        ; Exact mapped bytes FF 15 5C C2 68 00: call dword ptr [0x68c25c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 14: je 0x55505d
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 EC FB FF FF: call 0x554c44
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        ; Exact mapped bytes EB 67: jmp 0x5550c4
        __asm _emit 0xeb
        __asm _emit 0x67
        xor eax, eax
        ; Exact mapped bytes EB 63: jmp 0x5550c4
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
        ; Exact mapped bytes 74 0E: je 0x555081
        __asm _emit 0x74
        __asm _emit 0x0e
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 B0 C2 68 00: call dword ptr [0x68c2b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 43: jmp 0x5550c4
        __asm _emit 0xeb
        __asm _emit 0x43
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 74 14: je 0x55509b
        __asm _emit 0x74
        __asm _emit 0x14
        push 606h
        push 67c1e0h
        ; Exact mapped bytes E8 AA 3C FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x3c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55509b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x555081
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x5550bb
        __asm _emit 0x75
        __asm _emit 0x14
        push 607h
        push 67c1e0h
        ; Exact mapped bytes E8 8A 3C FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x3c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5550bb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5550a1
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
