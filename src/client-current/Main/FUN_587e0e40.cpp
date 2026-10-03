// Complete Ghidra body ranges for the selected function.
// 10 discontiguous segments; total 8252 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E0E40 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_587e0e40_segment_00() {
    __asm {
        push -1
        push 589824d0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 18h
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 2ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov ecx, dword ptr [esi + 0a8h]
        ; Exact mapped bytes E8 1C C1 F8 FF: call 0x5876cf90
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [esi + 0a4h], eax
        movzx eax, word ptr [esi + 60h]
        xor ebx, ebx
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 85 15 0F 00 00: jne 0x587e1d9e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebp, [ebx + 1]
        cmp dword ptr [esi + 470h], ebx
        ; Exact mapped bytes 74 58: je 0x587e0eec
        __asm _emit 0x74
        __asm _emit 0x58
        xor edi, edi
        cmp byte ptr [esi + 46ch], bl
        ; Exact mapped bytes 76 35: jbe 0x587e0ed3
        __asm _emit 0x76
        __asm _emit 0x35
        mov edi, edi
        mov eax, dword ptr [esi + 470h]
        cmp dword ptr [eax + edi*4], ebx
        lea eax, [eax + edi*4]
        ; Exact mapped bytes 74 18: je 0x587e0ec6
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [eax]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x587e0ebd
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx]
        push ebp
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 470h]
        mov dword ptr [ecx + edi*4], ebx
        movzx edx, byte ptr [esi + 46ch]
        add edi, ebp
        cmp edi, edx
        ; Exact mapped bytes 7C CD: jl 0x587e0ea0
        __asm _emit 0x7c
        __asm _emit 0xcd
        mov eax, dword ptr [esi + 470h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0F: je 0x587e0eec
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 5F BD 19 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xbd
        __asm _emit 0x19
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E0EE3 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_587e0e40_segment_01() {
    __asm {
        add esp, 4
        mov dword ptr [esi + 470h], ebx
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E0EEC .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_587e0e40_segment_02() {
    __asm {
        cmp dword ptr [esi + 474h], ebx
        ; Exact mapped bytes 74 58: je 0x587e0f4c
        __asm _emit 0x74
        __asm _emit 0x58
        xor edi, edi
        cmp byte ptr [esi + 46dh], bl
        ; Exact mapped bytes 76 35: jbe 0x587e0f33
        __asm _emit 0x76
        __asm _emit 0x35
        mov edi, edi
        mov eax, dword ptr [esi + 474h]
        cmp dword ptr [eax + edi*4], ebx
        lea eax, [eax + edi*4]
        ; Exact mapped bytes 74 18: je 0x587e0f26
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [eax]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x587e0f1d
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx]
        push ebp
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 474h]
        mov dword ptr [ecx + edi*4], ebx
        movzx edx, byte ptr [esi + 46dh]
        add edi, ebp
        cmp edi, edx
        ; Exact mapped bytes 7C CD: jl 0x587e0f00
        __asm _emit 0x7c
        __asm _emit 0xcd
        mov eax, dword ptr [esi + 474h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0F: je 0x587e0f4c
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 FF BC 19 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xbc
        __asm _emit 0x19
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E0F43 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_587e0e40_segment_03() {
    __asm {
        add esp, 4
        mov dword ptr [esi + 474h], ebx
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E0F4C .. +0x1A71 bytes.
extern "C" __declspec(naked) void FUN_587e0e40_segment_04() {
    __asm {
        push 84h
        ; Exact mapped bytes E8 F8 BC 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xbc
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 34h], ebx
        cmp eax, ebx
        ; Exact mapped bytes 74 3F: je 0x587e0fa4
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [esi + 0a4h]
        cmp dword ptr [ecx + 164h], ebp
        ; Exact mapped bytes 7E 1E: jle 0x587e0f91
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 14: je 0x587e0f91
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ecx + 4]
        push 40h
        push ebx
        push ebx
        push ecx
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 01 D9 F8 FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd9
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 15: jmp 0x587e0fa6
        __asm _emit 0xeb
        __asm _emit 0x15
        push 40h
        push ebx
        push ebx
        xor ecx, ecx
        push ecx
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 EE D8 F8 FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd8
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e0fa6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or edi, 0ffffffffh
        push 84h
        mov dword ptr [esp + 38h], edi
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes E8 91 BC 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xbc
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 34h], ebp
        cmp eax, ebx
        ; Exact mapped bytes 74 32: je 0x587e0ffe
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [esi + 0a4h]
        cmp dword ptr [ecx + 164h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x587e0fe8
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 04: je 0x587e0fe8
        __asm _emit 0x74
        __asm _emit 0x04
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x587e0fea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 108h
        push ebx
        push ebx
        push ecx
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 94 D8 F8 FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xd8
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e1000
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 84h
        mov dword ptr [esp + 38h], edi
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E8 3A BC 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xbc
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov ebx, 2
        mov dword ptr [esp + 34h], ebx
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x587e105a
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [esi + 0a4h]
        cmp dword ptr [ecx + 164h], ebp
        ; Exact mapped bytes 7E 0F: jle 0x587e1045
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x587e1045
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes EB 02: jmp 0x587e1047
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        push 0
        push 0
        push ecx
        push esi
        push 0ch
        mov ecx, eax
        ; Exact mapped bytes E8 38 D8 F8 FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xd8
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e105c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, 0fff0h
        mov dword ptr [esi + 348h], eax
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 84h
        mov dword ptr [esp + 38h], edi
        ; Exact mapped bytes E8 D5 BB 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xbb
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 34h], 3
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x587e10be
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [esi + 0a4h]
        cmp dword ptr [ecx + 164h], 0
        ; Exact mapped bytes 7E 0E: jle 0x587e10a9
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x587e10a9
        __asm _emit 0x74
        __asm _emit 0x04
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x587e10ab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 54h
        push 0
        push 0
        push ecx
        push esi
        push 0ch
        mov ecx, eax
        ; Exact mapped bytes E8 D4 D7 F8 FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd7
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e10c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 34ch], eax
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov edi, dword ptr [esi + 45ch]
        mov ebp, dword ptr [esi + 34ch]
        push edi
        mov ecx, ebp
        mov dword ptr [esp + 38h], 0ffffffffh
        ; Exact mapped bytes E8 F5 1D 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x1d
        __asm _emit 0x12
        __asm _emit 0x00
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 5D 1E 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x1e
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, dword ptr [esi + 460h]
        mov ebp, dword ptr [esi + 34ch]
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 D9 1D 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x1d
        __asm _emit 0x12
        __asm _emit 0x00
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 41 1E 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x1e
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, dword ptr [esi + 464h]
        mov ebp, dword ptr [esi + 34ch]
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 BD 1D 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x1d
        __asm _emit 0x12
        __asm _emit 0x00
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 25 1E 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x1e
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, dword ptr [esi + 468h]
        mov ebp, dword ptr [esi + 34ch]
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 A1 1D 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x1d
        __asm _emit 0x12
        __asm _emit 0x00
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 09 1E 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x1e
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, 2bh
        cmp dword ptr [eax + 160h], edx
        ; Exact mapped bytes 7E 16: jle 0x587e116f
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x587e116f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0ac0h
        ; Exact mapped bytes EB 02: jmp 0x587e1171
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 45ch]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x587e11a6
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edi
        mov edi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 14: jle 0x587e11c7
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x587e11c7
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 190h]
        sub eax, -80h
        ; Exact mapped bytes EB 02: jmp 0x587e11c9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 460h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x587e11fe
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edi
        mov edi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x587e121d
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 08: je 0x587e121d
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 190h]
        ; Exact mapped bytes EB 02: jmp 0x587e121f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 464h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x587e1254
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edi
        mov edi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 2ch
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 16: jle 0x587e127c
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x587e127c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x587e127e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 468h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x587e12b3
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebp, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 13h
        ; Exact mapped bytes 7E 14: jle 0x587e12d5
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x587e12d5
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 4ch]
        ; Exact mapped bytes EB 02: jmp 0x587e12d7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 5c4h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x587e130c
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebp, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0ch
        ; Exact mapped bytes 7E 14: jle 0x587e132e
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x587e132e
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 30h]
        ; Exact mapped bytes EB 02: jmp 0x587e1330
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 5c8h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x587e1365
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebp, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 115h
        ; Exact mapped bytes 7E 17: jle 0x587e138d
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x587e138d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 454h]
        ; Exact mapped bytes EB 02: jmp 0x587e138f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 5cch]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x587e13c4
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebp, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], edx
        ; Exact mapped bytes 7E 16: jle 0x587e13e7
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x587e13e7
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0ac0h
        ; Exact mapped bytes EB 02: jmp 0x587e13e9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 588h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x587e141e
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
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 14: jle 0x587e143f
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x587e143f
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 190h]
        sub eax, -80h
        ; Exact mapped bytes EB 02: jmp 0x587e1441
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 58ch]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x587e1476
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
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x587e1495
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 08: je 0x587e1495
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 190h]
        ; Exact mapped bytes EB 02: jmp 0x587e1497
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 590h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x587e14cc
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
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 16: jle 0x587e14ef
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x587e14ef
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x587e14f1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 594h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x587e1526
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
        mov ecx, dword ptr [esi + 588h]
        push 1fbh
        push 23bh
        ; Exact mapped bytes E8 55 1D 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x1d
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 58ch]
        push 194h
        push 27dh
        ; Exact mapped bytes E8 40 1D 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x1d
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 590h]
        push 20ch
        push 13fh
        ; Exact mapped bytes E8 2B 1D 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x1d
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 588h]
        push 0
        ; Exact mapped bytes E8 AE 17 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x17
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 58ch]
        push 0
        ; Exact mapped bytes E8 A1 17 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x17
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 590h]
        push 0
        ; Exact mapped bytes E8 94 17 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x17
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 1
        ; Exact mapped bytes 7E 14: jle 0x587e15ae
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x587e15ae
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 190h]
        add eax, 40h
        ; Exact mapped bytes EB 02: jmp 0x587e15b0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 590h]
        push 7
        push eax
        ; Exact mapped bytes E8 62 C7 F7 FF: call 0x5875dd20
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc7
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 3
        ; Exact mapped bytes 7E 16: jle 0x587e15e2
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x587e15e2
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x587e15e4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 58ch]
        push 7
        push eax
        ; Exact mapped bytes E8 2E C7 F7 FF: call 0x5875dd20
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xc7
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edi, dword ptr [esi + 588h]
        mov ecx, 121h
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e160e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 42 19 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x19
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e161b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C5 18 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x18
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, dword ptr [esi + 58ch]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 121h
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e1637
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 19 19 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x19
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e1644
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9C 18 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x18
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, dword ptr [esi + 590h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 121h
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e1660
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F0 18 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x18
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587e166d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 73 18 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x18
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 598h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 CB B5 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb5
        __asm _emit 0x19
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        mov dword ptr [esp + 34h], 4
        test edi, edi
        ; Exact mapped bytes 74 68: je 0x587e1700
        __asm _emit 0x74
        __asm _emit 0x68
        mov eax, dword ptr [esi + 0a4h]
        cmp dword ptr [eax + 164h], 0ah
        ; Exact mapped bytes 7E 0F: jle 0x587e16b6
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x587e16b6
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 28h]
        ; Exact mapped bytes EB 02: jmp 0x587e16b8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 42h
        push 0
        push 0
        push 54h
        push 70h
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D6 1A 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x1a
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x587e1702
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp + 14h]
        add ebp, 18h
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebp]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], ecx
        ; Exact mapped bytes EB 02: jmp 0x587e1702
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov dword ptr [esp + 38h], 0ffffffffh
        mov dword ptr [esi + 47ch], edi
        ; Exact mapped bytes E8 04 16 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x16
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 47ch]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 47ch]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 0D B5 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb5
        __asm _emit 0x19
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        mov dword ptr [esp + 34h], 5
        test edi, edi
        ; Exact mapped bytes 74 68: je 0x587e17be
        __asm _emit 0x74
        __asm _emit 0x68
        mov eax, dword ptr [esi + 0a4h]
        cmp dword ptr [eax + 164h], 0bh
        ; Exact mapped bytes 7E 0F: jle 0x587e1774
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x587e1774
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x587e1776
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 41h
        push 0
        push 0
        push 54h
        push 70h
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 18 1A 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x1a
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x587e17c0
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp + 14h]
        add ebp, 18h
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebp]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], ecx
        ; Exact mapped bytes EB 02: jmp 0x587e17c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov edx, 0fffeh
        or ebp, 0ffffffffh
        mov dword ptr [esi + 480h], edi
        ; Exact mapped bytes 66 21 57 24: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        push 0cch
        mov dword ptr [esp + 38h], ebp
        ; Exact mapped bytes E8 6E B4 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb4
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov ebx, 6
        mov dword ptr [esp + 34h], ebx
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x587e1808
        __asm _emit 0x74
        __asm _emit 0x14
        push 40h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 DA B9 F8 FF: call 0x5876d1e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xb9
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e180a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esi + 0d84h], eax
        ; Exact mapped bytes E8 33 B4 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xb4
        __asm _emit 0x19
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        mov dword ptr [esp + 34h], 7
        test edi, edi
        ; Exact mapped bytes 0F 84 7D 00 00 00: je 0x587e18b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        mov ecx, dword ptr [esi + 0a4h]
        add eax, 26h
        cmp dword ptr [ecx + 164h], 5
        ; Exact mapped bytes 7E 0F: jle 0x587e185b
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x587e185b
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [ecx + 14h]
        ; Exact mapped bytes EB 02: jmp 0x587e185d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C0 1E: add ax, 0x1e
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x1e
        movzx eax, ax
        push eax
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 28 19 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x19
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 27: je 0x587e18ac
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        add ebp, 18h
        mov dword ptr [edi + 10h], edx
        mov eax, dword ptr [ebp]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], eax
        or ebp, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x587e18b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esi + 0d88h], edi
        ; Exact mapped bytes E8 57 14 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x14
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d88h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 6F B3 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xb3
        __asm _emit 0x19
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        mov dword ptr [esp + 34h], 8
        test edi, edi
        ; Exact mapped bytes 0F 84 7D 00 00 00: je 0x587e1975
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b4h]
        mov ecx, dword ptr [esi + 0a4h]
        add eax, 26h
        cmp dword ptr [ecx + 164h], 2
        ; Exact mapped bytes 7E 0F: jle 0x587e191f
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x587e191f
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [ecx + 8]
        ; Exact mapped bytes EB 02: jmp 0x587e1921
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 83 EA 05: sub dx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x05
        movzx eax, dx
        push eax
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 64 18 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x18
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 27: je 0x587e1970
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        add ebp, 18h
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [ebp]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], edx
        or ebp, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x587e1977
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esi + 0d8ch], edi
        ; Exact mapped bytes E8 C6 B2 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xb2
        __asm _emit 0x19
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        mov dword ptr [esp + 34h], 9
        test edi, edi
        ; Exact mapped bytes 0F 84 7D 00 00 00: je 0x587e1a1e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        mov ecx, dword ptr [esi + 0a4h]
        add eax, 26h
        cmp dword ptr [ecx + 164h], 3
        ; Exact mapped bytes 7E 0F: jle 0x587e19c8
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x587e19c8
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [ecx + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x587e19ca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C0 0F: add ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x0f
        movzx eax, ax
        push eax
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 BB 17 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x17
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 27: je 0x587e1a19
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        add ebp, 18h
        mov dword ptr [edi + 10h], edx
        mov eax, dword ptr [ebp]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], eax
        or ebp, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x587e1a20
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esi + 0d90h], edi
        ; Exact mapped bytes E8 1D B2 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb2
        __asm _emit 0x19
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        mov dword ptr [esp + 34h], 0ah
        test edi, edi
        ; Exact mapped bytes 0F 84 7D 00 00 00: je 0x587e1ac7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        mov ecx, dword ptr [esi + 0a4h]
        add eax, 26h
        cmp dword ptr [ecx + 164h], 4
        ; Exact mapped bytes 7E 0F: jle 0x587e1a71
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x587e1a71
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [ecx + 10h]
        ; Exact mapped bytes EB 02: jmp 0x587e1a73
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 C1 14: add cx, 0x14
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        movzx eax, cx
        push eax
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 12 17 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x17
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 27: je 0x587e1ac2
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp + 14h]
        add ebp, 18h
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebp]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], ecx
        or ebp, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x587e1ac9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esi + 0d94h], edi
        ; Exact mapped bytes E8 74 B1 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xb1
        __asm _emit 0x19
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        mov dword ptr [esp + 34h], 0bh
        test edi, edi
        ; Exact mapped bytes 74 77: je 0x587e1b66
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [esi + 0d90h]
        mov ecx, dword ptr [esi + 0a4h]
        add eax, 26h
        cmp dword ptr [ecx + 164h], ebx
        ; Exact mapped bytes 7E 0F: jle 0x587e1b15
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x587e1b15
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [ecx + 18h]
        ; Exact mapped bytes EB 02: jmp 0x587e1b17
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 83 C2 0F: add dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x0f
        movzx eax, dx
        push eax
        xor ebx, ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 70 16 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x16
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2D: je 0x587e1b6a
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        add ebp, 18h
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [ebp]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 04: jmp 0x587e1b6a
        __asm _emit 0xeb
        __asm _emit 0x04
        xor edi, edi
        xor ebx, ebx
        or ebp, 0ffffffffh
        push 54h
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esi + 0d98h], edi
        ; Exact mapped bytes E8 D0 B0 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xb0
        __asm _emit 0x19
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        mov dword ptr [esp + 34h], 0ch
        cmp edi, ebx
        ; Exact mapped bytes 74 79: je 0x587e1c0c
        __asm _emit 0x74
        __asm _emit 0x79
        mov eax, dword ptr [esi + 0d90h]
        mov ecx, dword ptr [esi + 0a4h]
        add eax, 26h
        cmp dword ptr [ecx + 164h], 7
        ; Exact mapped bytes 7E 0F: jle 0x587e1bba
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x587e1bba
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [ecx + 1ch]
        ; Exact mapped bytes EB 02: jmp 0x587e1bbc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E8 05: sub ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x05
        movzx eax, ax
        push eax
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 CD 15 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x15
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 27: je 0x587e1c07
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        add ebp, 18h
        mov dword ptr [edi + 10h], edx
        mov eax, dword ptr [ebp]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], eax
        or ebp, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x587e1c0e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esi + 0d9ch], edi
        ; Exact mapped bytes E8 2F B0 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xb0
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 34h], 0dh
        cmp eax, ebx
        ; Exact mapped bytes 74 41: je 0x587e1c73
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [esi + 0d90h]
        mov ecx, dword ptr [esi + 0a4h]
        add edx, 26h
        cmp dword ptr [ecx + 164h], 8
        ; Exact mapped bytes 7E 0F: jle 0x587e1c59
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x587e1c59
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 20h]
        ; Exact mapped bytes EB 02: jmp 0x587e1c5b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 12: mov dx, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 C2 0D: add dx, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x0d
        movzx edx, dx
        push edx
        push ebx
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2F CE F9 FF: call 0x5877eaa0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xce
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e1c75
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esi + 0da4h], eax
        ; Exact mapped bytes E8 C8 AF 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xaf
        __asm _emit 0x19
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        mov dword ptr [esp + 34h], 0eh
        cmp edi, ebx
        ; Exact mapped bytes 74 2C: je 0x587e1cc7
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [esi + 0d9ch]
        add eax, 26h
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 48: dec ax
        __asm _emit 0x66
        __asm _emit 0x48
        movzx eax, ax
        push eax
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E7 14 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x14
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x587e1cc9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 0da4h]
        mov edx, dword ptr [esi + 0d9ch]
        mov eax, dword ptr [esi + 0d98h]
        push edi
        push ecx
        mov ecx, dword ptr [esi + 0d94h]
        push edx
        mov edx, dword ptr [esi + 0d90h]
        push eax
        mov eax, dword ptr [esi + 0d8ch]
        push ecx
        mov ecx, dword ptr [esi + 0d88h]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0d84h]
        mov dword ptr [esp + 54h], ebp
        mov dword ptr [esi + 0da0h], edi
        ; Exact mapped bytes E8 30 B3 F8 FF: call 0x5876d040
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0d84h]
        ; Exact mapped bytes E8 E5 BA F8 FF: call 0x5876d800
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xba
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0d84h]
        push 0a0h
        push 52h
        push 13h
        push 71h
        push 7fh
        push ebp
        ; Exact mapped bytes E8 0C E1 18 00: call 0x5896fe40
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xe1
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [esi + 47ch]
        mov dword ptr [esi + 484h], ebx
        mov dword ptr [esi + 488h], ebx
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x587e1d53
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 480h]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x587e1d66
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        cmp dword ptr [esi + 0d78h], ebx
        ; Exact mapped bytes 75 1B: jne 0x587e1d89
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 0ch], ebx
        ; Exact mapped bytes 74 10: je 0x587e1d89
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 30h]
        cmp eax, ebx
        ; Exact mapped bytes 75 03: jne 0x587e1d83
        __asm _emit 0x75
        __asm _emit 0x03
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [esi + 0d78h], eax
        mov edx, dword ptr [esi + 0d78h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 D9 72 FF FF: call 0x587d9070
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, ebx
        ; Exact mapped bytes E9 A2 10 00 00: jmp 0x587e2e40
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push 84h
        ; Exact mapped bytes E8 A6 AE 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xae
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 34h], 0fh
        mov edi, 1
        cmp eax, ebx
        ; Exact mapped bytes 74 3F: je 0x587e1dff
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [esi + 0a4h]
        cmp dword ptr [ecx + 164h], edi
        ; Exact mapped bytes 7E 1E: jle 0x587e1dec
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 14: je 0x587e1dec
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ecx + 4]
        push 40h
        push ebx
        push ebx
        push ecx
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 A6 CA F8 FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xca
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 15: jmp 0x587e1e01
        __asm _emit 0xeb
        __asm _emit 0x15
        push 40h
        push ebx
        push ebx
        xor ecx, ecx
        push ecx
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 93 CA F8 FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xca
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e1e01
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or ebp, 0ffffffffh
        push 84h
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes E8 36 AE 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xae
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 34h], 10h
        cmp eax, ebx
        ; Exact mapped bytes 74 32: je 0x587e1e5d
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [esi + 0a4h]
        cmp dword ptr [ecx + 164h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x587e1e47
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 04: je 0x587e1e47
        __asm _emit 0x74
        __asm _emit 0x04
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x587e1e49
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 108h
        push ebx
        push ebx
        push ecx
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 35 CA F8 FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xca
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e1e5f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 84h
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E8 DB AD 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xad
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 34h], 11h
        cmp eax, ebx
        ; Exact mapped bytes 74 3F: je 0x587e1ec5
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [esi + 0a4h]
        cmp dword ptr [ecx + 164h], edi
        ; Exact mapped bytes 7E 1E: jle 0x587e1eb2
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 14: je 0x587e1eb2
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ecx + 4]
        push 40h
        push ebx
        push ebx
        push ecx
        push esi
        push 0ch
        mov ecx, eax
        ; Exact mapped bytes E8 E0 C9 F8 FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xc9
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 15: jmp 0x587e1ec7
        __asm _emit 0xeb
        __asm _emit 0x15
        push 40h
        push ebx
        push ebx
        xor ecx, ecx
        push ecx
        push esi
        push 0ch
        mov ecx, eax
        ; Exact mapped bytes E8 CD C9 F8 FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc9
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e1ec7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, 0fff0h
        mov dword ptr [esi + 348h], eax
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 84h
        mov dword ptr [esp + 38h], ebp
        ; Exact mapped bytes E8 6A AD 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xad
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 34h], 12h
        cmp eax, ebx
        ; Exact mapped bytes 74 3E: je 0x587e1f35
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ecx, dword ptr [esi + 0a4h]
        cmp dword ptr [ecx + 164h], ebx
        ; Exact mapped bytes 7E 1D: jle 0x587e1f22
        __asm _emit 0x7e
        __asm _emit 0x1d
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 13: je 0x587e1f22
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ecx]
        push 54h
        push ebx
        push ebx
        push ecx
        push esi
        push 0ch
        mov ecx, eax
        ; Exact mapped bytes E8 70 C9 F8 FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc9
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 15: jmp 0x587e1f37
        __asm _emit 0xeb
        __asm _emit 0x15
        push 54h
        push ebx
        push ebx
        xor ecx, ecx
        push ecx
        push esi
        push 0ch
        mov ecx, eax
        ; Exact mapped bytes E8 5D C9 F8 FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc9
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e1f37
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 34ch], eax
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 9
        cmp dword ptr [eax + 160h], edi
        mov dword ptr [esp + 34h], ebp
        ; Exact mapped bytes 7E 15: jle 0x587e1f71
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 0D: je 0x587e1f71
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 240h
        ; Exact mapped bytes EB 02: jmp 0x587e1f73
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 45ch]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 28: je 0x587e1fa8
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
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 15: jle 0x587e1fca
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 0D: je 0x587e1fca
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 240h
        ; Exact mapped bytes EB 02: jmp 0x587e1fcc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 460h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 28: je 0x587e2001
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
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 15: jle 0x587e2023
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 0D: je 0x587e2023
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 240h
        ; Exact mapped bytes EB 02: jmp 0x587e2025
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 464h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 28: je 0x587e205a
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
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 15: jle 0x587e207c
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 0D: je 0x587e207c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 240h
        ; Exact mapped bytes EB 02: jmp 0x587e207e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 468h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 28: je 0x587e20b3
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
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, 1eh
        cmp dword ptr [eax + 164h], edx
        ; Exact mapped bytes 7E 13: jle 0x587e20d8
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0B: je 0x587e20d8
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 78h]
        ; Exact mapped bytes EB 02: jmp 0x587e20da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 5c4h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 28: je 0x587e210f
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebp, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], edx
        ; Exact mapped bytes 7E 13: jle 0x587e212f
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0B: je 0x587e212f
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 78h]
        ; Exact mapped bytes EB 02: jmp 0x587e2131
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 5c8h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 28: je 0x587e2166
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebp, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], edx
        ; Exact mapped bytes 7E 13: jle 0x587e2186
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0B: je 0x587e2186
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 78h]
        ; Exact mapped bytes EB 02: jmp 0x587e2188
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 5cch]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 28: je 0x587e21bd
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
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 5
        ; Exact mapped bytes 7E 15: jle 0x587e21e0
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 0D: je 0x587e21e0
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 140h
        ; Exact mapped bytes EB 02: jmp 0x587e21e2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 588h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 28: je 0x587e2217
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
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebp, 3
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 15: jle 0x587e223e
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 0D: je 0x587e223e
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x587e2240
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 58ch]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 28: je 0x587e2275
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
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 15: jle 0x587e2297
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 0D: je 0x587e2297
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x587e2299
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 590h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 28: je 0x587e22ce
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
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 15: jle 0x587e22f0
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 0D: je 0x587e22f0
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 240h
        ; Exact mapped bytes EB 02: jmp 0x587e22f2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 594h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 28: je 0x587e2327
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
        mov ecx, dword ptr [esi + 588h]
        push 101h
        ; Exact mapped bytes E8 E9 09 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 58ch]
        push 101h
        ; Exact mapped bytes E8 D9 09 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x09
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 590h]
        push 101h
        ; Exact mapped bytes E8 C9 09 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 588h]
        push 134h
        push 40h
        ; Exact mapped bytes E8 27 0F 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 58ch]
        push 0e7h
        push 9dh
        ; Exact mapped bytes E8 12 0F 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 590h]
        push 54h
        push 9dh
        ; Exact mapped bytes E8 00 0F 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 15: jle 0x587e23b2
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 0D: je 0x587e23b2
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 240h
        ; Exact mapped bytes EB 02: jmp 0x587e23b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 590h]
        push 1
        push eax
        ; Exact mapped bytes E8 5E B9 F7 FF: call 0x5875dd20
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb9
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 15: jle 0x587e23e4
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 0D: je 0x587e23e4
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 240h
        ; Exact mapped bytes EB 02: jmp 0x587e23e6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 58ch]
        push 1
        push eax
        ; Exact mapped bytes E8 2C B9 F7 FF: call 0x5875dd20
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb9
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edi, dword ptr [esi + 588h]
        mov ecx, 427h
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587e2410
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 40 0B 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x0b
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587e241d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C3 0A 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x0a
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, dword ptr [esi + 58ch]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 427h
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587e2439
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 17 0B 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x0b
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587e2446
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9A 0A 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x0a
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, dword ptr [esi + 590h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 427h
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587e2462
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EE 0A 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x0a
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587e246f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 71 0A 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x0a
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 598h]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        push 54h
        ; Exact mapped bytes E8 CD A7 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xa7
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 34h], 13h
        cmp eax, ebx
        ; Exact mapped bytes 74 40: je 0x587e24d4
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [esi + 0a4h]
        cmp dword ptr [ecx + 164h], 0ah
        ; Exact mapped bytes 7E 1E: jle 0x587e24c1
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 14: je 0x587e24c1
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ecx + 28h]
        push 42h
        push 54h
        push 70h
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A1 F7 F4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf7
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 15: jmp 0x587e24d6
        __asm _emit 0xeb
        __asm _emit 0x15
        push 42h
        push 54h
        xor ecx, ecx
        push 70h
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8E F7 F4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xf7
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e24d6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or edi, 0ffffffffh
        push 101h
        mov ecx, eax
        mov dword ptr [esp + 38h], edi
        mov dword ptr [esi + 47ch], eax
        ; Exact mapped bytes E8 31 08 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x08
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 47ch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 47ch]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 3A A7 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xa7
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 34h], 14h
        cmp eax, ebx
        ; Exact mapped bytes 74 40: je 0x587e2567
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [esi + 0a4h]
        cmp dword ptr [ecx + 164h], 0bh
        ; Exact mapped bytes 7E 1E: jle 0x587e2554
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 14: je 0x587e2554
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ecx + 2ch]
        push 41h
        push 54h
        push 70h
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 0E F7 F4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xf7
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 15: jmp 0x587e2569
        __asm _emit 0xeb
        __asm _emit 0x15
        push 41h
        push 54h
        xor ecx, ecx
        push 70h
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FB F6 F4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf6
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e2569
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, 0fffeh
        mov dword ptr [esi + 480h], eax
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0cch
        mov dword ptr [esp + 38h], edi
        ; Exact mapped bytes E8 C8 A6 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa6
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 34h], 15h
        cmp eax, ebx
        ; Exact mapped bytes 74 10: je 0x587e25a9
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 39 AC F8 FF: call 0x5876d1e0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xac
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e25ab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov dword ptr [esp + 38h], edi
        mov dword ptr [esi + 0d84h], eax
        ; Exact mapped bytes E8 92 A6 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xa6
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 34h], 16h
        cmp eax, ebx
        ; Exact mapped bytes 74 41: je 0x587e2610
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [esi + 0b0h]
        mov ecx, dword ptr [esi + 0a4h]
        add edx, 26h
        cmp dword ptr [ecx + 164h], 5
        ; Exact mapped bytes 7E 0F: jle 0x587e25f6
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x587e25f6
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes EB 02: jmp 0x587e25f8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 12: mov dx, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 C2 1E: add dx, 0x1e
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x1e
        movzx edx, dx
        push edx
        push ebx
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 52 F6 F4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf6
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e2612
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov dword ptr [esp + 38h], edi
        mov dword ptr [esi + 0d88h], eax
        ; Exact mapped bytes E8 F8 06 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x06
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d88h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 10 A6 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xa6
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 34h], 17h
        cmp eax, ebx
        ; Exact mapped bytes 74 41: je 0x587e2692
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [esi + 0b4h]
        mov edx, dword ptr [esi + 0a4h]
        add ecx, 26h
        cmp dword ptr [edx + 164h], 2
        ; Exact mapped bytes 7E 0F: jle 0x587e2678
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edx, dword ptr [edx + 18ch]
        cmp edx, ebx
        ; Exact mapped bytes 74 05: je 0x587e2678
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [edx + 8]
        ; Exact mapped bytes EB 02: jmp 0x587e267a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 66 8B 09: mov cx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x09
        ; Exact mapped bytes 66 83 E9 05: sub cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x05
        movzx ecx, cx
        push ecx
        push ebx
        push ebx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D0 F5 F4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xf5
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e2694
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov dword ptr [esp + 38h], edi
        mov dword ptr [esi + 0d8ch], eax
        ; Exact mapped bytes E8 A9 A5 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xa5
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 34h], 18h
        cmp eax, ebx
        ; Exact mapped bytes 74 40: je 0x587e26f8
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [esi + 0b0h]
        mov edi, dword ptr [esi + 0a4h]
        add edx, 26h
        cmp dword ptr [edi + 164h], ebp
        ; Exact mapped bytes 7E 0F: jle 0x587e26de
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edi, dword ptr [edi + 18ch]
        cmp edi, ebx
        ; Exact mapped bytes 74 05: je 0x587e26de
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [edi + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x587e26e0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 12: mov dx, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 C2 0F: add dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x0f
        movzx edx, dx
        push edx
        push ebx
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 6A F5 F4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf5
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e26fa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or ebp, 0ffffffffh
        push 54h
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esi + 0d90h], eax
        ; Exact mapped bytes E8 40 A5 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xa5
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 34h], 19h
        cmp eax, ebx
        ; Exact mapped bytes 74 41: je 0x587e2762
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [esi + 0b0h]
        mov ecx, dword ptr [esi + 0a4h]
        add edx, 26h
        cmp dword ptr [ecx + 164h], 4
        ; Exact mapped bytes 7E 0F: jle 0x587e2748
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x587e2748
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 10h]
        ; Exact mapped bytes EB 02: jmp 0x587e274a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 12: mov dx, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 C2 14: add dx, 0x14
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x14
        movzx edx, dx
        push edx
        push ebx
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 00 F5 F4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf5
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e2764
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esi + 0d94h], eax
        ; Exact mapped bytes E8 D9 A4 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xa4
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 34h], 1ah
        cmp eax, ebx
        ; Exact mapped bytes 74 41: je 0x587e27c9
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [esi + 0d90h]
        mov ecx, dword ptr [esi + 0a4h]
        add edx, 26h
        cmp dword ptr [ecx + 164h], 6
        ; Exact mapped bytes 7E 0F: jle 0x587e27af
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x587e27af
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 18h]
        ; Exact mapped bytes EB 02: jmp 0x587e27b1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 12: mov dx, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 C2 0F: add dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x0f
        movzx edx, dx
        push edx
        push ebx
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 99 F4 F4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf4
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e27cb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esi + 0d98h], eax
        ; Exact mapped bytes E8 72 A4 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa4
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 34h], 1bh
        cmp eax, ebx
        ; Exact mapped bytes 74 41: je 0x587e2830
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [esi + 0d90h]
        mov ecx, dword ptr [esi + 0a4h]
        add edx, 26h
        cmp dword ptr [ecx + 164h], 7
        ; Exact mapped bytes 7E 0F: jle 0x587e2816
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x587e2816
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes EB 02: jmp 0x587e2818
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 12: mov dx, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 EA 05: sub dx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x05
        movzx edx, dx
        push edx
        push ebx
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 32 F4 F4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf4
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e2832
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esi + 0d9ch], eax
        ; Exact mapped bytes E8 0B A4 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa4
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 34h], 1ch
        cmp eax, ebx
        ; Exact mapped bytes 74 41: je 0x587e2897
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [esi + 0d90h]
        mov ecx, dword ptr [esi + 0a4h]
        add edx, 26h
        cmp dword ptr [ecx + 164h], 8
        ; Exact mapped bytes 7E 0F: jle 0x587e287d
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x587e287d
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 20h]
        ; Exact mapped bytes EB 02: jmp 0x587e287f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 12: mov dx, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 C2 0D: add dx, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x0d
        movzx edx, dx
        push edx
        push ebx
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 0B C2 F9 FF: call 0x5877eaa0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc2
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587e2899
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esi + 0da4h], eax
        ; Exact mapped bytes E8 A4 A3 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xa3
        __asm _emit 0x19
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        mov dword ptr [esp + 34h], 1dh
        cmp edi, ebx
        ; Exact mapped bytes 74 2C: je 0x587e28eb
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [esi + 0d9ch]
        add eax, 26h
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 48: dec ax
        __asm _emit 0x66
        __asm _emit 0x48
        movzx eax, ax
        push eax
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C3 08 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x08
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x587e28ed
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 0da4h]
        mov edx, dword ptr [esi + 0d9ch]
        mov eax, dword ptr [esi + 0d98h]
        push edi
        push ecx
        mov ecx, dword ptr [esi + 0d94h]
        push edx
        mov edx, dword ptr [esi + 0d90h]
        push eax
        mov eax, dword ptr [esi + 0d8ch]
        push ecx
        mov ecx, dword ptr [esi + 0d88h]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0d84h]
        mov dword ptr [esp + 54h], ebp
        mov dword ptr [esi + 0da0h], edi
        ; Exact mapped bytes E8 0C A7 F8 FF: call 0x5876d040
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xa7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0d84h]
        ; Exact mapped bytes E8 C1 AE F8 FF: call 0x5876d800
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xae
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0d84h]
        push 0a0h
        push 52h
        push 13h
        push 71h
        push 7fh
        push ebp
        ; Exact mapped bytes E8 E8 D4 18 00: call 0x5896fe40
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x18
        __asm _emit 0x00
        movzx eax, word ptr [esi + 60h]
        movzx ecx, ax
        shr ecx, 8
        movzx edx, ax
        xor edi, edi
        mov eax, 589baab2h
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        cmp dword ptr [eax - 1eh], ebx
        ; Exact mapped bytes 74 09: je 0x587e297e
        __asm _emit 0x74
        __asm _emit 0x09
        cmp byte ptr [eax], cl
        ; Exact mapped bytes 75 05: jne 0x587e297e
        __asm _emit 0x75
        __asm _emit 0x05
        cmp byte ptr [eax + 1], dl
        ; Exact mapped bytes 74 0D: je 0x587e298b
        __asm _emit 0x74
        __asm _emit 0x0d
        add eax, 0e84h
        inc edi
        cmp eax, 589c2d56h
        ; Exact mapped bytes 7C E5: jl 0x587e2970
        __asm _emit 0x7c
        __asm _emit 0xe5
        mov dword ptr [esp + 18h], edi
        cmp edi, 9
        ; Exact mapped bytes 0F 84 41 04 00 00: je 0x587e2dd9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 48 A2 58: mov edx, dword ptr [0x58a248c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, edi
        mov ecx, dword ptr [edx + eax*4]
        xor ebp, ebp
        mov dword ptr [esp + 20h], ecx
        cmp dword ptr [esi + 470h], ebp
        ; Exact mapped bytes 74 60: je 0x587e2a11
        __asm _emit 0x74
        __asm _emit 0x60
        xor bl, bl
        cmp byte ptr [esi + 46ch], bl
        ; Exact mapped bytes 76 3D: jbe 0x587e29f8
        __asm _emit 0x76
        __asm _emit 0x3d
        ; Exact mapped bytes EB 03: jmp 0x587e29c0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E29C0 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_587e0e40_segment_05() {
    __asm {
        mov edx, dword ptr [esi + 470h]
        movzx edi, bl
        add edi, edi
        add edi, edi
        cmp dword ptr [edi + edx], ebp
        lea eax, [edi + edx]
        ; Exact mapped bytes 74 19: je 0x587e29ee
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [eax]
        cmp eax, ebp
        ; Exact mapped bytes 74 0A: je 0x587e29e5
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 470h]
        mov dword ptr [edi + ecx], ebp
        inc bl
        cmp bl, byte ptr [esi + 46ch]
        ; Exact mapped bytes 72 C8: jb 0x587e29c0
        __asm _emit 0x72
        __asm _emit 0xc8
        mov eax, dword ptr [esi + 470h]
        cmp eax, ebp
        ; Exact mapped bytes 74 0F: je 0x587e2a11
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 3A A2 19 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xa2
        __asm _emit 0x19
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E2A08 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_587e0e40_segment_06() {
    __asm {
        add esp, 4
        mov dword ptr [esi + 470h], ebp
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E2A11 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_587e0e40_segment_07() {
    __asm {
        cmp dword ptr [esi + 474h], ebp
        ; Exact mapped bytes 74 5B: je 0x587e2a74
        __asm _emit 0x74
        __asm _emit 0x5b
        xor bl, bl
        cmp byte ptr [esi + 46dh], bl
        ; Exact mapped bytes 76 38: jbe 0x587e2a5b
        __asm _emit 0x76
        __asm _emit 0x38
        mov edx, dword ptr [esi + 474h]
        movzx edi, bl
        add edi, edi
        add edi, edi
        cmp dword ptr [edx + edi], ebp
        lea eax, [edx + edi]
        ; Exact mapped bytes 74 19: je 0x587e2a51
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [eax]
        cmp eax, ebp
        ; Exact mapped bytes 74 0A: je 0x587e2a48
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 474h]
        mov dword ptr [edi + ecx], ebp
        inc bl
        cmp bl, byte ptr [esi + 46dh]
        ; Exact mapped bytes 72 C8: jb 0x587e2a23
        __asm _emit 0x72
        __asm _emit 0xc8
        mov eax, dword ptr [esi + 474h]
        cmp eax, ebp
        ; Exact mapped bytes 74 0F: je 0x587e2a74
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 D7 A1 19 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa1
        __asm _emit 0x19
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E2A6B .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_587e0e40_segment_08() {
    __asm {
        add esp, 4
        mov dword ptr [esi + 474h], ebp
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E2A74 .. +0x40B bytes.
extern "C" __declspec(naked) void FUN_587e0e40_segment_09() {
    __asm {
        mov edi, dword ptr [esp + 18h]
        mov eax, edi
        imul eax, eax, 0e84h
        mov dl, byte ptr [eax + 589bad44h]
        mov dword ptr [esp + 24h], eax
        mov byte ptr [esi + 46ch], dl
        mov al, byte ptr [eax + 589bb248h]
        mov byte ptr [esi + 46dh], al
        movzx eax, dl
        xor ecx, ecx
        mov edx, 4
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 79 EA 18 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xea
        __asm _emit 0x18
        __asm _emit 0x00
        xor bl, bl
        add esp, 4
        mov dword ptr [esi + 470h], eax
        mov byte ptr [esp + 17h], bl
        cmp byte ptr [esi + 46ch], bl
        ; Exact mapped bytes 0F 86 6E 01 00 00: jbe 0x587e2c3e
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edi, edi, 3a1h
        mov dword ptr [esp + 1ch], edi
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 67 A1 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa1
        __asm _emit 0x19
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        mov dword ptr [esp + 34h], 1eh
        test edi, edi
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x587e2ba5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 20h]
        imul eax, eax, 742h
        movzx ecx, bl
        add eax, ecx
        movzx ebp, word ptr [eax + eax + 589bad46h]
        add eax, eax
        cmp dword ptr [edx + 160h], ebp
        ; Exact mapped bytes 7E 15: jle 0x587e2b3a
        __asm _emit 0x7e
        __asm _emit 0x15
        test ebp, ebp
        ; Exact mapped bytes 7C 11: jl 0x587e2b3a
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x587e2b3a
        __asm _emit 0x74
        __asm _emit 0x07
        shl ebp, 6
        add ebp, edx
        ; Exact mapped bytes EB 02: jmp 0x587e2b3c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        movzx eax, word ptr [eax + 589bafc8h]
        mov ebx, dword ptr [esp + 24h]
        mov edx, dword ptr [ebx + ecx*8 + 589badcch]
        mov ecx, dword ptr [ebx + ecx*8 + 589badc8h]
        push eax
        push 0
        push 0
        push edx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 3C 06 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 27: je 0x587e2b9f
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        add ebp, 20h
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [ebp]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], edx
        mov bl, byte ptr [esp + 17h]
        ; Exact mapped bytes EB 02: jmp 0x587e2ba7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 470h]
        mov ecx, dword ptr [esp + 1ch]
        movzx ebp, bl
        mov dword ptr [eax + ebp*4], edi
        lea edi, [ecx + ebp]
        add edi, edi
        add edi, edi
        cmp dword ptr [edi + 589bb048h], 0fffffe0ch
        mov dword ptr [esp + 34h], 0ffffffffh
        ; Exact mapped bytes 74 27: je 0x587e2bf9
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [esi + 470h]
        mov eax, dword ptr [edx + ebp*4]
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [edi + 589bb048h]
        mov eax, dword ptr [esi + 470h]
        mov ecx, dword ptr [eax + ebp*4]
        push edx
        ; Exact mapped bytes E8 E7 00 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x12
        __asm _emit 0x00
        cmp dword ptr [edi + 589bb148h], 0fffffe0ch
        ; Exact mapped bytes 74 27: je 0x587e2c2c
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [esi + 470h]
        mov eax, dword ptr [ecx + ebp*4]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [edi + 589bb148h]
        mov ecx, dword ptr [esi + 470h]
        mov ecx, dword ptr [ecx + ebp*4]
        push eax
        ; Exact mapped bytes E8 F4 00 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x12
        __asm _emit 0x00
        inc bl
        mov byte ptr [esp + 17h], bl
        cmp bl, byte ptr [esi + 46ch]
        ; Exact mapped bytes 0F 82 A2 FE FF FF: jb 0x587e2ae0
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [esi + 46dh]
        xor ecx, ecx
        mov edx, 4
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 D3 E8 18 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x00
        xor bl, bl
        add esp, 4
        mov dword ptr [esi + 474h], eax
        mov byte ptr [esp + 17h], bl
        cmp byte ptr [esi + 46dh], bl
        ; Exact mapped bytes 0F 86 63 01 00 00: jbe 0x587e2dd9
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        imul eax, eax, 3a1h
        mov dword ptr [esp + 1ch], eax
        push 54h
        ; Exact mapped bytes E8 C3 9F 19 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x9f
        __asm _emit 0x19
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        mov dword ptr [esp + 34h], 1fh
        test edi, edi
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x587e2d40
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        imul eax, eax, 742h
        movzx ecx, bl
        mov ebx, dword ptr [esp + 20h]
        add eax, ecx
        movzx edx, word ptr [eax + eax + 589bb24ah]
        add eax, eax
        cmp dword ptr [ebx + 164h], edx
        ; Exact mapped bytes 7E 13: jle 0x587e2cdc
        __asm _emit 0x7e
        __asm _emit 0x13
        test edx, edx
        ; Exact mapped bytes 7C 0F: jl 0x587e2cdc
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ebx, dword ptr [ebx + 18ch]
        test ebx, ebx
        ; Exact mapped bytes 74 05: je 0x587e2cdc
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [ebx + edx*4]
        ; Exact mapped bytes EB 02: jmp 0x587e2cde
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        movzx eax, word ptr [eax + 589bb4cch]
        mov ebx, dword ptr [esp + 24h]
        mov edx, dword ptr [ebx + ecx*8 + 589bb2d0h]
        mov ecx, dword ptr [ebx + ecx*8 + 589bb2cch]
        push eax
        push 0
        push 0
        push edx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 9A 04 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 27: je 0x587e2d3a
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        add ebp, 18h
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [ebp]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], edx
        mov bl, byte ptr [esp + 17h]
        ; Exact mapped bytes EB 02: jmp 0x587e2d42
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 474h]
        mov ecx, dword ptr [esp + 1ch]
        movzx ebp, bl
        mov dword ptr [eax + ebp*4], edi
        lea edi, [ecx + ebp]
        add edi, edi
        add edi, edi
        cmp dword ptr [edi + 589bb54ch], 0fffffe0ch
        mov dword ptr [esp + 34h], 0ffffffffh
        ; Exact mapped bytes 74 27: je 0x587e2d94
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [esi + 470h]
        mov eax, dword ptr [edx + ebp*4]
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [edi + 589bb54ch]
        mov eax, dword ptr [esi + 474h]
        mov ecx, dword ptr [eax + ebp*4]
        push edx
        ; Exact mapped bytes E8 4C FF 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0x11
        __asm _emit 0x00
        cmp dword ptr [edi + 589bb64ch], 0fffffe0ch
        ; Exact mapped bytes 74 27: je 0x587e2dc7
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [esi + 474h]
        mov eax, dword ptr [ecx + ebp*4]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [edi + 589bb64ch]
        mov ecx, dword ptr [esi + 474h]
        mov ecx, dword ptr [ecx + ebp*4]
        push eax
        ; Exact mapped bytes E8 59 FF 11 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0x11
        __asm _emit 0x00
        inc bl
        mov byte ptr [esp + 17h], bl
        cmp bl, byte ptr [esi + 46dh]
        ; Exact mapped bytes 0F 82 AB FE FF FF: jb 0x587e2c84
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 47ch]
        xor edi, edi
        mov dword ptr [esi + 484h], edi
        mov dword ptr [esi + 488h], edi
        cmp eax, edi
        ; Exact mapped bytes 74 09: je 0x587e2dfa
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 480h]
        cmp eax, edi
        ; Exact mapped bytes 74 09: je 0x587e2e0d
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        cmp dword ptr [esi + 0d78h], edi
        ; Exact mapped bytes 75 1B: jne 0x587e2e30
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 0ch], edi
        ; Exact mapped bytes 74 10: je 0x587e2e30
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 30h]
        cmp eax, edi
        ; Exact mapped bytes 75 03: jne 0x587e2e2a
        __asm _emit 0x75
        __asm _emit 0x03
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [esi + 0d78h], eax
        mov edx, dword ptr [esi + 0d78h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 32 62 FF FF: call 0x587d9070
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, edi
        mov dword ptr [esi + 0d78h], eax
        mov dword ptr [esi + 0e10h], eax
        ; Exact mapped bytes 75 0F: jne 0x587e2e5d
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [esi + 0bch]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0d78h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 15 C7 FF FF: call 0x587df580
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 24h
        ret
    }
}
