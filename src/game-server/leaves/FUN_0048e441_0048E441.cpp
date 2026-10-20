// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048E441 .. +0x246 bytes.
extern "C" __declspec(naked) void FUN_0048e441_0048E441() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 0F 84 24 02 00 00: je 0x48e67e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 34h]
        add ecx, 20h
        ; Exact mapped bytes E8 B9 53 0A 00: call 0x533821
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x53
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 B3 01 00 00: je 0x48e628
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 8]
        push edx
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 34h]
        add ecx, 20h
        ; Exact mapped bytes E8 98 D2 05 00: call 0x4eb727
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xd2
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x48e545
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x48e545
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EC 98 00 00: call 0x497da7
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        test ecx, ecx
        ; Exact mapped bytes 74 67: je 0x48e52f
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 07 04 06 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x48e4f7
        __asm _emit 0x75
        __asm _emit 0x14
        push 1edh
        push 5c636ch
        ; Exact mapped bytes E8 0E 65 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x65
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48e4f7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x48e4dd
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 38h], 0
        ; Exact mapped bytes 75 14: jne 0x48e51a
        __asm _emit 0x75
        __asm _emit 0x14
        push 1eeh
        push 5c636ch
        ; Exact mapped bytes E8 EB 64 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x64
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48e51a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x48e4fd
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 38h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8D 98 00 00: call 0x497dbc
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8ch]
        ; Exact mapped bytes E8 AA 98 00 00: call 0x497de7
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 60 FF FF FF: jmp 0x48e4a5
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 90 00 00 00: mov dx, word ptr [ecx + 0x90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x48e623
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 90 00 00 00: mov cx, word ptr [eax + 0x90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 03 06 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x03
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 14: jne 0x48e58b
        __asm _emit 0x75
        __asm _emit 0x14
        push 1f9h
        push 5c636ch
        ; Exact mapped bytes E8 7A 64 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x64
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48e58b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x48e571
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 14: jne 0x48e5ae
        __asm _emit 0x75
        __asm _emit 0x14
        push 1fah
        push 5c636ch
        ; Exact mapped bytes E8 57 64 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x64
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48e5ae
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x48e591
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 38h]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + 38h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 B8 00 00 00: call dword ptr [eax + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 38h]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 75 14: jne 0x48e5eb
        __asm _emit 0x75
        __asm _emit 0x14
        push 1feh
        push 5c636ch
        ; Exact mapped bytes E8 1A 64 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x64
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48e5eb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x48e5c8
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 38h]
        mov dword ptr [ecx + 90h], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 38h]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 38h]
        mov edx, dword ptr [eax + 88h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes E9 43 FE FF FF: jmp 0x48e46b
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 34h]
        add ecx, 20h
        ; Exact mapped bytes E8 EB 51 0A 00: call 0x533821
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x51
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 3F: je 0x48e67e
        __asm _emit 0x74
        __asm _emit 0x3f
        lea edx, [ebp - 8]
        push edx
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 34h]
        add ecx, 20h
        ; Exact mapped bytes E8 CE D0 05 00: call 0x4eb727
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd0
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 74 17: je 0x48e67c
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 88h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 88h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        ; Exact mapped bytes EB BB: jmp 0x48e639
        __asm _emit 0xeb
        __asm _emit 0xbb
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
