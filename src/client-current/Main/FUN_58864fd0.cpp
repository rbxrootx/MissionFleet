// Complete Ghidra body ranges for the selected function.
// 4 discontiguous segments; total 6071 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58864FD0 .. +0x1557 bytes.
extern "C" __declspec(naked) void FUN_58864fd0_segment_00() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr [esp + 10h]
        push esi
        push edi
        mov dword ptr [ebp + 644h], eax
        mov dword ptr [ebp + 1f40h], 0ffffffffh
        mov dword ptr [ebp + 7cch], 0
        push ecx
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C F0 08 00: call 0x588f4090
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf0
        __asm _emit 0x08
        __asm _emit 0x00
        lea esi, [eax + 50h]
        mov eax, dword ptr [esp + 1ch]
        lea edi, [ebp + 648h]
        mov ecx, 60h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        lea edx, [eax*4]
        mov dword ptr [ebp + 7c8h], eax
        mov eax, dword ptr [esp + 20h]
        push edx
        push eax
        lea ecx, [ebp + 7d0h]
        push ecx
        ; Exact mapped bytes E8 15 7D 11 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x7d
        __asm _emit 0x11
        __asm _emit 0x00
        xor eax, eax
        cdq
        mov esi, eax
        xor esi, edx
        add esp, 0ch
        sub esi, edx
        lea edi, [ebp + 104h]
        mov ebx, 0bh
        mov edi, edi
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 171h
        ; Exact mapped bytes 7E 17: jle 0x58865078
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58865078
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 5c4h]
        ; Exact mapped bytes EB 02: jmp 0x5886507a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 2ch]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x588650ac
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [edi]
        push esi
        ; Exact mapped bytes E8 AC 22 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 94: jne 0x58865050
        __asm _emit 0x75
        __asm _emit 0x94
        lea esi, [ebp + 674h]
        lea edi, [ebp + 0ach]
        mov ebx, 0bh
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov cl, byte ptr [esi]
        xor cl, 0aah
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, 0
        setl al
        add eax, 171h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x58865108
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58865108
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58865108
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [edx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5886510a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 2ch]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5886513c
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes 0F BE 06: movsx eax, byte ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x06
        mov ecx, dword ptr [edi]
        xor eax, 0ffffffaah
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 11 22 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        add edi, 4
        inc esi
        sub ebx, 1
        ; Exact mapped bytes 0F 85 74 FF FF FF: jne 0x588650d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 4]
        add ecx, 0a2h
        push ecx
        mov ecx, dword ptr [ebp + 254h]
        add edx, 16dh
        push edx
        ; Exact mapped bytes E8 15 E1 09 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xe1
        __asm _emit 0x09
        __asm _emit 0x00
        movzx eax, word ptr [ebp + 656h]
        mov edx, dword ptr [ebp + 69ch]
        mov edi, 0fh
        and eax, edi
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        imul eax, eax, 0e0h
        mov eax, dword ptr [eax + 589cfd70h]
        cmp eax, 4bh
        ; Exact mapped bytes 0F 8D C2 00 00 00: jge 0x58865272
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 2a5h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 17: jle 0x588651da
        __asm _emit 0x7e
        __asm _emit 0x17
        test eax, eax
        ; Exact mapped bytes 7C 13: jl 0x588651da
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 0B: je 0x588651da
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x588651dc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 34ch]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x58865211
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        movzx eax, word ptr [ebp + 656h]
        mov edx, dword ptr [ebp + 69ch]
        and eax, edi
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        imul eax, eax, 0e0h
        mov eax, dword ptr [eax + 589cfd70h]
        add eax, 25ah
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 0F 8E D3 00 00 00: jle 0x58865322
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8C CB 00 00 00: jl 0x58865322
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x58865322
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x58865324
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 19h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x5886529b
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x5886529b
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5886529b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5886529d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 34ch]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x588652d2
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        movzx eax, word ptr [ebp + 656h]
        mov edx, dword ptr [ebp + 69ch]
        and eax, edi
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        imul eax, eax, 0e0h
        mov eax, dword ptr [eax + 589cfd70h]
        sub eax, 19h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x58865322
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58865322
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58865322
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x58865324
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 2d0h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x5886535a
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        movzx eax, word ptr [ebp + 656h]
        mov edx, dword ptr [ebp + 69ch]
        and eax, edi
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        ; Exact mapped bytes 8B 0D E0 4A A2 58: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        imul eax, eax, 0e0h
        mov eax, dword ptr [eax + 589cfd74h]
        mov esi, 1
        add eax, esi
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 18: jle 0x588653ae
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x588653ae
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x588653ae
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588653b0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 254h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x588653e5
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        movzx eax, word ptr [ebp + 656h]
        mov edx, dword ptr [ebp + 69ch]
        and eax, edi
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        ; Exact mapped bytes 8B 0D E0 4A A2 58: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        imul eax, eax, 0e0h
        mov eax, dword ptr [eax + 589cfd74h]
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 18: jle 0x58865432
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58865432
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x58865432
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x58865434
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 1d8h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x58865469
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        movzx eax, word ptr [ebp + 656h]
        mov edx, dword ptr [ebp + 69ch]
        and eax, edi
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        imul eax, eax, 0e0h
        mov eax, dword ptr [eax + 589cfd70h]
        cmp eax, 4bh
        ; Exact mapped bytes 0F 8D C3 00 00 00: jge 0x5886555c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 33bh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x588654c4
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x588654c4
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x588654c4
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x588654c6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 444h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x588654fb
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        movzx eax, word ptr [ebp + 656h]
        mov edx, dword ptr [ebp + 69ch]
        and eax, edi
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        imul eax, eax, 0e0h
        mov eax, dword ptr [eax + 589cfd70h]
        add eax, 2f0h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 0F 8E D3 00 00 00: jle 0x5886560c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8C CB 00 00 00: jl 0x5886560c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x5886560c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x5886560e
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 7dh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x58865585
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58865585
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58865585
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x58865587
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 444h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x588655bc
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        movzx eax, word ptr [ebp + 656h]
        mov edx, dword ptr [ebp + 69ch]
        and eax, edi
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        imul eax, eax, 0e0h
        mov eax, dword ptr [eax + 589cfd70h]
        add eax, 4bh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x5886560c
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x5886560c
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5886560c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5886560e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 3c8h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x58865644
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        movzx eax, word ptr [ebp + 656h]
        test al, 0fh
        ; Exact mapped bytes 74 43: je 0x58865692
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [ebp + 69ch]
        and eax, edi
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        mov edx, dword ptr [ebp + 53ch]
        imul eax, eax, 0e0h
        movzx ecx, word ptr [eax + 589cfce8h]
        and ecx, 3fh
        mov dword ptr [edx + 50h], ecx
        mov eax, dword ptr [ebp + 53ch]
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 4c0h]
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes EB 1B: jmp 0x588656ad
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp + 53ch]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 4c0h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 254h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        add ecx, 34h
        push ecx
        mov ecx, dword ptr [ebp + 15ch]
        add edx, 1fh
        push edx
        ; Exact mapped bytes E8 C4 DB 09 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xdb
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1c2h
        ; Exact mapped bytes 7E 17: jle 0x588656f4
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588656f4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 708h]
        ; Exact mapped bytes EB 02: jmp 0x588656f6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 15ch]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5886572b
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebp + 254h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 1d8h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 2d0h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 3c8h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 15ch]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 1d8h]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [eax + 8]
        sub eax, 6
        push eax
        push ecx
        mov ecx, dword ptr [ebp + 0a4h]
        ; Exact mapped bytes E8 17 DB 09 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xdb
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 69ch]
        shr eax, 1
        ; Exact mapped bytes 74 05: je 0x58865788
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 4ch
        ; Exact mapped bytes 75 11: jne 0x58865799
        __asm _emit 0x75
        __asm _emit 0x11
        test byte ptr [ebp + 656h], 0fh
        mov dword ptr [esp + 14h], 4eh
        ; Exact mapped bytes 74 08: je 0x588657a1
        __asm _emit 0x74
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 60h
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x588657aa
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 4ch
        ; Exact mapped bytes 75 39: jne 0x588657e3
        __asm _emit 0x75
        __asm _emit 0x39
        movzx ecx, word ptr [ebp + 656h]
        test cl, 0fh
        ; Exact mapped bytes 75 2D: jne 0x588657e3
        __asm _emit 0x75
        __asm _emit 0x2d
        and ecx, edi
        mov edx, ecx
        shl edx, 4
        sub edx, ecx
        lea eax, [eax + edx*8]
        imul eax, eax, 0e0h
        mov eax, dword ptr [eax + 589cfd10h]
        lea ecx, [eax + eax*2]
        shl ecx, 4
        mov edx, ecx
        mov ecx, dword ptr [ebp + 4]
        sub ecx, edx
        add ecx, 19ah
        ; Exact mapped bytes EB 32: jmp 0x58865815
        __asm _emit 0xeb
        __asm _emit 0x32
        movzx ecx, word ptr [ebp + 656h]
        and ecx, edi
        mov edx, ecx
        shl edx, 4
        sub edx, ecx
        lea eax, [eax + edx*8]
        imul eax, eax, 0e0h
        mov eax, dword ptr [eax + 589cfd10h]
        lea ecx, [eax + eax*2]
        shl ecx, 4
        mov edx, ecx
        mov ecx, dword ptr [ebp + 4]
        sub ecx, edx
        add ecx, 13dh
        mov dword ptr [esp + 18h], ecx
        mov ecx, dword ptr [ebp + 8]
        add ecx, 100h
        mov dword ptr [esp + 20h], ecx
        cmp eax, esi
        ; Exact mapped bytes 0F 86 96 06 00 00: jbe 0x58865ec4
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x96
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, edi
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [ebp + esi*4 + 254h]
        push eax
        movzx eax, word ptr [esp + 18h]
        imul eax, esi
        add eax, dword ptr [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 42 DA 09 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xda
        __asm _emit 0x09
        __asm _emit 0x00
        movzx eax, word ptr [ebp + 656h]
        mov edx, dword ptr [ebp + 69ch]
        and eax, 0fh
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        imul eax, eax, 70h
        add eax, esi
        movzx eax, word ptr [eax*2 + 589cfd12h]
        mov ecx, eax
        and ecx, 3fh
        mov edx, ecx
        shl edx, 4
        shr eax, 6
        sub edx, ecx
        lea ebx, [eax + edx*8]
        imul ebx, ebx, 0e0h
        add ebx, 589cfca8h
        mov eax, dword ptr [ebx + 0c8h]
        cmp eax, 4bh
        ; Exact mapped bytes 0F 8D A3 00 00 00: jge 0x58865947
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 2a5h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x588658cf
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x588658cf
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x588658cf
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x588658d1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + esi*4 + 34ch]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x58865907
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebx + 0c8h]
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 25ah
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 0F 8E B3 00 00 00: jle 0x588659d7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8C AB 00 00 00: jl 0x588659d7
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x588659d7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x588659d9
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 19h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x58865970
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58865970
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58865970
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x58865972
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + esi*4 + 34ch]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x588659a8
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebx + 0c8h]
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        sub eax, 19h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x588659d7
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x588659d7
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x588659d7
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x588659d9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + esi*4 + 2d0h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x58865a10
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebx + 0cch]
        ; Exact mapped bytes 8B 0D E0 4A A2 58: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 1
        add eax, edi
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 18: jle 0x58865a43
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58865a43
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x58865a43
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x58865a45
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + esi*4 + 254h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x58865a7b
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebx + 0cch]
        ; Exact mapped bytes 8B 0D E0 4A A2 58: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 18: jle 0x58865aa7
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58865aa7
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x58865aa7
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x58865aa9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + esi*4 + 1d8h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x58865adf
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebx + 0c8h]
        cmp eax, 4bh
        ; Exact mapped bytes 0F 8D A3 00 00 00: jge 0x58865b91
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 33bh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x58865b19
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58865b19
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58865b19
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x58865b1b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + esi*4 + 444h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x58865b51
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebx + 0c8h]
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 2f0h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 0F 8E B3 00 00 00: jle 0x58865c21
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8C AB 00 00 00: jl 0x58865c21
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x58865c21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x58865c23
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 7dh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x58865bba
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58865bba
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58865bba
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x58865bbc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + esi*4 + 444h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x58865bf2
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebx + 0c8h]
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 4bh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x58865c21
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58865c21
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58865c21
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x58865c23
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + esi*4 + 3c8h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x58865c5a
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        movzx eax, word ptr [ebp + 656h]
        mov edx, dword ptr [ebp + 69ch]
        and eax, 0fh
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        imul eax, eax, 70h
        add eax, esi
        movzx eax, word ptr [eax*2 + 589cfd12h]
        test al, 3fh
        ; Exact mapped bytes 74 25: je 0x58865cac
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + esi*4 + 53ch]
        and eax, 3fh
        mov dword ptr [ecx + 50h], eax
        mov eax, dword ptr [ebp + esi*4 + 53ch]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebp + esi*4 + 4c0h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes EB 1D: jmp 0x58865cc9
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + esi*4 + 53ch]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ebp + esi*4 + 4c0h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + esi*4 + 254h]
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp + esi*4 + 15ch]
        sub edx, 15h
        push edx
        add eax, 1fh
        push eax
        ; Exact mapped bytes E8 A6 D5 09 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd5
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 69ch]
        shr eax, 1
        ; Exact mapped bytes 74 05: je 0x58865cf9
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 4ch
        ; Exact mapped bytes 75 31: jne 0x58865d2a
        __asm _emit 0x75
        __asm _emit 0x31
        test byte ptr [ebp + 656h], 0fh
        ; Exact mapped bytes 75 28: jne 0x58865d2a
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 40eh
        ; Exact mapped bytes 7E 3F: jle 0x58865d52
        __asm _emit 0x7e
        __asm _emit 0x3f
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 36: je 0x58865d52
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 1038h]
        ; Exact mapped bytes EB 2A: jmp 0x58865d54
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1bch
        ; Exact mapped bytes 7E 17: jle 0x58865d52
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58865d52
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 6f0h]
        ; Exact mapped bytes EB 02: jmp 0x58865d54
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + esi*4 + 15ch]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x58865d8b
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebp + esi*4 + 15ch]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + esi*4 + 254h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + esi*4 + 1d8h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + esi*4 + 2d0h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + esi*4 + 3c8h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        movzx ecx, word ptr [ebp + 656h]
        shr ecx, 4
        xor ecx, 0ffffffaah
        and ecx, 0ffh
        cmp dword ptr [ebx + 4ch], ecx
        ; Exact mapped bytes 7F 5D: jg 0x58865e3c
        __asm _emit 0x7f
        __asm _emit 0x5d
        mov eax, dword ptr [ebp + 644h]
        cmp eax, -1
        ; Exact mapped bytes 75 3D: jne 0x58865e27
        __asm _emit 0x75
        __asm _emit 0x3d
        ; Exact mapped bytes 66 83 BD 9C 07 00 00 19: cmp word ptr [ebp + 0x79c], 0x19
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        mov edi, 100h
        ; Exact mapped bytes 75 4E: jne 0x58865e47
        __asm _emit 0x75
        __asm _emit 0x4e
        mov eax, dword ptr [ebx + 44h]
        test eax, 10000000h
        ; Exact mapped bytes 75 39: jne 0x58865e3c
        __asm _emit 0x75
        __asm _emit 0x39
        cmp eax, 41h
        ; Exact mapped bytes 75 3F: jne 0x58865e47
        __asm _emit 0x75
        __asm _emit 0x3f
        mov edx, 0ffc0h
        ; Exact mapped bytes 66 85 53 40: test word ptr [ebx + 0x40], dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x40
        ; Exact mapped bytes 74 34: je 0x58865e47
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp + 7cch]
        cmp eax, 3
        ; Exact mapped bytes 7D 29: jge 0x58865e47
        __asm _emit 0x7d
        __asm _emit 0x29
        inc eax
        mov dword ptr [ebp + 7cch], eax
        ; Exact mapped bytes EB 1B: jmp 0x58865e42
        __asm _emit 0xeb
        __asm _emit 0x1b
        test eax, eax
        ; Exact mapped bytes 0F 85 34 01 00 00: jne 0x58865f63
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test dword ptr [ebx + 44h], 10000000h
        ; Exact mapped bytes 0F 85 34 01 00 00: jne 0x58865f70
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [ebp + 7cch]
        mov edi, 64h
        mov ecx, dword ptr [ebp + esi*4 + 254h]
        push edi
        ; Exact mapped bytes E8 8C CE 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + esi*4 + 1d8h]
        push edi
        ; Exact mapped bytes E8 7F CE 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + esi*4 + 2d0h]
        push edi
        ; Exact mapped bytes E8 72 CE 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + esi*4 + 3c8h]
        push edi
        ; Exact mapped bytes E8 65 CE 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + esi*4 + 4c0h]
        push edi
        ; Exact mapped bytes E8 58 CE 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + esi*4 + 53ch]
        push edi
        ; Exact mapped bytes E8 4B CE 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
        movzx eax, word ptr [ebp + 656h]
        mov edx, dword ptr [ebp + 69ch]
        and eax, 0fh
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        imul eax, eax, 0e0h
        inc esi
        cmp esi, dword ptr [eax + 589cfd10h]
        ; Exact mapped bytes 0F 82 6C F9 FF FF: jb 0x58865830
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x6c
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [esp + 14h]
        mov ecx, dword ptr [esp + 20h]
        imul edx, esi
        add edx, dword ptr [esp + 18h]
        push ecx
        mov ecx, dword ptr [ebp + esi*4 + 254h]
        push edx
        ; Exact mapped bytes E8 AE D3 09 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd3
        __asm _emit 0x09
        __asm _emit 0x00
        movzx eax, word ptr [ebp + 656h]
        mov edx, dword ptr [ebp + 69ch]
        and eax, 0fh
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        imul eax, eax, 70h
        add eax, esi
        movzx eax, word ptr [eax*2 + 589cfd12h]
        mov ecx, eax
        and ecx, 3fh
        mov edx, ecx
        shl edx, 4
        shr eax, 6
        sub edx, ecx
        lea ebx, [eax + edx*8]
        imul ebx, ebx, 0e0h
        add ebx, 589cfca8h
        mov eax, dword ptr [ebx + 0c8h]
        cmp eax, 4bh
        ; Exact mapped bytes 0F 8D BA 00 00 00: jge 0x58865ff2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 2a5h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 2F: jle 0x58865f7a
        __asm _emit 0x7e
        __asm _emit 0x2f
        test eax, eax
        ; Exact mapped bytes 7C 2B: jl 0x58865f7a
        __asm _emit 0x7c
        __asm _emit 0x2b
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 22: je 0x58865f7a
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 19: jmp 0x58865f7c
        __asm _emit 0xeb
        __asm _emit 0x19
        test dword ptr [ebx + 44h], 10000000h
        ; Exact mapped bytes 0F 85 CC FE FF FF: jne 0x58865e3c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, 100h
        ; Exact mapped bytes E9 CD FE FF FF: jmp 0x58865e47
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [ebp + esi*4 + 34ch]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x58865fb2
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebx + 0c8h]
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 25ah
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 0F 8E B3 00 00 00: jle 0x58866082
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8C AB 00 00 00: jl 0x58866082
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x58866082
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x58866084
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 19h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x5886601b
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x5886601b
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5886601b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5886601d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + esi*4 + 34ch]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x58866053
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebx + 0c8h]
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        sub eax, 19h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x58866082
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58866082
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58866082
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x58866084
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + esi*4 + 2d0h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x588660bb
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebx + 0cch]
        ; Exact mapped bytes 8B 0D E0 4A A2 58: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 1
        add eax, edi
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 18: jle 0x588660ee
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x588660ee
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x588660ee
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588660f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + esi*4 + 254h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x58866126
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebx + 0cch]
        ; Exact mapped bytes 8B 0D E0 4A A2 58: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 18: jle 0x58866152
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58866152
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x58866152
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x58866154
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + esi*4 + 1d8h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5886618a
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebx + 0c8h]
        cmp eax, 4bh
        ; Exact mapped bytes 0F 8D A3 00 00 00: jge 0x5886623c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 33bh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x588661c4
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x588661c4
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x588661c4
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x588661c6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + esi*4 + 444h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x588661fc
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebx + 0c8h]
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 2f0h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 0F 8E B3 00 00 00: jle 0x588662cc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8C AB 00 00 00: jl 0x588662cc
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x588662cc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x588662ce
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 7dh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x58866265
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58866265
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58866265
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x58866267
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + esi*4 + 444h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5886629d
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebx + 0c8h]
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 4bh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x588662cc
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x588662cc
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x588662cc
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x588662ce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + esi*4 + 3c8h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x58866305
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        movzx eax, word ptr [ebp + 656h]
        mov edx, dword ptr [ebp + 69ch]
        and eax, 0fh
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        imul eax, eax, 70h
        add eax, esi
        movzx eax, word ptr [eax*2 + 589cfd12h]
        test al, 3fh
        ; Exact mapped bytes 74 25: je 0x58866357
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + esi*4 + 53ch]
        and eax, 3fh
        mov dword ptr [ecx + 50h], eax
        mov eax, dword ptr [ebp + esi*4 + 53ch]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebp + esi*4 + 4c0h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes EB 1D: jmp 0x58866374
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + esi*4 + 53ch]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ebp + esi*4 + 4c0h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + esi*4 + 254h]
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp + esi*4 + 15ch]
        sub edx, 14h
        push edx
        add eax, 1fh
        push eax
        ; Exact mapped bytes E8 FB CE 09 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1c2h
        ; Exact mapped bytes 7E 17: jle 0x588663bd
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588663bd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 708h]
        ; Exact mapped bytes EB 02: jmp 0x588663bf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + esi*4 + 15ch]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x588663f5
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebp + esi*4 + 254h]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + esi*4 + 1d8h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + esi*4 + 2d0h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + esi*4 + 3c8h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + esi*4 + 15ch]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        movzx eax, word ptr [ebp + 656h]
        mov ecx, eax
        shr ecx, 4
        xor ecx, 0ffffffaah
        and ecx, 0ffh
        cmp dword ptr [ebx + 4ch], ecx
        ; Exact mapped bytes 7F 3A: jg 0x58866485
        __asm _emit 0x7f
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp + 644h]
        cmp ecx, -1
        ; Exact mapped bytes 75 1A: jne 0x58866470
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 66 83 BD 9C 07 00 00 19: cmp word ptr [ebp + 0x79c], 0x19
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        mov edi, 100h
        ; Exact mapped bytes 75 2B: jne 0x58866490
        __asm _emit 0x75
        __asm _emit 0x2b
        test dword ptr [ebx + 44h], 40000000h
        ; Exact mapped bytes 74 22: je 0x58866490
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes EB 1B: jmp 0x5886648b
        __asm _emit 0xeb
        __asm _emit 0x1b
        test ecx, ecx
        ; Exact mapped bytes 0F 85 78 01 00 00: jne 0x588665f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test dword ptr [ebx + 44h], 10000000h
        ; Exact mapped bytes 0F 85 78 01 00 00: jne 0x588665fd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [ebp + 7cch]
        mov edi, 64h
        mov edx, dword ptr [ebp + 69ch]
        and eax, 0fh
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        mov eax, dword ptr [ebp + 7c8h]
        shr edx, 1
        lea edx, [edx + ecx*8]
        imul edx, edx, 0e0h
        sub eax, dword ptr [edx + 589cfd10h]
        push edi
        add dword ptr [ebp + 7cch], eax
        mov ecx, dword ptr [ebp + esi*4 + 254h]
        ; Exact mapped bytes E8 16 C8 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + esi*4 + 1d8h]
        push edi
        ; Exact mapped bytes E8 09 C8 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + esi*4 + 2d0h]
        push edi
        ; Exact mapped bytes E8 FC C7 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + esi*4 + 3c8h]
        push edi
        ; Exact mapped bytes E8 EF C7 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + esi*4 + 4c0h]
        push edi
        ; Exact mapped bytes E8 E2 C7 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + esi*4 + 53ch]
        push edi
        ; Exact mapped bytes E8 D5 C7 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, 1
        add esi, edi
        cmp esi, 1eh
        ; Exact mapped bytes 7F 61: jg 0x58866578
        __asm _emit 0x7f
        __asm _emit 0x61
        mov edx, 1fh
        lea eax, [ebp + esi*4 + 1d8h]
        sub edx, esi
        ; Exact mapped bytes EB 09: jmp 0x58866530
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58866530 .. +0x17D bytes.
extern "C" __declspec(naked) void FUN_58864fd0_segment_01() {
    __asm {
        mov ecx, dword ptr [eax + 7ch]
        mov esi, 0fff0h
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 0f8h]
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 1f0h]
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 2e8h]
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 364h]
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        mov ecx, dword ptr [eax - 7ch]
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        add eax, 4
        sub edx, edi
        ; Exact mapped bytes 75 B8: jne 0x58866530
        __asm _emit 0x75
        __asm _emit 0xb8
        ; Exact mapped bytes 8B 0D CC 48 A2 58: mov ecx, dword ptr [0x58a248cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 0F 85 FD 01 00 00: jne 0x5886678f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D CC 48 A2 58: mov ecx, dword ptr [0x58a248cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 70h], edi
        ; Exact mapped bytes 0F 85 EE 01 00 00: jne 0x5886678f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ecx + 7ah]
        sub eax, edi
        ; Exact mapped bytes 0F 84 69 01 00 00: je 0x58866716
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, edi
        ; Exact mapped bytes 0F 85 DA 01 00 00: jne 0x5886678f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [ecx + 78h]
        cmp cl, 3
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x5886668f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 14h]
        test eax, eax
        ; Exact mapped bytes 0F 84 BE 01 00 00: je 0x5886678f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx + 0a4h]
        and edx, 0fffffffeh
        cmp edx, 2
        ; Exact mapped bytes 74 25: je 0x58866607
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [eax + 8]
        test eax, eax
        ; Exact mapped bytes 75 E8: jne 0x588665d1
        __asm _emit 0x75
        __asm _emit 0xe8
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        test dword ptr [ebx + 44h], 10000000h
        ; Exact mapped bytes 0F 85 88 FE FF FF: jne 0x58866485
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, 100h
        ; Exact mapped bytes E9 89 FE FF FF: jmp 0x58866490
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, ecx
        test eax, eax
        ; Exact mapped bytes 0F 84 7E 01 00 00: je 0x5886678f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ebx, word ptr [eax + 5eh]
        and ebx, 0fh
        cmp dword ptr [esp + 1ch], edi
        ; Exact mapped bytes 0F 82 6D 01 00 00: jb 0x5886678f
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebp + 1dch]
        cmp ebx, edi
        ; Exact mapped bytes 74 52: je 0x5886667e
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [esi]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 7ch]
        push 64h
        ; Exact mapped bytes E8 9F C6 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 64h
        ; Exact mapped bytes E8 96 C6 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f8h]
        push 64h
        ; Exact mapped bytes E8 89 C6 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1f0h]
        push 64h
        ; Exact mapped bytes E8 7C C6 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2e8h]
        push 64h
        ; Exact mapped bytes E8 6F C6 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 364h]
        push 64h
        ; Exact mapped bytes E8 62 C6 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        inc edi
        add esi, 4
        cmp edi, dword ptr [esp + 1ch]
        ; Exact mapped bytes 76 A0: jbe 0x58866628
        __asm _emit 0x76
        __asm _emit 0xa0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        cmp cl, 5
        ; Exact mapped bytes 0F 85 F7 00 00 00: jne 0x5886678f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 1ch]
        cmp ebx, 1
        ; Exact mapped bytes 0F 82 EA 00 00 00: jb 0x5886678f
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebp + 1dch]
        ; Exact mapped bytes EB 03: jmp 0x588666b0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588666B0 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_58864fd0_segment_02() {
    __asm {
        cmp edi, 2
        ; Exact mapped bytes 74 52: je 0x58866707
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [esi]
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 7ch]
        push 64h
        ; Exact mapped bytes E8 16 C6 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 64h
        ; Exact mapped bytes E8 0D C6 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f8h]
        push 64h
        ; Exact mapped bytes E8 00 C6 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1f0h]
        push 64h
        ; Exact mapped bytes E8 F3 C5 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2e8h]
        push 64h
        ; Exact mapped bytes E8 E6 C5 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 364h]
        push 64h
        ; Exact mapped bytes E8 D9 C5 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        inc edi
        add esi, 4
        cmp edi, ebx
        ; Exact mapped bytes 76 A1: jbe 0x588666b0
        __asm _emit 0x76
        __asm _emit 0xa1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        cmp byte ptr [ecx + 78h], 5
        ; Exact mapped bytes 75 73: jne 0x5886678f
        __asm _emit 0x75
        __asm _emit 0x73
        mov ebx, dword ptr [esp + 1ch]
        cmp ebx, 1
        ; Exact mapped bytes 72 6A: jb 0x5886678f
        __asm _emit 0x72
        __asm _emit 0x6a
        lea esi, [ebp + 1dch]
        ; Exact mapped bytes EB 03: jmp 0x58866730
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58866730 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_58864fd0_segment_03() {
    __asm {
        cmp edi, 1
        ; Exact mapped bytes 74 52: je 0x58866787
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [esi]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 7ch]
        push 64h
        ; Exact mapped bytes E8 96 C5 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 64h
        ; Exact mapped bytes E8 8D C5 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f8h]
        push 64h
        ; Exact mapped bytes E8 80 C5 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1f0h]
        push 64h
        ; Exact mapped bytes E8 73 C5 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2e8h]
        push 64h
        ; Exact mapped bytes E8 66 C5 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 364h]
        push 64h
        ; Exact mapped bytes E8 59 C5 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        inc edi
        add esi, 4
        cmp edi, ebx
        ; Exact mapped bytes 76 A1: jbe 0x58866730
        __asm _emit 0x76
        __asm _emit 0xa1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
