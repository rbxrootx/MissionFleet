// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10040640 .. +0xE1C bytes.
extern "C" __declspec(naked) void FUN_10040640_10040640() {
    __asm {
        push -1
        push 1016e680h
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
        sub esp, 364h
        mov al, byte ptr [esp + 7]
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        xor esi, esi
        lea ebp, [ebx + 0cch]
        push edi
        mov dword ptr [esp + 20h], ebx
        mov byte ptr [ebp], al
        mov dword ptr [ebp + 4], esi
        mov dword ptr [ebp + 8], esi
        mov dword ptr [ebp + 0ch], esi
        mov cl, byte ptr [esp + 17h]
        lea eax, [ebx + 0dch]
        mov dword ptr [esp + 37ch], esi
        mov dword ptr [esp + 30h], eax
        mov byte ptr [eax], cl
        mov dword ptr [eax + 4], esi
        mov dword ptr [eax + 8], esi
        mov dword ptr [eax + 0ch], esi
        mov eax, dword ptr [esp + 384h]
        mov ecx, dword ptr [esp + 388h]
        cmp eax, esi
        mov byte ptr [esp + 37ch], 1
        mov dword ptr [ebx], 10175918h
        ; Exact mapped bytes 0F 84 05 08 00 00: je 0x10040ec6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, -1
        ; Exact mapped bytes 0F 85 FC 07 00 00: jne 0x10040ec6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea edx, [esp + 278h]
        push 101aa444h
        push edx
        mov dword ptr [ebx + 4], ecx
        mov dword ptr [ebx + 0f0h], 1
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea eax, [esp + 2ch]
        lea ecx, [esp + 274h]
        push esi
        push esi
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 78 5B FD FF: call 0x10016280
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x5b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 0ah
        mov esi, eax
        lea edi, [esp + 40h]
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        cmp dword ptr [esp + 40h], 1
        ; Exact mapped bytes 0F 85 F4 00 00 00: jne 0x10040818
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 44h]
        test eax, eax
        ; Exact mapped bytes 0F 85 E8 00 00 00: jne 0x10040818
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov ecx, 43h
        lea edi, [esp + 68h]
        lea eax, [esp + 68h]
        lea esi, [edx + 28h]
        push eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [esp + 24h]
        mov ebx, 134h
        add ecx, 8
        push ecx
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 88h]
        mov ecx, dword ptr [esp + 8ch]
        lea esi, [esp + 0a8h]
        mov dword ptr [eax + 28h], edx
        mov edx, dword ptr [esp + 90h]
        mov dword ptr [eax + 2ch], ecx
        mov ecx, dword ptr [esp + 94h]
        mov dword ptr [eax + 30h], edx
        mov edx, dword ptr [esp + 98h]
        mov dword ptr [eax + 34h], ecx
        mov ecx, dword ptr [esp + 9ch]
        mov dword ptr [eax + 38h], edx
        mov edx, dword ptr [esp + 0a0h]
        mov dword ptr [eax + 3ch], ecx
        mov ecx, dword ptr [esp + 0a4h]
        mov dword ptr [eax + 40h], edx
        mov dword ptr [eax + 44h], ecx
        lea edi, [eax + 48h]
        lea edx, [esp + 0c8h]
        mov ecx, 8
        add eax, 68h
        push edx
        push eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 108h]
        mov edx, dword ptr [esp + 10ch]
        mov dword ptr [eax + 0a8h], ecx
        mov ecx, dword ptr [esp + 110h]
        mov dword ptr [eax + 0ach], edx
        mov edx, dword ptr [esp + 15ch]
        mov dword ptr [eax + 0b0h], ecx
        mov ecx, dword ptr [esp + 160h]
        mov dword ptr [eax + 0b4h], edx
        mov dword ptr [eax + 0b8h], ecx
        ; Exact mapped bytes EB 17: jmp 0x1004082f
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [esp + 20h]
        mov esi, dword ptr [esp + 10h]
        mov ecx, 31h
        mov ebx, 0c4h
        lea edi, [edx + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [eax + 3ch]
        test ecx, ecx
        mov dword ptr [esp + 28h], ecx
        ; Exact mapped bytes 0F 86 0E 01 00 00: jbe 0x10040950
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 4]
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x1004084d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x10040855
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        sub eax, edx
        sar eax, 2
        cmp eax, ecx
        ; Exact mapped bytes 73 7E: jae 0x100408d7
        __asm _emit 0x73
        __asm _emit 0x7e
        test ecx, ecx
        mov eax, ecx
        ; Exact mapped bytes 7D 02: jge 0x10040861
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        lea ecx, [eax*4]
        push ecx
        ; Exact mapped bytes E8 32 BF 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xbf
        __asm _emit 0x12
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 4]
        mov dword ptr [esp + 38h], eax
        mov edi, eax
        mov eax, dword ptr [ebp + 8]
        add esp, 4
        cmp esi, eax
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes 74 18: je 0x1004089d
        __asm _emit 0x74
        __asm _emit 0x18
        push esi
        push edi
        ; Exact mapped bytes E8 04 15 00 00: call 0x10041d90
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, eax
        ; Exact mapped bytes 75 E8: jne 0x10040885
        __asm _emit 0x75
        __asm _emit 0xe8
        mov eax, dword ptr [ebp + 4]
        push eax
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes E8 DA BE 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xbe
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 2ch]
        add esp, 4
        lea ecx, [edx + eax*4]
        mov dword ptr [ebp + 0ch], ecx
        mov ecx, dword ptr [ebp + 4]
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x100408c6
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x100408ce
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        sub eax, ecx
        sar eax, 2
        lea eax, [edx + eax*4]
        mov dword ptr [ebp + 4], edx
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [esp + 20h]
        mov dword ptr [esp + 1ch], 0
        mov eax, dword ptr [ecx + 3ch]
        test eax, eax
        ; Exact mapped bytes 76 66: jbe 0x10040950
        __asm _emit 0x76
        __asm _emit 0x66
        mov edx, dword ptr [esp + 10h]
        add edx, ebx
        mov dword ptr [esp + 24h], edx
        push 1ch
        ; Exact mapped bytes E8 A5 BE 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xbe
        __asm _emit 0x12
        __asm _emit 0x00
        mov esi, dword ptr [esp + 28h]
        mov edi, eax
        mov ecx, 7
        xor eax, eax
        mov dword ptr [esp + 2ch], edi
        add esp, 4
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov edi, dword ptr [esp + 28h]
        mov ecx, 7
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov esi, dword ptr [esp + 24h]
        mov eax, dword ptr [ebp + 8]
        lea ecx, [esp + 28h]
        add esi, 1ch
        push ecx
        push 1
        push eax
        mov ecx, ebp
        add ebx, 1ch
        mov dword ptr [esp + 30h], esi
        ; Exact mapped bytes E8 D4 52 05 00: call 0x10095c10
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x52
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [esp + 20h]
        mov eax, dword ptr [esp + 1ch]
        inc eax
        mov ecx, dword ptr [edx + 3ch]
        mov dword ptr [esp + 1ch], eax
        cmp eax, ecx
        ; Exact mapped bytes 72 A4: jb 0x100408f4
        __asm _emit 0x72
        __asm _emit 0xa4
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [eax + 40h]
        test ecx, ecx
        mov dword ptr [esp + 34h], ecx
        ; Exact mapped bytes 0F 86 D8 04 00 00: jbe 0x10040e3b
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, eax
        lea eax, [edx + 0dch]
        mov edx, dword ptr [edx + 0e0h]
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x10040979
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x10040981
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0ch]
        sub eax, edx
        sar eax, 2
        cmp eax, ecx
        ; Exact mapped bytes 0F 83 8F 00 00 00: jae 0x10040a18
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        mov eax, ecx
        ; Exact mapped bytes 7D 02: jge 0x10040991
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 06 BE 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xbe
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 24h]
        mov dword ptr [esp + 34h], eax
        mov edi, eax
        add esp, 4
        mov ebp, dword ptr [ecx + 0e4h]
        mov esi, dword ptr [ecx + 0e0h]
        lea eax, [ecx + 0dch]
        cmp esi, ebp
        ; Exact mapped bytes 74 14: je 0x100409d1
        __asm _emit 0x74
        __asm _emit 0x14
        push esi
        push edi
        ; Exact mapped bytes E8 CC 13 00 00: call 0x10041d90
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, ebp
        ; Exact mapped bytes 75 EC: jne 0x100409bd
        __asm _emit 0x75
        __asm _emit 0xec
        mov edx, dword ptr [esp + 20h]
        mov eax, dword ptr [edx + 0e0h]
        lea esi, [edx + 0dch]
        push eax
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes E8 99 BD 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xbd
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 38h]
        add esp, 4
        lea ecx, [edx + eax*4]
        mov dword ptr [esi + 0ch], ecx
        mov ecx, dword ptr [esi + 4]
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x10040a07
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x10040a0f
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [esi + 8]
        sub eax, ecx
        sar eax, 2
        lea eax, [edx + eax*4]
        mov dword ptr [esi + 4], edx
        mov dword ptr [esi + 8], eax
        mov ecx, dword ptr [esp + 20h]
        mov dword ptr [esp + 30h], 0
        mov eax, dword ptr [ecx + 40h]
        test eax, eax
        ; Exact mapped bytes 0F 86 0C 04 00 00: jbe 0x10040e3b
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebp, ebp
        push 8ch
        ; Exact mapped bytes E8 65 BD 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xbd
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        mov edi, eax
        mov ecx, 22h
        xor eax, eax
        mov dword ptr [esp + 28h], edi
        lea esi, [edx + ebx]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov edi, dword ptr [esp + 28h]
        mov ecx, 22h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [esp + 28h]
        add esp, 4
        add ebx, 88h
        cmp dword ptr [eax + 74h], ebp
        ; Exact mapped bytes 0F 86 98 03 00 00: jbe 0x10040e0a
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        ; Exact mapped bytes E8 27 BD 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xbd
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        cmp eax, ebp
        ; Exact mapped bytes 74 11: je 0x10040a91
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [esp + 17h]
        mov dword ptr [eax + 4], ebp
        mov byte ptr [eax], cl
        mov dword ptr [eax + 8], ebp
        mov dword ptr [eax + 0ch], ebp
        ; Exact mapped bytes EB 02: jmp 0x10040a93
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esp + 24h]
        mov dword ptr [edx + 88h], eax
        mov edx, dword ptr [esp + 24h]
        mov esi, dword ptr [edx + 88h]
        mov edi, dword ptr [edx + 74h]
        mov dword ptr [esp + 3ch], edi
        mov ecx, dword ptr [esi + 4]
        cmp ecx, ebp
        ; Exact mapped bytes 75 04: jne 0x10040ab9
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x10040ac1
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [esi + 0ch]
        sub eax, ecx
        sar eax, 2
        cmp eax, edi
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x10040b49
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, ebp
        mov eax, edi
        ; Exact mapped bytes 7D 02: jge 0x10040ad1
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 C6 BC 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, dword ptr [esi + 4]
        mov dword ptr [esp + 2ch], eax
        mov ebp, eax
        mov eax, dword ptr [esi + 8]
        add esp, 4
        cmp edi, eax
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 74 18: je 0x10040b09
        __asm _emit 0x74
        __asm _emit 0x18
        push edi
        push ebp
        ; Exact mapped bytes E8 98 12 00 00: call 0x10041d90
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 3ch]
        add edi, 4
        add esp, 8
        add ebp, 4
        cmp edi, eax
        ; Exact mapped bytes 75 E8: jne 0x10040af1
        __asm _emit 0x75
        __asm _emit 0xe8
        mov eax, dword ptr [esi + 4]
        push eax
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes E8 6E BC 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 40h]
        add esp, 4
        lea edx, [eax + ecx*4]
        mov dword ptr [esi + 0ch], edx
        mov edx, dword ptr [esi + 4]
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x10040b32
        __asm _emit 0x75
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 08: jmp 0x10040b3a
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 8]
        sub ecx, edx
        sar ecx, 2
        lea ecx, [eax + ecx*4]
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], ecx
        mov edx, dword ptr [esp + 24h]
        xor ebp, ebp
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [esp + 34h], ebp
        cmp eax, ebp
        ; Exact mapped bytes 0F 86 B2 02 00 00: jbe 0x10040e0a
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 8ch
        ; Exact mapped bytes E8 3E BC 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        mov edi, eax
        mov ecx, 22h
        xor eax, eax
        mov dword ptr [esp + 20h], edi
        lea esi, [edx + ebx]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov edi, dword ptr [esp + 20h]
        mov ecx, 22h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [esp + 20h]
        add esp, 4
        add ebx, 88h
        cmp dword ptr [eax + 74h], ebp
        ; Exact mapped bytes 0F 86 59 02 00 00: jbe 0x10040df2
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        ; Exact mapped bytes E8 00 BC 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        cmp eax, ebp
        ; Exact mapped bytes 74 11: je 0x10040bb8
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [esp + 17h]
        mov dword ptr [eax + 4], ebp
        mov byte ptr [eax], cl
        mov dword ptr [eax + 8], ebp
        mov dword ptr [eax + 0ch], ebp
        ; Exact mapped bytes EB 02: jmp 0x10040bba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esp + 1ch]
        mov dword ptr [edx + 88h], eax
        mov edx, dword ptr [esp + 1ch]
        mov esi, dword ptr [edx + 88h]
        mov edi, dword ptr [edx + 74h]
        mov dword ptr [esp + 38h], edi
        mov ecx, dword ptr [esi + 4]
        cmp ecx, ebp
        ; Exact mapped bytes 75 04: jne 0x10040be0
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x10040be8
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [esi + 0ch]
        sub eax, ecx
        sar eax, 2
        cmp eax, edi
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x10040c70
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, ebp
        mov eax, edi
        ; Exact mapped bytes 7D 02: jge 0x10040bf8
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 9F BB 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xbb
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, dword ptr [esi + 4]
        mov dword ptr [esp + 2ch], eax
        mov ebp, eax
        mov eax, dword ptr [esi + 8]
        add esp, 4
        cmp edi, eax
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 74 18: je 0x10040c30
        __asm _emit 0x74
        __asm _emit 0x18
        push edi
        push ebp
        ; Exact mapped bytes E8 71 11 00 00: call 0x10041d90
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 44h]
        add edi, 4
        add esp, 8
        add ebp, 4
        cmp edi, eax
        ; Exact mapped bytes 75 E8: jne 0x10040c18
        __asm _emit 0x75
        __asm _emit 0xe8
        mov eax, dword ptr [esi + 4]
        push eax
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes E8 47 BB 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xbb
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 3ch]
        add esp, 4
        lea eax, [edx + ecx*4]
        mov ecx, dword ptr [esi + 4]
        test ecx, ecx
        mov dword ptr [esi + 0ch], eax
        ; Exact mapped bytes 75 04: jne 0x10040c59
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x10040c61
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [esi + 8]
        sub eax, ecx
        sar eax, 2
        lea ecx, [edx + eax*4]
        mov dword ptr [esi + 4], edx
        mov dword ptr [esi + 8], ecx
        mov edx, dword ptr [esp + 1ch]
        xor ebp, ebp
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [esp + 28h], ebp
        cmp eax, ebp
        ; Exact mapped bytes 0F 86 57 01 00 00: jbe 0x10040dd6
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0cch
        ; Exact mapped bytes E8 17 BB 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xbb
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        mov edi, eax
        mov ecx, 33h
        xor eax, eax
        mov dword ptr [esp + 1ch], edi
        lea esi, [edx + ebx]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov edi, dword ptr [esp + 1ch]
        mov ecx, 33h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [esp + 1ch]
        xor esi, esi
        add esp, 4
        add ebx, 0cch
        mov eax, dword ptr [ecx + 0c4h]
        cmp eax, esi
        ; Exact mapped bytes 76 60: jbe 0x10040d23
        __asm _emit 0x76
        __asm _emit 0x60
        lea eax, [eax + eax*4]
        shl eax, 1
        push eax
        ; Exact mapped bytes E8 D2 BA 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xba
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        add esp, 4
        mov dword ptr [ecx + 0b8h], eax
        mov eax, dword ptr [esp + 18h]
        cmp dword ptr [eax + 0c4h], esi
        ; Exact mapped bytes 76 46: jbe 0x10040d2d
        __asm _emit 0x76
        __asm _emit 0x46
        mov ecx, dword ptr [esp + 10h]
        xor edx, edx
        add ecx, ebx
        mov eax, dword ptr [eax + 0b8h]
        mov edi, ecx
        add eax, edx
        add ebx, 0ah
        mov ebp, dword ptr [edi]
        add ecx, 0ah
        mov dword ptr [eax], ebp
        inc esi
        mov ebp, dword ptr [edi + 4]
        add edx, 0ah
        mov dword ptr [eax + 4], ebp
        ; Exact mapped bytes 66 8B 7F 08: mov di, word ptr [edi + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 78 08: mov word ptr [eax + 8], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x08
        mov eax, dword ptr [esp + 18h]
        cmp esi, dword ptr [eax + 0c4h]
        ; Exact mapped bytes 72 CE: jb 0x10040cef
        __asm _emit 0x72
        __asm _emit 0xce
        ; Exact mapped bytes EB 0A: jmp 0x10040d2d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ecx + 0b8h], esi
        mov eax, dword ptr [esp + 18h]
        mov eax, dword ptr [eax + 0c8h]
        test eax, eax
        ; Exact mapped bytes 76 6D: jbe 0x10040da4
        __asm _emit 0x76
        __asm _emit 0x6d
        lea ecx, [eax*8]
        sub ecx, eax
        shl ecx, 5
        sub ecx, eax
        shl ecx, 2
        push ecx
        ; Exact mapped bytes E8 52 BA 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xba
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        add esp, 4
        xor ebp, ebp
        mov dword ptr [edx + 0bch], eax
        mov ecx, dword ptr [esp + 18h]
        mov eax, dword ptr [ecx + 0c8h]
        test eax, eax
        ; Exact mapped bytes 76 39: jbe 0x10040da4
        __asm _emit 0x76
        __asm _emit 0x39
        mov eax, dword ptr [esp + 10h]
        xor edx, edx
        add eax, ebx
        mov edi, dword ptr [ecx + 0bch]
        mov ecx, 0dfh
        add edi, edx
        mov esi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [esp + 18h]
        add ebx, 37ch
        add eax, 37ch
        inc ebp
        mov esi, dword ptr [ecx + 0c8h]
        add edx, 37ch
        cmp ebp, esi
        ; Exact mapped bytes 72 CF: jb 0x10040d73
        __asm _emit 0x72
        __asm _emit 0xcf
        mov ecx, dword ptr [esp + 1ch]
        lea edx, [esp + 18h]
        push edx
        push 1
        mov ecx, dword ptr [ecx + 88h]
        mov eax, dword ptr [ecx + 8]
        push eax
        ; Exact mapped bytes E8 52 4E 05 00: call 0x10095c10
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x4e
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        mov eax, dword ptr [esp + 28h]
        inc eax
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [esp + 28h], eax
        cmp eax, edx
        ; Exact mapped bytes 0F 82 A9 FE FF FF: jb 0x10040c7f
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 24h]
        mov ecx, dword ptr [edx + 88h]
        lea edx, [esp + 1ch]
        push edx
        push 1
        mov eax, dword ptr [ecx + 8]
        push eax
        ; Exact mapped bytes E8 20 4E 05 00: call 0x10095c10
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x4e
        __asm _emit 0x05
        __asm _emit 0x00
        xor ebp, ebp
        mov ecx, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 34h]
        inc eax
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [esp + 34h], eax
        cmp eax, edx
        ; Exact mapped bytes 0F 82 4E FD FF FF: jb 0x10040b58
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x4e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esp + 20h]
        lea edx, [esp + 24h]
        push edx
        push 1
        mov eax, dword ptr [esi + 0e4h]
        lea ecx, [esi + 0dch]
        push eax
        ; Exact mapped bytes E8 E9 4D 05 00: call 0x10095c10
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [esi + 40h]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes 0F 82 F6 FB FF FF: jb 0x10040a31
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xf6
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 2ch]
        mov edi, dword ptr [esp + 10h]
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push eax
        push edi
        ; Exact mapped bytes E8 AE 56 FD FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x56
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esi, dword ptr [esp + 20h]
        push edi
        mov dword ptr [esi + 0f4h], eax
        ; Exact mapped bytes E8 22 B9 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb9
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        lea ecx, [esi + 68h]
        lea edx, [esp + 174h]
        push ecx
        push 101aa438h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push 198h
        ; Exact mapped bytes E8 1A B9 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb9
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 37ch], 2
        ; Exact mapped bytes 74 1E: je 0x10040eb7
        __asm _emit 0x74
        __asm _emit 0x1e
        lea ecx, [esp + 174h]
        push 0
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 16 EC 0B 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xec
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [esi + 0ech], eax
        mov eax, esi
        ; Exact mapped bytes E9 8A 05 00 00: jmp 0x10041441
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [esi + 0ech], eax
        mov eax, esi
        ; Exact mapped bytes E9 7B 05 00 00: jmp 0x10041441
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0f4241h
        cmp ecx, edx
        ; Exact mapped bytes 0F 85 6C 05 00 00: jne 0x1004143f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 31h
        xor eax, eax
        lea edi, [ebx + 8]
        mov dword ptr [ebx + 0f0h], 1
        mov dword ptr [ebx + 4], edx
        mov dword ptr [ebx + 0ech], esi
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov edi, dword ptr [esp + 38ch]
        mov dword ptr [ebx + 44h], esi
        mov dword ptr [ebx + 40h], edi
        mov dword ptr [ebx + 28h], edx
        mov ebx, dword ptr [esp + 30h]
        mov ecx, dword ptr [ebx + 4]
        cmp ecx, esi
        ; Exact mapped bytes 74 08: je 0x10040f15
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebx + 0ch]
        sub eax, ecx
        sar eax, 2
        cmp eax, edi
        ; Exact mapped bytes 0F 83 8F 00 00 00: jae 0x10040fac
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38ch]
        test eax, eax
        ; Exact mapped bytes 7D 02: jge 0x10040f2a
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        lea edx, [eax*4]
        push edx
        ; Exact mapped bytes E8 69 B8 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xb8
        __asm _emit 0x12
        __asm _emit 0x00
        mov ebx, dword ptr [ebx + 8]
        mov dword ptr [esp + 30h], eax
        mov edi, eax
        mov eax, dword ptr [esp + 34h]
        add esp, 4
        mov esi, dword ptr [eax + 4]
        cmp esi, ebx
        ; Exact mapped bytes 74 14: je 0x10040f62
        __asm _emit 0x74
        __asm _emit 0x14
        push esi
        push edi
        ; Exact mapped bytes E8 3B 0E 00 00: call 0x10041d90
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, ebx
        ; Exact mapped bytes 75 EC: jne 0x10040f4e
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [esp + 20h]
        mov eax, dword ptr [ecx + 0e0h]
        lea esi, [ecx + 0dch]
        push eax
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes E8 08 B8 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb8
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 390h]
        add esp, 4
        lea ecx, [eax + edx*4]
        mov edx, dword ptr [esi + 4]
        test edx, edx
        mov dword ptr [esi + 0ch], ecx
        ; Exact mapped bytes 75 04: jne 0x10040f9b
        __asm _emit 0x75
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 08: jmp 0x10040fa3
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 8]
        sub ecx, edx
        sar ecx, 2
        lea edx, [eax + ecx*4]
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], edx
        mov eax, dword ptr [esp + 38ch]
        xor ebx, ebx
        test eax, eax
        mov dword ptr [esp + 24h], ebx
        ; Exact mapped bytes 0F 8E 78 04 00 00: jle 0x10041439
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 8ch
        ; Exact mapped bytes E8 D5 B7 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb7
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        mov ecx, 22h
        xor eax, eax
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 35 B0 50 17 10: mov esi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        xor edi, edi
        add esp, 4
        ; Exact mapped bytes 66 89 38: mov word ptr [eax], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x38
        mov ecx, dword ptr [esp + 10h]
        add ecx, 2
        push 101aa42ch
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edx, dword ptr [esp + 10h]
        push 101ace48h
        add edx, 42h
        push edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [esp + 10h]
        lea eax, [ebx + 1]
        push 10h
        mov dword ptr [ecx + 64h], eax
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [edx + 68h], edi
        mov eax, dword ptr [esp + 14h]
        mov dword ptr [eax + 6ch], 3
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [ecx + 70h], 2
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [edx + 74h], 1
        mov eax, dword ptr [esp + 14h]
        mov dword ptr [eax + 78h], ebx
        ; Exact mapped bytes E8 56 B7 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb7
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x10041062
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [esp + 17h]
        mov dword ptr [eax + 4], edi
        mov byte ptr [eax], cl
        mov dword ptr [eax + 8], edi
        mov dword ptr [eax + 0ch], edi
        ; Exact mapped bytes EB 02: jmp 0x10041064
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [edx + 88h], eax
        mov eax, dword ptr [esp + 10h]
        mov esi, dword ptr [eax + 88h]
        mov eax, dword ptr [esi + 4]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x1004108c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 0ch]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        ; Exact mapped bytes 73 70: jae 0x100410fc
        __asm _emit 0x73
        __asm _emit 0x70
        push 4
        ; Exact mapped bytes E8 0D B7 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb7
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, dword ptr [esi + 4]
        mov dword ptr [esp + 3ch], eax
        mov ebx, eax
        mov eax, dword ptr [esi + 8]
        add esp, 4
        cmp edi, eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 74 18: je 0x100410c2
        __asm _emit 0x74
        __asm _emit 0x18
        push edi
        push ebx
        ; Exact mapped bytes E8 DF 0C 00 00: call 0x10041d90
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 34h]
        add edi, 4
        add esp, 8
        add ebx, 4
        cmp edi, eax
        ; Exact mapped bytes 75 E8: jne 0x100410aa
        __asm _emit 0x75
        __asm _emit 0xe8
        mov eax, dword ptr [esi + 4]
        push eax
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes E8 B5 B6 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xb6
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esp + 3ch]
        add esp, 4
        lea edx, [eax + 4]
        mov dword ptr [esi + 0ch], edx
        mov edx, dword ptr [esi + 4]
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x100410e7
        __asm _emit 0x75
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 08: jmp 0x100410ef
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 8]
        sub ecx, edx
        sar ecx, 2
        mov ebx, dword ptr [esp + 24h]
        lea ecx, [eax + ecx*4]
        mov dword ptr [esi + 8], ecx
        mov dword ptr [esi + 4], eax
        push 8ch
        ; Exact mapped bytes E8 9A B6 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xb6
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        mov ecx, 22h
        xor eax, eax
        mov dword ptr [esp + 1ch], edi
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov edx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 8B 35 B0 50 17 10: mov esi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 4
        ; Exact mapped bytes 66 C7 02 01 00: mov word ptr [edx], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        add eax, 2
        push 101aa41ch
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [esp + 18h]
        push 101ace48h
        add ecx, 42h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edx, dword ptr [esp + 18h]
        lea eax, [ebx + 1]
        xor esi, esi
        push 10h
        mov dword ptr [edx + 64h], eax
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [eax + 68h], 1
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [ecx + 6ch], 3
        mov edx, dword ptr [esp + 1ch]
        mov dword ptr [edx + 70h], 2
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [eax + 74h], esi
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [ecx + 78h], ebx
        ; Exact mapped bytes E8 19 B6 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb6
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        cmp eax, esi
        ; Exact mapped bytes 74 11: je 0x1004119f
        __asm _emit 0x74
        __asm _emit 0x11
        mov dl, byte ptr [esp + 17h]
        mov dword ptr [eax + 4], esi
        mov byte ptr [eax], dl
        mov dword ptr [eax + 8], esi
        mov dword ptr [eax + 0ch], esi
        ; Exact mapped bytes EB 02: jmp 0x100411a1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 18h]
        mov dword ptr [ecx + 88h], eax
        mov edx, dword ptr [esp + 18h]
        mov esi, dword ptr [edx + 88h]
        mov eax, dword ptr [esi + 4]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100411c9
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 0ch]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 18h
        ; Exact mapped bytes 73 60: jae 0x10041229
        __asm _emit 0x73
        __asm _emit 0x60
        push 60h
        ; Exact mapped bytes E8 D0 B5 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xb5
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov edi, eax
        mov eax, dword ptr [esi + 4]
        add esp, 4
        cmp eax, edx
        mov ecx, edi
        ; Exact mapped bytes 74 16: je 0x100411f7
        __asm _emit 0x74
        __asm _emit 0x16
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100411ed
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax]
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [esp + 24h]
        add eax, 4
        add ecx, 4
        cmp eax, edx
        ; Exact mapped bytes 75 EA: jne 0x100411e1
        __asm _emit 0x75
        __asm _emit 0xea
        mov eax, dword ptr [esi + 4]
        push eax
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes E8 80 B5 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xb5
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        add esp, 4
        lea edx, [edi + 60h]
        test ecx, ecx
        mov dword ptr [esi + 0ch], edx
        ; Exact mapped bytes 75 04: jne 0x10041218
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x10041220
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [esi + 8]
        sub eax, ecx
        sar eax, 2
        lea eax, [edi + eax*4]
        mov dword ptr [esi + 4], edi
        mov dword ptr [esi + 8], eax
        mov ecx, dword ptr [esp + 10h]
        lea edx, [esp + 18h]
        push edx
        push 1
        mov ecx, dword ptr [ecx + 88h]
        mov eax, dword ptr [ecx + 8]
        push eax
        ; Exact mapped bytes E8 CD 49 05 00: call 0x10095c10
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x49
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [esp + 20h]
        lea ecx, [esp + 10h]
        push ecx
        push 1
        mov eax, dword ptr [edx + 0e4h]
        lea ecx, [edx + 0dch]
        push eax
        ; Exact mapped bytes E8 B0 49 05 00: call 0x10095c10
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x49
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esp + 28h], 0
        push 1ch
        ; Exact mapped bytes E8 31 B5 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xb5
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        mov ecx, 7
        xor eax, eax
        mov dword ptr [esp + 20h], edi
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 20h]
        add esp, 4
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [ecx + 0ch], 3
        mov edx, dword ptr [esp + 1ch]
        mov dword ptr [edx + 10h], 0ffffh
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [eax + 14h], ebx
        mov eax, dword ptr [esp + 28h]
        cmp eax, ebx
        ; Exact mapped bytes 75 0B: jne 0x100412be
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [ecx + 0ch], 1
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        sub edx, eax
        mov esi, eax
        sar edx, 2
        cmp edx, 1
        ; Exact mapped bytes 0F 83 AC 00 00 00: jae 0x10041380
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 4]
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x100412e7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ; Exact mapped bytes 77 05: ja 0x100412ec
        __asm _emit 0x77
        __asm _emit 0x05
        mov ecx, 1
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x100412f4
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x100412f9
        __asm _emit 0xeb
        __asm _emit 0x05
        sub eax, edx
        sar eax, 2
        add eax, ecx
        test eax, eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 7D 02: jge 0x10041305
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 92 B4 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 4]
        add esp, 4
        mov edi, eax
        push edi
        push esi
        push ecx
        mov ecx, ebp
        ; Exact mapped bytes E8 10 0A 00 00: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esp + 1ch]
        mov ebx, eax
        push edx
        push 1
        push ebx
        mov ecx, ebp
        ; Exact mapped bytes E8 2F 0A 00 00: call 0x10041d60
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add ebx, 4
        push ebx
        push eax
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 EF 09 00 00: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 4]
        push ecx
        push edx
        mov ecx, ebp
        ; Exact mapped bytes E8 80 D8 05 00: call 0x1009ebd0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 4]
        push eax
        ; Exact mapped bytes E8 2B B4 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 30h]
        add esp, 4
        lea edx, [edi + ecx*4]
        mov ecx, ebp
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes E8 A3 09 00 00: call 0x10041d10
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 24h]
        lea eax, [edi + eax*4 + 4]
        mov dword ptr [ebp + 8], eax
        mov dword ptr [ebp + 4], edi
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x10041410
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        sub ecx, esi
        sar ecx, 2
        cmp ecx, 1
        ; Exact mapped bytes 73 42: jae 0x100413ce
        __asm _emit 0x73
        __asm _emit 0x42
        lea ecx, [esi + 4]
        push ecx
        push eax
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 97 09 00 00: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        lea edx, [esp + 1ch]
        mov ecx, eax
        push edx
        sub ecx, esi
        mov edx, 1
        sar ecx, 2
        sub edx, ecx
        mov ecx, ebp
        push edx
        push eax
        ; Exact mapped bytes E8 A8 09 00 00: call 0x10041d60
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp esi, eax
        ; Exact mapped bytes 74 4D: je 0x1004140c
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [esi], ecx
        add esi, 4
        cmp esi, eax
        ; Exact mapped bytes 75 F3: jne 0x100413bf
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes EB 3E: jmp 0x1004140c
        __asm _emit 0xeb
        __asm _emit 0x3e
        lea ecx, [eax - 4]
        push eax
        push eax
        mov dword ptr [esp + 34h], ecx
        push ecx
        mov ecx, ebp
        ; Exact mapped bytes E8 51 09 00 00: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        lea eax, [ecx - 4]
        cmp esi, eax
        ; Exact mapped bytes 74 0F: je 0x100413f8
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [eax - 4]
        sub eax, 4
        sub ecx, 4
        cmp eax, esi
        mov dword ptr [ecx], edx
        ; Exact mapped bytes 75 F1: jne 0x100413e9
        __asm _emit 0x75
        __asm _emit 0xf1
        lea eax, [esi + 4]
        cmp esi, eax
        ; Exact mapped bytes 74 0D: je 0x1004140c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [esi], ecx
        add esi, 4
        cmp esi, eax
        ; Exact mapped bytes 75 F3: jne 0x100413ff
        __asm _emit 0x75
        __asm _emit 0xf3
        add dword ptr [ebp + 8], 4
        mov eax, dword ptr [esp + 28h]
        mov ecx, dword ptr [esp + 38ch]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 28h], eax
        ; Exact mapped bytes 0F 8C 40 FE FF FF: jl 0x10041268
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebx + 1]
        mov ebx, eax
        cmp ebx, ecx
        mov dword ptr [esp + 24h], ebx
        ; Exact mapped bytes 0F 8C 88 FB FF FF: jl 0x10040fc1
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x88
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 20h]
        ; Exact mapped bytes EB 02: jmp 0x10041441
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, ebx
        mov ecx, dword ptr [esp + 374h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 370h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
