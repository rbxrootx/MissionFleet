// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587511E0 .. +0x82D bytes.
extern "C" __declspec(naked) void FUN_587511e0() {
    __asm {
        sub esp, 14h
        push ebx
        mov ebx, dword ptr [esp + 1ch]
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 10h], ecx
        test ebx, ebx
        ; Exact mapped bytes 0F 84 0C 08 00 00: je 0x58751a03
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A4 46 A2 58 00: cmp dword ptr [0x58a246a4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 FF 07 00 00: je 0x58751a03
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 0F 84 F3 07 00 00: je 0x58751a03
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 4ch]
        mov ebp, dword ptr [esp + 30h]
        mov esi, dword ptr [esp + 2ch]
        mov dword ptr [esp + 14h], edi
        test edi, edi
        ; Exact mapped bytes 74 1E: je 0x58751241
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 66 83 7F 26 00: cmp word ptr [edi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 13: jge 0x5875123d
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 14h]
        push ebp
        push esi
        push ebx
        mov ecx, edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 E6: jne 0x58751223
        __asm _emit 0x75
        __asm _emit 0xe6
        mov dword ptr [esp + 14h], edi
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 8]
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add edx, dword ptr [ebp]
        add ebx, dword ptr [ebp + 4]
        cmp dword ptr [eax + 164h], 817h
        ; Exact mapped bytes 7E 17: jle 0x58751279
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58751279
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ecx, dword ptr [ecx + 205ch]
        ; Exact mapped bytes EB 02: jmp 0x5875127b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esi]
        push 0
        push 0c8h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edi
        mov edi, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edi
        mov edi, dword ptr [esi + 8]
        push ebx
        push edx
        mov edx, dword ptr [esp + 48h]
        mov dword ptr [eax + 8], edi
        mov edi, dword ptr [esi + 0ch]
        push edx
        mov dword ptr [eax + 0ch], edi
        ; Exact mapped bytes E8 B7 2A 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x2a
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 164h]
        cmp eax, 817h
        ; Exact mapped bytes 7E 17: jle 0x587512d3
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x587512d3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [edx + 205ch]
        ; Exact mapped bytes EB 02: jmp 0x587512d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [edx + 4]
        mov edx, dword ptr [esp + 10h]
        add edi, dword ptr [edx + 4]
        add edi, dword ptr [ebp]
        cmp eax, 819h
        ; Exact mapped bytes 7E 17: jle 0x58751300
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58751300
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [edx + 2064h]
        ; Exact mapped bytes EB 02: jmp 0x58751302
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebp, dword ptr [esp + 10h]
        mov ebp, dword ptr [ebp + 4]
        sub ebp, dword ptr [edx + 4]
        mov edx, dword ptr [esp + 10h]
        add ebp, dword ptr [edx + 1ch]
        mov edx, dword ptr [esp + 30h]
        add ebp, dword ptr [edx]
        cmp edi, ebp
        ; Exact mapped bytes 0F 8D 88 00 00 00: jge 0x587513a9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 818h
        ; Exact mapped bytes 7E 17: jle 0x5875133f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5875133f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [eax + 2060h]
        ; Exact mapped bytes EB 02: jmp 0x58751341
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 0
        push 0c8h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebx
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [esp + 44h]
        push edi
        push eax
        ; Exact mapped bytes E8 F1 29 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x29
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 164h]
        cmp eax, 818h
        ; Exact mapped bytes 7E 1D: jle 0x5875139f
        __asm _emit 0x7e
        __asm _emit 0x1d
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 14: je 0x5875139f
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [edx + 2060h]
        add edi, dword ptr [edx + 4]
        ; Exact mapped bytes E9 43 FF FF FF: jmp 0x587512e2
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        add edi, dword ptr [edx + 4]
        ; Exact mapped bytes E9 39 FF FF FF: jmp 0x587512e2
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ecx + 164h], 819h
        ; Exact mapped bytes 7E 17: jle 0x587513cc
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x587513cc
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [eax + 2064h]
        ; Exact mapped bytes EB 02: jmp 0x587513ce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        mov ebp, dword ptr [esp + 28h]
        push 0
        push 0c8h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        push ebx
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push edi
        push ebp
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 64 29 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x29
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 164h]
        cmp ecx, 817h
        ; Exact mapped bytes 7E 17: jle 0x58751426
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58751426
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov edx, dword ptr [edx + 205ch]
        ; Exact mapped bytes EB 02: jmp 0x58751428
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebx, dword ptr [edx + 8]
        mov edx, dword ptr [esp + 10h]
        add ebx, dword ptr [edx + 8]
        mov edx, dword ptr [esp + 30h]
        add ebx, dword ptr [edx + 4]
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        cmp ecx, 81dh
        ; Exact mapped bytes 7E 17: jle 0x5875145f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5875145f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov edx, dword ptr [edx + 2074h]
        ; Exact mapped bytes EB 02: jmp 0x58751461
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [esp + 10h]
        mov edi, dword ptr [edi + 8]
        sub edi, dword ptr [edx + 8]
        mov edx, dword ptr [esp + 10h]
        add edi, dword ptr [edx + 20h]
        mov edx, edi
        mov edi, dword ptr [esp + 30h]
        add edx, dword ptr [edi + 4]
        cmp ebx, edx
        ; Exact mapped bytes 0F 8D F6 01 00 00: jge 0x58751679
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov edi, dword ptr [edx + 4]
        mov edx, dword ptr [esp + 30h]
        add edi, dword ptr [edx]
        cmp ecx, 81ah
        ; Exact mapped bytes 0F 8E 54 01 00 00: jle 0x587515f0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 47 01 00 00: je 0x587515f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 18ch]
        mov ecx, dword ptr [ecx + 2068h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 33 01 00 00: je 0x587515f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push 0
        push 0c8h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        push ebx
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push edi
        push ebp
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 79 28 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x28
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 164h]
        cmp ecx, 81ah
        ; Exact mapped bytes 7E 17: jle 0x58751511
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58751511
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov edx, dword ptr [edx + 2068h]
        ; Exact mapped bytes EB 02: jmp 0x58751513
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [edx + 4]
        mov edx, dword ptr [esp + 10h]
        add edi, dword ptr [edx + 4]
        mov edx, dword ptr [esp + 30h]
        add edi, dword ptr [edx]
        cmp ecx, 81ch
        ; Exact mapped bytes 7E 17: jle 0x58751542
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58751542
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov edx, dword ptr [edx + 2070h]
        ; Exact mapped bytes EB 02: jmp 0x58751544
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebp, dword ptr [esp + 10h]
        mov ebp, dword ptr [ebp + 4]
        sub ebp, dword ptr [edx + 4]
        mov edx, dword ptr [esp + 10h]
        add ebp, dword ptr [edx + 1ch]
        mov edx, dword ptr [esp + 30h]
        add ebp, dword ptr [edx]
        cmp edi, ebp
        ; Exact mapped bytes 0F 8D 89 00 00 00: jge 0x587515ec
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 81bh
        ; Exact mapped bytes 7E 17: jle 0x58751582
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58751582
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 206ch]
        ; Exact mapped bytes EB 02: jmp 0x58751584
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 0
        push 0c8h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebx
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [esp + 44h]
        push edi
        push eax
        ; Exact mapped bytes E8 AE 27 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x27
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 164h]
        cmp ecx, 81bh
        ; Exact mapped bytes 7E 1D: jle 0x587515e2
        __asm _emit 0x7e
        __asm _emit 0x1d
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 14: je 0x587515e2
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [eax + 18ch]
        mov edx, dword ptr [edx + 206ch]
        add edi, dword ptr [edx + 4]
        ; Exact mapped bytes E9 41 FF FF FF: jmp 0x58751523
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        add edi, dword ptr [edx + 4]
        ; Exact mapped bytes E9 37 FF FF FF: jmp 0x58751523
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [esp + 28h]
        cmp dword ptr [eax + 164h], 81ch
        ; Exact mapped bytes 7E 17: jle 0x58751613
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58751613
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 2070h]
        ; Exact mapped bytes EB 02: jmp 0x58751615
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 0
        push 0c8h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        push ebx
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push edi
        push ebp
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 21 27 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x27
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 164h]
        cmp ecx, 81ah
        ; Exact mapped bytes 7E 1D: jle 0x5875166f
        __asm _emit 0x7e
        __asm _emit 0x1d
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 14: je 0x5875166f
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [eax + 18ch]
        mov edx, dword ptr [edx + 2068h]
        add ebx, dword ptr [edx + 8]
        ; Exact mapped bytes E9 D1 FD FF FF: jmp 0x58751440
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        add ebx, dword ptr [edx + 8]
        ; Exact mapped bytes E9 C7 FD FF FF: jmp 0x58751440
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [edi]
        cmp dword ptr [eax + 164h], 81dh
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes 7E 17: jle 0x587516a9
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x587516a9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 2074h]
        ; Exact mapped bytes EB 02: jmp 0x587516ab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esi]
        push 0
        push 0c8h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edi
        mov edi, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edi
        mov edi, dword ptr [esi + 8]
        mov dword ptr [eax + 8], edi
        mov edi, dword ptr [esi + 0ch]
        mov dword ptr [eax + 0ch], edi
        mov eax, dword ptr [esp + 38h]
        push eax
        push edx
        mov edx, dword ptr [esp + 48h]
        push edx
        ; Exact mapped bytes E8 83 26 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x26
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D A4 46 A2 58: mov ebp, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [ebp + 164h]
        cmp ebx, 81dh
        ; Exact mapped bytes 7E 17: jle 0x58751708
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ebp + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58751708
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 18ch]
        mov ecx, dword ptr [eax + 2074h]
        ; Exact mapped bytes EB 02: jmp 0x5875170a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [edx]
        mov edi, dword ptr [ecx + 4]
        mov edx, dword ptr [esp + 10h]
        add edi, eax
        add edi, dword ptr [edx + 4]
        cmp ebx, 81fh
        ; Exact mapped bytes 7E 17: jle 0x5875173b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ebp + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5875173b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 18ch]
        mov ecx, dword ptr [ecx + 207ch]
        ; Exact mapped bytes EB 02: jmp 0x5875173d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        sub eax, dword ptr [ecx + 4]
        add eax, dword ptr [edx + 4]
        add eax, dword ptr [edx + 1ch]
        cmp ebx, 820h
        ; Exact mapped bytes 7E 17: jle 0x58751765
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ebp + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58751765
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 18ch]
        mov ecx, dword ptr [edx + 2080h]
        ; Exact mapped bytes EB 02: jmp 0x58751767
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ecx, dword ptr [ecx + 4]
        sub eax, edi
        cmp eax, ecx
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes 7F 5C: jg 0x587517d0
        __asm _emit 0x7f
        __asm _emit 0x5c
        cmp ebx, 821h
        mov dword ptr [esp + 2ch], edi
        ; Exact mapped bytes 7E 17: jle 0x58751797
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ebp + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58751797
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 18ch]
        mov ecx, dword ptr [eax + 2084h]
        ; Exact mapped bytes EB 02: jmp 0x58751799
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        mov ebx, dword ptr [esp + 28h]
        push 0
        push 0c8h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [esp + 38h]
        push eax
        push edi
        push ebx
        ; Exact mapped bytes E8 95 25 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x25
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x58751877
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, 81eh
        ; Exact mapped bytes 7E 17: jle 0x587517ef
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ebp + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x587517ef
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 18ch]
        mov ecx, dword ptr [ecx + 2078h]
        ; Exact mapped bytes EB 02: jmp 0x587517f1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ecx, dword ptr [ecx + 4]
        cdq
        idiv ecx
        mov edx, dword ptr [esp + 10h]
        mov edx, dword ptr [edx + 78h]
        cmp edx, 64h
        ; Exact mapped bytes 75 05: jne 0x58751808
        __asm _emit 0x75
        __asm _emit 0x05
        lea eax, [edi + ecx*2]
        ; Exact mapped bytes EB 14: jmp 0x5875181c
        __asm _emit 0xeb
        __asm _emit 0x14
        test edx, edx
        ; Exact mapped bytes 75 08: jne 0x58751814
        __asm _emit 0x75
        __asm _emit 0x08
        cdq
        sub eax, edx
        sar eax, 1
        dec eax
        ; Exact mapped bytes EB 03: jmp 0x58751817
        __asm _emit 0xeb
        __asm _emit 0x03
        add eax, -4
        imul eax, ecx
        add eax, edi
        cmp ebx, 820h
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 7E 17: jle 0x5875183f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ebp + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5875183f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 18ch]
        mov ecx, dword ptr [ecx + 2080h]
        ; Exact mapped bytes EB 02: jmp 0x58751841
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esi]
        push 0
        push 0c8h
        sub esp, 10h
        mov edx, esp
        mov dword ptr [edx], edi
        mov edi, dword ptr [esi + 4]
        mov dword ptr [edx + 4], edi
        mov edi, dword ptr [esi + 8]
        mov dword ptr [edx + 8], edi
        mov edi, dword ptr [esi + 0ch]
        mov dword ptr [edx + 0ch], edi
        mov edx, dword ptr [esp + 38h]
        push edx
        push eax
        mov eax, dword ptr [esp + 48h]
        push eax
        ; Exact mapped bytes E8 ED 24 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x24
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 28h]
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 164h]
        cmp edx, 81dh
        ; Exact mapped bytes 7E 17: jle 0x587518a1
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x587518a1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ecx, dword ptr [ecx + 2074h]
        ; Exact mapped bytes EB 02: jmp 0x587518a3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [ecx + 4]
        mov ecx, dword ptr [esp + 10h]
        add edi, dword ptr [ecx + 4]
        mov ecx, dword ptr [esp + 30h]
        add edi, dword ptr [ecx]
        cmp edx, 81fh
        ; Exact mapped bytes 7E 17: jle 0x587518d2
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x587518d2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ecx, dword ptr [ecx + 207ch]
        ; Exact mapped bytes EB 02: jmp 0x587518d4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ebp, dword ptr [esp + 10h]
        mov ebp, dword ptr [ebp + 4]
        sub ebp, dword ptr [ecx + 4]
        mov ecx, dword ptr [esp + 10h]
        add ebp, dword ptr [ecx + 1ch]
        mov ecx, ebp
        mov ebp, dword ptr [esp + 30h]
        add ecx, dword ptr [ebp]
        cmp edi, ecx
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x58751991
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 2ch]
        cmp edi, ecx
        ; Exact mapped bytes 7C 0A: jl 0x58751908
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov ebp, dword ptr [esp + 18h]
        add ecx, ebp
        cmp edi, ecx
        ; Exact mapped bytes 7C 54: jl 0x5875195c
        __asm _emit 0x7c
        __asm _emit 0x54
        cmp edx, 81eh
        ; Exact mapped bytes 7E 17: jle 0x58751927
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58751927
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ecx, dword ptr [edx + 2078h]
        ; Exact mapped bytes EB 02: jmp 0x58751929
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 0
        push 0c8h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [esp + 38h]
        push eax
        push edi
        push ebx
        ; Exact mapped bytes E8 09 24 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x24
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 164h]
        cmp edx, 81eh
        ; Exact mapped bytes 7E 1D: jle 0x58751987
        __asm _emit 0x7e
        __asm _emit 0x1d
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 14: je 0x58751987
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [eax + 18ch]
        mov ecx, dword ptr [ecx + 2078h]
        add edi, dword ptr [ecx + 4]
        ; Exact mapped bytes E9 2C FF FF FF: jmp 0x587518b3
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        add edi, dword ptr [ecx + 4]
        ; Exact mapped bytes E9 22 FF FF FF: jmp 0x587518b3
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 164h], 81fh
        ; Exact mapped bytes 7E 17: jle 0x587519b4
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x587519b4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ecx, dword ptr [edx + 207ch]
        ; Exact mapped bytes EB 02: jmp 0x587519b6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 0
        push 0c8h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [esp + 38h]
        push eax
        push edi
        push ebx
        ; Exact mapped bytes E8 7C 23 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x23
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edi, dword ptr [esp + 14h]
        test edi, edi
        ; Exact mapped bytes 74 17: je 0x58751a03
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 14h]
        push ebp
        push esi
        push ebx
        mov ecx, edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 ED: jne 0x587519f0
        __asm _emit 0x75
        __asm _emit 0xed
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
