// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048E085 .. +0x3BC bytes.
extern "C" __declspec(naked) void FUN_0048e085_0048E085() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp + 10h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 0A: jne 0x48e0a3
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 95 03 00 00: jmp 0x48e438
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x48e0bd
        __asm _emit 0x75
        __asm _emit 0x14
        push 173h
        push 5c636ch
        ; Exact mapped bytes E8 48 69 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x69
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48e0bd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x48e0a3
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 81 DA 0A 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xda
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 20 F9 FF FF: call 0x48d9f9
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], 1
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 1D 03 00 00: je 0x48e40d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x48e10a
        __asm _emit 0x75
        __asm _emit 0x14
        push 17ah
        push 5c636ch
        ; Exact mapped bytes E8 FB 68 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x68
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48e10a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x48e0f0
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 10h]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x48e12d
        __asm _emit 0x75
        __asm _emit 0x14
        push 17bh
        push 5c636ch
        ; Exact mapped bytes E8 D8 68 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x68
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48e12d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x48e110
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 B3 02 00 00: je 0x48e40d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 0F 84 A3 02 00 00: je 0x48e40d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 4D DC: mov word ptr [ebp - 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 10h]
        add edx, 2
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 4D D8: mov word ptr [ebp - 0x28], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd8
        mov edx, dword ptr [ebp - 10h]
        add edx, 2
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 4
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 28h]
        and eax, 0ffffh
        cmp eax, 180h
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x48e250
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 0ffffh
        cmp ecx, 143h
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x48e250
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        and edx, 0ffffh
        cmp edx, 401h
        ; Exact mapped bytes 74 76: je 0x48e250
        __asm _emit 0x74
        __asm _emit 0x76
        mov eax, dword ptr [ebp - 28h]
        and eax, 0ffffh
        cmp eax, 403h
        ; Exact mapped bytes 74 67: je 0x48e250
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 0ffffh
        cmp ecx, 376h
        ; Exact mapped bytes 74 56: je 0x48e250
        __asm _emit 0x74
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 28h]
        and edx, 0ffffh
        cmp edx, 37ah
        ; Exact mapped bytes 74 45: je 0x48e250
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 28h]
        and eax, 0ffffh
        cmp eax, 377h
        ; Exact mapped bytes 74 36: je 0x48e250
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 0ffffh
        cmp ecx, 37bh
        ; Exact mapped bytes 74 25: je 0x48e250
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 28h]
        and edx, 0ffffh
        cmp edx, 378h
        ; Exact mapped bytes 74 14: je 0x48e250
        __asm _emit 0x74
        __asm _emit 0x14
        push 191h
        push 5c636ch
        ; Exact mapped bytes E8 B5 67 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x67
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48e250
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 0F 85 47 FF FF FF: jne 0x48e1a1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 0ffffh
        cmp ecx, 376h
        ; Exact mapped bytes 74 46: je 0x48e2b1
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 28h]
        and edx, 0ffffh
        cmp edx, 37ah
        ; Exact mapped bytes 74 35: je 0x48e2b1
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 28h]
        and eax, 0ffffh
        cmp eax, 377h
        ; Exact mapped bytes 74 26: je 0x48e2b1
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 0ffffh
        cmp ecx, 37bh
        ; Exact mapped bytes 74 15: je 0x48e2b1
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 28h]
        and edx, 0ffffh
        cmp edx, 378h
        ; Exact mapped bytes 0F 85 4E 01 00 00: jne 0x48e3ff
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + eax*4]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        test eax, eax
        ; Exact mapped bytes 75 4E: jne 0x48e31b
        __asm _emit 0x75
        __asm _emit 0x4e
        cmp dword ptr [ebp - 30h], -1
        ; Exact mapped bytes 74 48: je 0x48e31b
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 11: jne 0x48e2ea
        __asm _emit 0x75
        __asm _emit 0x11
        push 5
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 E4 26 5E 00: call dword ptr [0x5e26e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 0F: jmp 0x48e2f9
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 2
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 15 E4 26 5E 00: call dword ptr [0x5e26e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x48e313
        __asm _emit 0x75
        __asm _emit 0x14
        push 1a4h
        push 5c636ch
        ; Exact mapped bytes E8 F2 66 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x66
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48e313
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x48e2f9
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes EB 96: jmp 0x48e2b1
        __asm _emit 0xeb
        __asm _emit 0x96
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 14: jne 0x48e335
        __asm _emit 0x75
        __asm _emit 0x14
        push 1a7h
        push 5c636ch
        ; Exact mapped bytes E8 D0 66 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x66
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48e335
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x48e31b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 2ch], 0
        cmp dword ptr [ebp - 30h], -1
        ; Exact mapped bytes 74 7D: je 0x48e3c5
        __asm _emit 0x74
        __asm _emit 0x7d
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0D: je 0x48e35b
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 66 8B 48 14: mov cx, word ptr [eax + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 4D C6: mov word ptr [ebp - 0x3a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc6
        ; Exact mapped bytes EB 0B: jmp 0x48e366
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 66 8B 42 10: mov ax, word ptr [edx + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 45 C6: mov word ptr [ebp - 0x3a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc6
        ; Exact mapped bytes 66 8B 4D C6: mov cx, word ptr [ebp - 0x3a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xc6
        ; Exact mapped bytes 66 89 4D CC: mov word ptr [ebp - 0x34], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xcc
        mov edx, dword ptr [ebp - 34h]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 24h]
        and eax, 0ffffh
        cmp edx, eax
        ; Exact mapped bytes 74 14: je 0x48e397
        __asm _emit 0x74
        __asm _emit 0x14
        push 1b0h
        push 5c636ch
        ; Exact mapped bytes E8 6E 66 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x66
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48e397
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x48e36e
        __asm _emit 0x75
        __asm _emit 0xd1
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes 66 8B 4D D8: mov cx, word ptr [ebp - 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd8
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C5 02 00 00: call 0x48e687
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 2D: je 0x48e3f8
        __asm _emit 0x74
        __asm _emit 0x2d
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 10: je 0x48e3e1
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 15 8C 26 5E 00: call dword ptr [0x5e268c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 06: jne 0x48e3f6
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 07: jmp 0x48e3ff
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes E9 43 FD FF FF: jmp 0x48e150
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 22: je 0x48e435
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 74 0D: je 0x48e429
        __asm _emit 0x74
        __asm _emit 0x0d
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 34h]
        ; Exact mapped bytes E8 C0 1E 00 00: call 0x4902e9
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 0C 00 00 00: call 0x48e441
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
