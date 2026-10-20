// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005789F8 .. +0x2E0 bytes.
extern "C" __declspec(naked) void FUN_005789f8_005789F8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 64h], ecx
        mov eax, dword ptr [ebp - 64h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x578a21
        __asm _emit 0x75
        __asm _emit 0x14
        push 87h
        push 5d1160h
        ; Exact mapped bytes E8 E4 BF FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xbf
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578a21
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x578a04
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 64h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 14: jne 0x578a44
        __asm _emit 0x75
        __asm _emit 0x14
        push 88h
        push 5d1160h
        ; Exact mapped bytes E8 C1 BF FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xbf
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578a44
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x578a27
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 75 14: jne 0x578a6c
        __asm _emit 0x75
        __asm _emit 0x14
        push 89h
        push 5d1160h
        ; Exact mapped bytes E8 99 BF FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xbf
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578a6c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x578a4a
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x578a8c
        __asm _emit 0x75
        __asm _emit 0x14
        push 8ah
        push 5d1160h
        ; Exact mapped bytes E8 79 BF FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xbf
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578a8c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x578a72
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        ; Exact mapped bytes E8 B5 73 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x73
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x578ab9
        __asm _emit 0x75
        __asm _emit 0x14
        push 8bh
        push 5d1160h
        ; Exact mapped bytes E8 4C BF FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xbf
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578ab9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x578a92
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 65 CB FB FF: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xcb
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        push 0
        push 0
        push 1
        push 5d1224h
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 44 28 5E 00: call dword ptr [0x5e2844]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 75 08: jne 0x578b02
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 1B: jmp 0x578b1d
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp dword ptr [ebp + 1ch], 1
        ; Exact mapped bytes 75 15: jne 0x578b1d
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 20h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 07: jne 0x578b1d
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 1
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 0F 84 58 01 00 00: je 0x578c7f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 47: je 0x578b7a
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 9
        ; Exact mapped bytes 74 3C: je 0x578b7a
        __asm _emit 0x74
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 20h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        xor edx, edx
        mov dl, byte ptr [ecx + 5e03a1h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x578b66
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 18h]
        sub ecx, 1
        mov dword ptr [ebp + 18h], ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp + 18h]
        sub eax, 1
        mov dword ptr [ebp + 18h], eax
        ; Exact mapped bytes EB B3: jmp 0x578b2d
        __asm _emit 0xeb
        __asm _emit 0xb3
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 74 1F 5E 00: call dword ptr [0x5e1f74]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 8A CA FB FF: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xca
        __asm _emit 0xfb
        __asm _emit 0xff
        lea edx, [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 7C 1F 5E 00: call dword ptr [0x5e1f7c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp + 0ch], ecx
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x578c7a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 9
        ; Exact mapped bytes 74 14: je 0x578bf3
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b9h
        push 5d1160h
        ; Exact mapped bytes E8 12 BE FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xbe
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578bf3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x578bd4
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp + 14h], edx
        mov eax, dword ptr [ebp + 18h]
        sub eax, 1
        mov dword ptr [ebp + 18h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 4C: jne 0x578c5d
        __asm _emit 0x75
        __asm _emit 0x4c
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x578c23
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        cmp edx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 7D 24: jge 0x578c4f
        __asm _emit 0x7d
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp + 20h]
        mov edx, dword ptr [ecx + eax*4]
        add edx, dword ptr [ebp + 24h]
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 7D 11: jge 0x578c4d
        __asm _emit 0x7d
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp + 20h]
        mov edx, dword ptr [ecx + eax*4]
        add edx, dword ptr [ebp + 24h]
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x578c4f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB CB: jmp 0x578c1a
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov eax, dword ptr [ebp - 28h]
        cmp eax, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 75 06: jne 0x578c5d
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x578c7a
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 24h]
        cdq
        idiv dword ptr [ebp - 10h]
        imul eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp + 24h]
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes E9 9E FE FF FF: jmp 0x578b1d
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 64h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 2D: je 0x578cb5
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 16 11 FC FF: call 0x539da6
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x578cb5
        __asm _emit 0x74
        __asm _emit 0x1e
        lea eax, [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 F7 11 FC FF: call 0x539e9a
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [ebp - 0ch]
        sub ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 23 00 00 00: call 0x578cd8
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
