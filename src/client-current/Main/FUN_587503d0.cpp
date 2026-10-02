// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 2818 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587503D0 .. +0xB02 bytes.
extern "C" __declspec(naked) void FUN_587503d0_segment_00() {
    __asm {
        sub esp, 8
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 10h], ecx
        test al, 1
        ; Exact mapped bytes 0F 84 E1 0A 00 00: je 0x58750ec8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ecx + 4ch]
        mov ebp, dword ptr [esp + 24h]
        mov esi, dword ptr [esp + 20h]
        mov edi, dword ptr [esp + 1ch]
        mov dword ptr [esp + 14h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 20: je 0x5875041e
        __asm _emit 0x74
        __asm _emit 0x20
        mov edi, edi
        ; Exact mapped bytes 66 83 7B 26 00: cmp word ptr [ebx + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7b
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 13: jge 0x5875041a
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 14h]
        push ebp
        push esi
        push edi
        mov ecx, ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ebx, dword ptr [ebx + 48h]
        test ebx, ebx
        ; Exact mapped bytes 75 E6: jne 0x58750400
        __asm _emit 0x75
        __asm _emit 0xe6
        mov dword ptr [esp + 14h], ebx
        mov ecx, dword ptr [esp + 10h]
        cmp dword ptr [ecx + 60h], 0
        mov dword ptr [esp + 20h], 0
        ; Exact mapped bytes 74 08: je 0x58750438
        __asm _emit 0x74
        __asm _emit 0x08
        mov dword ptr [esp + 20h], 14h
        mov eax, ecx
        mov ebx, dword ptr [eax + 4]
        mov ebp, dword ptr [eax + 8]
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        sub ebx, dword ptr [esp + 20h]
        cmp dword ptr [eax + 164h], 2dh
        ; Exact mapped bytes 7E 17: jle 0x58750469
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750469
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ecx, dword ptr [edx + 0b4h]
        ; Exact mapped bytes EB 02: jmp 0x5875046b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 0fffffeffh
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        push ebp
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebx
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 C8 38 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x38
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1bh
        ; Exact mapped bytes 7E 14: jle 0x587504ba
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x587504ba
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes EB 02: jmp 0x587504bc
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
        push ebp
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebx
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 7A 38 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x38
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 24h
        ; Exact mapped bytes 7E 17: jle 0x5875050b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5875050b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes EB 02: jmp 0x5875050d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 101h
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        push ebp
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebx
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 26 38 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x38
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
        cmp eax, 1bh
        ; Exact mapped bytes 7E 14: jle 0x5875055f
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5875055f
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [edx + 6ch]
        ; Exact mapped bytes EB 02: jmp 0x58750561
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebx, dword ptr [edx + 4]
        sub ebx, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 10h]
        add ebx, dword ptr [edx + 4]
        cmp eax, 1dh
        ; Exact mapped bytes 7E 14: jle 0x58750588
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58750588
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes EB 02: jmp 0x5875058a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 10h]
        mov edx, dword ptr [edx + 1ch]
        sub edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [esp + 10h]
        add edx, dword ptr [ecx + 4]
        cmp ebx, edx
        ; Exact mapped bytes 0F 8D 21 01 00 00: jge 0x587506c4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2eh
        ; Exact mapped bytes 7E 1C: jle 0x587505c4
        __asm _emit 0x7e
        __asm _emit 0x1c
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x587505c4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ecx, dword ptr [edx + 0b8h]
        ; Exact mapped bytes EB 02: jmp 0x587505c6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 0fffffeffh
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        push ebp
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebx
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 6D 37 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x37
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1ch
        ; Exact mapped bytes 7E 14: jle 0x58750615
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58750615
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes EB 02: jmp 0x58750617
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
        push ebp
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebx
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 1F 37 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x37
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 25h
        ; Exact mapped bytes 7E 17: jle 0x58750666
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750666
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 94h]
        ; Exact mapped bytes EB 02: jmp 0x58750668
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 101h
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        push ebp
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebx
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 CB 36 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x36
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
        cmp eax, 1ch
        ; Exact mapped bytes 7E 17: jle 0x587506bd
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x587506bd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [edx + 70h]
        ; Exact mapped bytes E9 AF FE FF FF: jmp 0x5875056c
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        ; Exact mapped bytes E9 A8 FE FF FF: jmp 0x5875056c
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 2fh
        ; Exact mapped bytes 7E 17: jle 0x587506e9
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x587506e9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 0bch]
        ; Exact mapped bytes EB 02: jmp 0x587506eb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 0fffffeffh
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        push ebp
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebx
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 48 36 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x36
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1dh
        ; Exact mapped bytes 7E 14: jle 0x5875073a
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5875073a
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes EB 02: jmp 0x5875073c
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
        push ebp
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebx
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 FA 35 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x35
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 26h
        ; Exact mapped bytes 7E 17: jle 0x5875078b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5875078b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes EB 02: jmp 0x5875078d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 101h
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        push ebp
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebx
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 A6 35 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x35
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
        cmp eax, 1bh
        ; Exact mapped bytes 7E 14: jle 0x587507df
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x587507df
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [edx + 6ch]
        ; Exact mapped bytes EB 02: jmp 0x587507e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebx, dword ptr [edx + 8]
        mov edx, dword ptr [esp + 10h]
        add ebx, dword ptr [edx + 8]
        cmp eax, 21h
        ; Exact mapped bytes 7E 17: jle 0x58750807
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750807
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [edx + 84h]
        ; Exact mapped bytes EB 02: jmp 0x58750809
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebp, dword ptr [esp + 10h]
        mov ebp, dword ptr [ebp + 20h]
        sub ebp, dword ptr [edx + 8]
        mov edx, dword ptr [esp + 10h]
        add ebp, dword ptr [edx + 8]
        cmp ebx, ebp
        mov ebp, dword ptr [edx + 4]
        ; Exact mapped bytes 0F 8D FA 02 00 00: jge 0x58750b1f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfa
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub ebp, dword ptr [esp + 20h]
        cmp eax, 30h
        ; Exact mapped bytes 7E 17: jle 0x58750845
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750845
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes EB 02: jmp 0x58750847
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 0fffffeffh
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        push ebx
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebp
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 EC 34 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x34
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1eh
        ; Exact mapped bytes 7E 14: jle 0x58750896
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58750896
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes EB 02: jmp 0x58750898
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
        push ebp
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 9E 34 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x34
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 27h
        ; Exact mapped bytes 7E 17: jle 0x587508e7
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x587508e7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes EB 02: jmp 0x587508e9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 101h
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        push ebx
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebp
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 4A 34 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x34
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
        cmp eax, 1eh
        ; Exact mapped bytes 7E 14: jle 0x5875093b
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5875093b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [edx + 78h]
        ; Exact mapped bytes EB 02: jmp 0x5875093d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebp, dword ptr [edx + 4]
        sub ebp, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 10h]
        add ebp, dword ptr [edx + 4]
        cmp eax, 20h
        ; Exact mapped bytes 7E 17: jle 0x58750967
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750967
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 80h]
        ; Exact mapped bytes EB 02: jmp 0x58750969
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 10h]
        mov edx, dword ptr [edx + 1ch]
        sub edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [esp + 10h]
        add edx, dword ptr [ecx + 4]
        cmp ebp, edx
        ; Exact mapped bytes 7D 79: jge 0x587509f7
        __asm _emit 0x7d
        __asm _emit 0x79
        cmp eax, 1fh
        ; Exact mapped bytes 7E 19: jle 0x5875099c
        __asm _emit 0x7e
        __asm _emit 0x19
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5875099c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [eax + 18ch]
        mov ecx, dword ptr [edx + 7ch]
        ; Exact mapped bytes EB 02: jmp 0x5875099e
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
        push ebp
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 98 33 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x33
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
        cmp eax, 1fh
        ; Exact mapped bytes 7E 17: jle 0x587509f0
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x587509f0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [edx + 7ch]
        ; Exact mapped bytes E9 58 FF FF FF: jmp 0x58750948
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        ; Exact mapped bytes E9 51 FF FF FF: jmp 0x58750948
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 32h
        ; Exact mapped bytes 7E 17: jle 0x58750a1c
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750a1c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 0c8h]
        ; Exact mapped bytes EB 02: jmp 0x58750a1e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 0fffffeffh
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        push ebx
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebp
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 15 33 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x33
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 20h
        ; Exact mapped bytes 7E 17: jle 0x58750a70
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750a70
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 80h]
        ; Exact mapped bytes EB 02: jmp 0x58750a72
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
        push ebp
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 C4 32 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x32
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 29h
        ; Exact mapped bytes 7E 17: jle 0x58750ac1
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750ac1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 0a4h]
        ; Exact mapped bytes EB 02: jmp 0x58750ac3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 101h
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        push ebx
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebp
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 70 32 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x32
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
        cmp eax, 1eh
        ; Exact mapped bytes 7E 17: jle 0x58750b18
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750b18
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [edx + 78h]
        ; Exact mapped bytes E9 D0 FC FF FF: jmp 0x587507e8
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        ; Exact mapped bytes E9 C9 FC FF FF: jmp 0x587507e8
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        sub ebp, dword ptr [esp + 20h]
        cmp dword ptr [ecx + 164h], 33h
        ; Exact mapped bytes 7E 17: jle 0x58750b43
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750b43
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [eax + 0cch]
        ; Exact mapped bytes EB 02: jmp 0x58750b45
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 0fffffeffh
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        push ebx
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebp
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 EE 31 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x31
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 21h
        ; Exact mapped bytes 7E 17: jle 0x58750b97
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750b97
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes EB 02: jmp 0x58750b99
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
        push ebp
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 9D 31 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x31
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 2ah
        ; Exact mapped bytes 7E 17: jle 0x58750be8
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750be8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 0a8h]
        ; Exact mapped bytes EB 02: jmp 0x58750bea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 101h
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        push ebx
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebp
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 49 31 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x31
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
        cmp eax, 21h
        ; Exact mapped bytes 7E 17: jle 0x58750c3f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750c3f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [edx + 84h]
        ; Exact mapped bytes EB 02: jmp 0x58750c41
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebp, dword ptr [edx + 4]
        sub ebp, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 10h]
        add ebp, dword ptr [edx + 4]
        cmp eax, 23h
        ; Exact mapped bytes 7E 17: jle 0x58750c6b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750c6b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 8ch]
        ; Exact mapped bytes EB 02: jmp 0x58750c6d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 10h]
        mov edx, dword ptr [edx + 1ch]
        sub edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [esp + 10h]
        add edx, dword ptr [ecx + 4]
        cmp ebp, edx
        ; Exact mapped bytes 0F 8D 27 01 00 00: jge 0x58750dad
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 34h
        ; Exact mapped bytes 7E 1C: jle 0x58750ca7
        __asm _emit 0x7e
        __asm _emit 0x1c
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750ca7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ecx, dword ptr [edx + 0d0h]
        ; Exact mapped bytes EB 02: jmp 0x58750ca9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 0fffffeffh
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        push ebx
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebp
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 8A 30 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x30
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 22h
        ; Exact mapped bytes 7E 17: jle 0x58750cfb
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750cfb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes EB 02: jmp 0x58750cfd
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
        push ebp
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 39 30 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x30
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 2bh
        ; Exact mapped bytes 7E 17: jle 0x58750d4c
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750d4c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes EB 02: jmp 0x58750d4e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 101h
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        push ebx
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebp
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 E5 2F 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x2f
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
        cmp eax, 22h
        ; Exact mapped bytes 7E 1A: jle 0x58750da6
        __asm _emit 0x7e
        __asm _emit 0x1a
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 11: je 0x58750da6
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [edx + 88h]
        ; Exact mapped bytes E9 A6 FE FF FF: jmp 0x58750c4c
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        ; Exact mapped bytes E9 9F FE FF FF: jmp 0x58750c4c
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 35h
        ; Exact mapped bytes 7E 17: jle 0x58750dd2
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750dd2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 0d4h]
        ; Exact mapped bytes EB 02: jmp 0x58750dd4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 0fffffeffh
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        push ebx
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebp
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 5F 2F 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x2f
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 23h
        ; Exact mapped bytes 7E 17: jle 0x58750e26
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750e26
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 8ch]
        ; Exact mapped bytes EB 02: jmp 0x58750e28
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
        push ebp
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 0E 2F 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x2f
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 2ch
        ; Exact mapped bytes 7E 17: jle 0x58750e77
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58750e77
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes EB 02: jmp 0x58750e79
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 101h
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        push ebx
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebp
        push edi
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 BA 2E 1B 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x2e
        __asm _emit 0x1b
        __asm _emit 0x00
        cmp dword ptr [esp + 14h], 0
        ; Exact mapped bytes 74 1B: je 0x58750ec8
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ebp, dword ptr [esp + 24h]
        mov ebx, dword ptr [esp + 14h]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 14h]
        push ebp
        push esi
        push edi
        mov ecx, ebx
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ebx, dword ptr [ebx + 48h]
        test ebx, ebx
        ; Exact mapped bytes 75 ED: jne 0x58750eb5
        __asm _emit 0x75
        __asm _emit 0xed
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
