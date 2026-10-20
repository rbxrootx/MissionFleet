// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881B180 .. +0x36C bytes.
extern "C" __declspec(naked) void FUN_5881b180() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 57 03 00 00: je 0x5881b4e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 1f00h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 200h
        push edi
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 84 1E 03 00 00: je 0x5881b4c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 85 18 02 00 00: jne 0x5881b3d7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 50h]
        cmp ecx, eax
        ; Exact mapped bytes 75 08: jne 0x5881b1d1
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [esi + 8]
        cmp edx, dword ptr [esi + 54h]
        ; Exact mapped bytes 74 7F: je 0x5881b250
        __asm _emit 0x74
        __asm _emit 0x7f
        sub eax, ecx
        mov ecx, dword ptr [esi + 54h]
        sub ecx, dword ptr [esi + 8]
        lea edx, [eax + 7]
        cmp edx, 0eh
        ; Exact mapped bytes 77 25: ja 0x5881b206
        __asm _emit 0x77
        __asm _emit 0x25
        lea edx, [eax + 3]
        cmp edx, 6
        ; Exact mapped bytes 77 14: ja 0x5881b1fd
        __asm _emit 0x77
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x5881b1f2
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 1F: jmp 0x5881b211
        __asm _emit 0xeb
        __asm _emit 0x1f
        xor edx, edx
        test eax, eax
        setg dl
        mov edi, edx
        ; Exact mapped bytes EB 14: jmp 0x5881b211
        __asm _emit 0xeb
        __asm _emit 0x14
        cdq
        sub eax, edx
        mov edi, eax
        sar edi, 1
        ; Exact mapped bytes EB 0B: jmp 0x5881b211
        __asm _emit 0xeb
        __asm _emit 0x0b
        cdq
        and edx, 3
        add eax, edx
        mov edi, eax
        sar edi, 2
        lea eax, [ecx + 7]
        cmp eax, 0eh
        ; Exact mapped bytes 77 23: ja 0x5881b23c
        __asm _emit 0x77
        __asm _emit 0x23
        lea edx, [ecx + 3]
        cmp edx, 6
        ; Exact mapped bytes 77 12: ja 0x5881b233
        __asm _emit 0x77
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x5881b22a
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x5881b247
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor eax, eax
        test ecx, ecx
        setg al
        ; Exact mapped bytes EB 14: jmp 0x5881b247
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x5881b247
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 C0 7B 0E 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x7b
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp dword ptr [esi + 68h], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x5881b2da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 60h]
        mov ecx, edi
        ; Exact mapped bytes E8 BC 47 F3 FF: call 0x5874fa20
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x47
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x5881b27b
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, 1
        add dword ptr [edi + 50h], ecx
        mov eax, dword ptr [esi + 64h]
        add dword ptr [eax + 50h], ecx
        ; Exact mapped bytes E9 4D 02 00 00: jmp 0x5881b4c8
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        cmp eax, dword ptr [esi + 50h]
        ; Exact mapped bytes 0F 85 41 02 00 00: jne 0x5881b4c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        cmp ecx, dword ptr [esi + 54h]
        ; Exact mapped bytes 0F 85 35 02 00 00: jne 0x5881b4c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 A8 45 A2 58: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, word ptr [edx + 204h]
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x5881b3ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x5881b3ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 0fh
        ; Exact mapped bytes 0F 8E 85 00 00 00: jle 0x5881b34b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 7C: je 0x5881b34b
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 3ch]
        ; Exact mapped bytes EB 73: jmp 0x5881b34d
        __asm _emit 0xeb
        __asm _emit 0x73
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 0E: je 0x5881b2f1
        __asm _emit 0x74
        __asm _emit 0x0e
        dec dword ptr [eax + 50h]
        mov eax, dword ptr [esi + 64h]
        dec dword ptr [eax + 50h]
        ; Exact mapped bytes E9 D7 01 00 00: jmp 0x5881b4c8
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [esi + 50h]
        ; Exact mapped bytes 0F 85 CB 01 00 00: jne 0x5881b4c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        cmp edx, dword ptr [esi + 54h]
        ; Exact mapped bytes 0F 85 BF 01 00 00: jne 0x5881b4c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A8 45 A2 58: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, word ptr [eax + 204h]
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x5881b3ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x5881b3ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 0fh
        ; Exact mapped bytes 7E 14: jle 0x5881b34b
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x5881b34b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes EB 02: jmp 0x5881b34d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 30h
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x5881b37d
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x5881b37d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 0c0h]
        ; Exact mapped bytes EB 02: jmp 0x5881b37f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 05 C6 0E 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xc6
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x5881b3af
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x5881b3af
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes EB 02: jmp 0x5881b3b1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0e2ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 200h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x5881b4c8
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 400h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 85 DC 00 00 00: jne 0x5881b4c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 50h]
        cmp ecx, eax
        ; Exact mapped bytes 75 08: jne 0x5881b3fe
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [esi + 8]
        cmp edx, dword ptr [esi + 54h]
        ; Exact mapped bytes 74 7F: je 0x5881b47d
        __asm _emit 0x74
        __asm _emit 0x7f
        sub eax, ecx
        mov ecx, dword ptr [esi + 54h]
        sub ecx, dword ptr [esi + 8]
        lea edx, [eax + 7]
        cmp edx, 0eh
        ; Exact mapped bytes 77 25: ja 0x5881b433
        __asm _emit 0x77
        __asm _emit 0x25
        lea edx, [eax + 3]
        cmp edx, 6
        ; Exact mapped bytes 77 14: ja 0x5881b42a
        __asm _emit 0x77
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x5881b41f
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 1F: jmp 0x5881b43e
        __asm _emit 0xeb
        __asm _emit 0x1f
        xor edx, edx
        test eax, eax
        setg dl
        mov edi, edx
        ; Exact mapped bytes EB 14: jmp 0x5881b43e
        __asm _emit 0xeb
        __asm _emit 0x14
        cdq
        sub eax, edx
        mov edi, eax
        sar edi, 1
        ; Exact mapped bytes EB 0B: jmp 0x5881b43e
        __asm _emit 0xeb
        __asm _emit 0x0b
        cdq
        and edx, 3
        add eax, edx
        mov edi, eax
        sar edi, 2
        lea eax, [ecx + 7]
        cmp eax, 0eh
        ; Exact mapped bytes 77 23: ja 0x5881b469
        __asm _emit 0x77
        __asm _emit 0x23
        lea edx, [ecx + 3]
        cmp edx, 6
        ; Exact mapped bytes 77 12: ja 0x5881b460
        __asm _emit 0x77
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x5881b457
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x5881b474
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor eax, eax
        test ecx, ecx
        setg al
        ; Exact mapped bytes EB 14: jmp 0x5881b474
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x5881b474
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 93 79 0E 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x79
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp dword ptr [esi + 68h], 0
        ; Exact mapped bytes 74 14: je 0x5881b497
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 0B: je 0x5881b497
        __asm _emit 0x74
        __asm _emit 0x0b
        dec dword ptr [eax + 50h]
        mov eax, dword ptr [esi + 64h]
        dec dword ptr [eax + 50h]
        ; Exact mapped bytes EB 31: jmp 0x5881b4c8
        __asm _emit 0xeb
        __asm _emit 0x31
        mov eax, dword ptr [esi + 4]
        cmp eax, dword ptr [esi + 50h]
        ; Exact mapped bytes 75 29: jne 0x5881b4c8
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [esi + 8]
        cmp ecx, dword ptr [esi + 54h]
        ; Exact mapped bytes 75 21: jne 0x5881b4c8
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 0e5ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        push 0
        mov ecx, esi
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes E8 F8 60 F1 FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x60
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x5881b4e5
        __asm _emit 0x74
        __asm _emit 0x16
        nop
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5881b4e8
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5881b4d0
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
