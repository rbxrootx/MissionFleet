// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587936D0 .. +0x637 bytes.
extern "C" __declspec(naked) void FUN_587936d0() {
    __asm {
        push -1
        push 589897feh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 110h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 10ch], eax
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
        lea eax, [esp + 124h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, ecx
        cmp byte ptr [ebp + 144h], 0
        ; Exact mapped bytes 75 0F: jne 0x58793725
        __asm _emit 0x75
        __asm _emit 0x0f
        push 0ffffh
        push 58997c8ch
        ; Exact mapped bytes E9 8B 05 00 00: jmp 0x58793cb0
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 12124h]
        mov eax, dword ptr [eax + 80h]
        ; Exact mapped bytes 8B 35 A8 C1 98 58: mov esi, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        cmp eax, 3
        ; Exact mapped bytes 0F 8C 63 05 00 00: jl 0x58793ca6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x63
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 12128h]
        mov eax, dword ptr [ecx + 80h]
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 0F 84 4C 05 00 00: je 0x58793ca6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 12130h]
        ; Exact mapped bytes A1 C4 84 A2 58: mov eax, dword ptr [0x58a284c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        push eax
        ; Exact mapped bytes E8 56 94 1E 00: call 0x5897cbc2
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x94
        __asm _emit 0x1e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 12124h]
        xor ebx, ebx
        mov dword ptr [ebp + 12104h], ebx
        mov dword ptr [ebp + 1213ch], 12h
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 12128h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 12124h]
        mov ecx, 707070h
        mov dword ptr [eax + 60h], ecx
        mov eax, dword ptr [ebp + 12128h]
        mov dword ptr [eax + 60h], ecx
        mov eax, dword ptr [ebp + 1211ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 24: je 0x587937de
        __asm _emit 0x74
        __asm _emit 0x24
        mov dword ptr [eax + 28h], ebx
        mov dword ptr [eax + 84h], 100h
        mov dword ptr [eax + 8ch], 40000000h
        mov ecx, dword ptr [ebp + 1211ch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 36h
        ; Exact mapped bytes 7E 15: jle 0x58793801
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 0D: je 0x58793801
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0d80h
        ; Exact mapped bytes EB 02: jmp 0x58793803
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 12114h]
        push eax
        ; Exact mapped bytes E8 11 11 FA FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x11
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1cbh
        ; Exact mapped bytes 7E 16: jle 0x58793836
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x58793836
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 72ch]
        ; Exact mapped bytes EB 02: jmp 0x58793838
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 12118h]
        push eax
        ; Exact mapped bytes E8 7C DE F9 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xde
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 12124h]
        mov eax, dword ptr [ecx + 80h]
        ; Exact mapped bytes 8B 35 98 C1 98 58: mov esi, dword ptr [0x5898c198]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea edx, [ebp + 1209ch]
        push edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [ebp + 12128h]
        mov eax, dword ptr [eax + 80h]
        push eax
        lea ecx, [ebp + 120b4h]
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 35 1C 48 A2 58: mov esi, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        add esi, 0e28h
        lea edi, [ebp + 120c4h]
        mov ecx, 10h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [ebp + 12100h], ebx
        ; Exact mapped bytes 8B 35 28 48 A2 58: mov esi, dword ptr [0x58a24828]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [esi + 14h]
        sub edx, dword ptr [esi + 10h]
        add esi, 4
        xor edi, edi
        test edx, 0fffffffch
        ; Exact mapped bytes 7E 43: jle 0x587938f1
        __asm _emit 0x7e
        __asm _emit 0x43
        mov edi, edi
        mov eax, dword ptr [esi + 10h]
        sub eax, dword ptr [esi + 0ch]
        sar eax, 2
        cmp edi, eax
        ; Exact mapped bytes 72 05: jb 0x587938c2
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 B0 93 1E 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x93
        __asm _emit 0x1e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ch]
        mov eax, dword ptr [ecx + edi*4]
        mov eax, dword ptr [eax + 184h]
        imul eax, edi
        imul eax, eax, 0dh
        add dword ptr [ebp + 12100h], eax
        ; Exact mapped bytes 8B 35 28 48 A2 58: mov esi, dword ptr [0x58a24828]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [esi + 14h]
        sub edx, dword ptr [esi + 10h]
        add esi, 4
        inc edi
        sar edx, 2
        cmp edi, edx
        ; Exact mapped bytes 7C BF: jl 0x587938b0
        __asm _emit 0x7c
        __asm _emit 0xbf
        cmp dword ptr [ebp + 12108h], ebx
        ; Exact mapped bytes 0F 85 0E 01 00 00: jne 0x58793a0b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, ebx
        ; Exact mapped bytes 74 20: je 0x58793927
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes E8 D4 D1 1D 00: call 0x58970ae0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd1
        __asm _emit 0x1d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, ebx
        ; Exact mapped bytes 74 11: je 0x58793927
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor ecx, ecx
        ; Exact mapped bytes 89 0D 88 45 A2 58: mov dword ptr [0x58a24588], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov al, byte ptr [ebp + 144h]
        cmp al, 30h
        lea esi, [ebp + 144h]
        ; Exact mapped bytes 7C 04: jl 0x5879393b
        __asm _emit 0x7c
        __asm _emit 0x04
        cmp al, 39h
        ; Exact mapped bytes 7E 14: jle 0x5879394f
        __asm _emit 0x7e
        __asm _emit 0x14
        lea eax, [ebp + 252h]
        push eax
        push esi
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, ebx
        ; Exact mapped bytes 75 39: jne 0x5879398c
        __asm _emit 0x75
        __asm _emit 0x39
        push 21ch
        ; Exact mapped bytes E8 F1 92 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x92
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 12ch], ebx
        cmp eax, ebx
        ; Exact mapped bytes 74 0B: je 0x5879397a
        __asm _emit 0x74
        __asm _emit 0x0b
        push 1
        mov ecx, eax
        ; Exact mapped bytes E8 C8 55 02 00: call 0x587b8f40
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5879397c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esp + 12ch], 0ffffffffh
        ; Exact mapped bytes A3 88 45 A2 58: mov dword ptr [0x58a24588], eax
        __asm _emit 0xa3
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov al, byte ptr [esi]
        cmp al, 30h
        ; Exact mapped bytes 7C 52: jl 0x587939e4
        __asm _emit 0x7c
        __asm _emit 0x52
        cmp al, 39h
        ; Exact mapped bytes 7F 4E: jg 0x587939e4
        __asm _emit 0x7f
        __asm _emit 0x4e
        push 0ffh
        lea ecx, [esp + 25h]
        push ebx
        push ecx
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes E8 9D 92 1E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x92
        __asm _emit 0x1e
        __asm _emit 0x00
        movzx edx, word ptr [ebp + 244h]
        add esp, 0ch
        push edx
        ; Exact mapped bytes FF 15 60 C4 98 58: call dword ptr [0x5898c460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        movzx eax, ax
        push eax
        push esi
        lea ecx, [esp + 28h]
        push 589977b0h
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes A1 F4 42 A2 58: mov eax, dword ptr [0x58a242f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x42
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax]
        add esp, 10h
        push ebx
        lea edx, [esp + 24h]
        push edx
        push ecx
        ; Exact mapped bytes EB 1C: jmp 0x58793a00
        __asm _emit 0xeb
        __asm _emit 0x1c
        movzx edx, word ptr [ebp + 244h]
        push edx
        ; Exact mapped bytes FF 15 60 C4 98 58: call dword ptr [0x5898c460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D F4 42 A2 58: mov ecx, dword ptr [0x58a242f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x42
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        movzx eax, ax
        push eax
        push esi
        push edx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 D6 1D 00: call 0x58971070
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xd6
        __asm _emit 0x1d
        __asm _emit 0x00
        xor esi, esi
        cmp dword ptr [ebp + 24ch], ebx
        ; Exact mapped bytes 7E 46: jle 0x58793a5b
        __asm _emit 0x7e
        __asm _emit 0x46
        lea ebx, [ebp + 8252h]
        lea edi, [ebp + 252h]
        push edi
        lea eax, [ebp + 144h]
        push eax
        ; Exact mapped bytes FF 15 A4 C1 98 58: call dword ptr [0x5898c1a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x58793a3f
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 85 44 02 00 00: mov ax, word ptr [ebp + 0x244]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 03: cmp ax, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x03
        ; Exact mapped bytes 74 14: je 0x58793a53
        __asm _emit 0x74
        __asm _emit 0x14
        inc esi
        add ebx, 2
        add edi, 100h
        cmp esi, dword ptr [ebp + 24ch]
        ; Exact mapped bytes 7C D0: jl 0x58793a21
        __asm _emit 0x7c
        __asm _emit 0xd0
        ; Exact mapped bytes EB 06: jmp 0x58793a59
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 89 35 FC 3E 9C 58: mov dword ptr [0x589c3efc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0x3e
        __asm _emit 0x9c
        __asm _emit 0x58
        xor ebx, ebx
        xor edi, edi
        cmp dword ptr [ebp + 24ch], ebx
        ; Exact mapped bytes 0F 8E 9A 00 00 00: jle 0x58793b03
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebp + 9a58h]
        nop
        lea ecx, [esi - 9806h]
        lea eax, [ebp + 144h]
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov dl, byte ptr [eax]
        cmp dl, byte ptr [ecx]
        ; Exact mapped bytes 75 1A: jne 0x58793aa0
        __asm _emit 0x75
        __asm _emit 0x1a
        test dl, dl
        ; Exact mapped bytes 74 12: je 0x58793a9c
        __asm _emit 0x74
        __asm _emit 0x12
        mov dl, byte ptr [eax + 1]
        cmp dl, byte ptr [ecx + 1]
        ; Exact mapped bytes 75 0E: jne 0x58793aa0
        __asm _emit 0x75
        __asm _emit 0x0e
        add eax, 2
        add ecx, 2
        test dl, dl
        ; Exact mapped bytes 75 E4: jne 0x58793a80
        __asm _emit 0x75
        __asm _emit 0xe4
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x58793aa5
        __asm _emit 0xeb
        __asm _emit 0x05
        sbb eax, eax
        sbb eax, -1
        cmp eax, ebx
        ; Exact mapped bytes 75 31: jne 0x58793ada
        __asm _emit 0x75
        __asm _emit 0x31
        mov ecx, esi
        lea eax, [ebp + 9954h]
        mov dl, byte ptr [eax]
        cmp dl, byte ptr [ecx]
        ; Exact mapped bytes 75 1A: jne 0x58793ad1
        __asm _emit 0x75
        __asm _emit 0x1a
        test dl, dl
        ; Exact mapped bytes 74 12: je 0x58793acd
        __asm _emit 0x74
        __asm _emit 0x12
        mov dl, byte ptr [eax + 1]
        cmp dl, byte ptr [ecx + 1]
        ; Exact mapped bytes 75 0E: jne 0x58793ad1
        __asm _emit 0x75
        __asm _emit 0x0e
        add eax, 2
        add ecx, 2
        test dl, dl
        ; Exact mapped bytes 75 E4: jne 0x58793ab1
        __asm _emit 0x75
        __asm _emit 0xe4
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x58793ad6
        __asm _emit 0xeb
        __asm _emit 0x05
        sbb eax, eax
        sbb eax, -1
        cmp eax, ebx
        ; Exact mapped bytes 75 11: jne 0x58793aeb
        __asm _emit 0x75
        __asm _emit 0x11
        inc edi
        add esi, 100h
        cmp edi, dword ptr [ebp + 24ch]
        ; Exact mapped bytes 7C 87: jl 0x58793a70
        __asm _emit 0x7c
        __asm _emit 0x87
        ; Exact mapped bytes EB 18: jmp 0x58793b03
        __asm _emit 0xeb
        __asm _emit 0x18
        shl edi, 8
        lea ecx, [edi + ebp + 9a58h]
        push ecx
        lea edx, [ebp + 9954h]
        push edx
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        lea eax, [esp + 14h]
        push eax
        push 0f003fh
        push ebx
        push 58997258h
        push 80000002h
        ; Exact mapped bytes FF 15 08 C0 98 58: call dword ptr [0x5898c008]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 3D 10 C0 98 58: mov edi, dword ptr [0x5898c010]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x58793b4b
        __asm _emit 0x74
        __asm _emit 0x23
        lea ecx, [esp + 18h]
        push ecx
        lea edx, [esp + 18h]
        push edx
        push ebx
        push 0f003fh
        push ebx
        push 5898c922h
        push ebx
        push 58997258h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push ebx
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 35 0C C0 98 58: mov esi, dword ptr [0x5898c00c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        mov eax, dword ptr [esp + 18h]
        push ebx
        push 1
        push ebx
        push 58997250h
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x58793ba8
        __asm _emit 0x74
        __asm _emit 0x3b
        lea ecx, [esp + 18h]
        push ecx
        lea edx, [esp + 18h]
        push edx
        push ebx
        push 0f003fh
        push ebx
        push 58997250h
        push ebx
        push 58997258h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push ebx
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        mov eax, dword ptr [esp + 18h]
        push ebx
        push 1
        push ebx
        push 58997250h
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [esp + 14h]
        push 4
        add ebp, 244h
        push ebp
        push 4
        push ebx
        push 5899723ch
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x58793bf9
        __asm _emit 0x74
        __asm _emit 0x35
        lea edx, [esp + 18h]
        push edx
        lea eax, [esp + 18h]
        push eax
        push ebx
        push 0f003fh
        push ebx
        push 5899723ch
        push ebx
        push 58997258h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        push 4
        push ebp
        push 4
        push ebx
        push 5899723ch
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 2D A8 C1 98 58: mov ebp, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push ebx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esp + 14h]
        push eax
        push ebx
        push 1
        push ebx
        push 58997244h
        push edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x58793c4e
        __asm _emit 0x74
        __asm _emit 0x37
        lea eax, [esp + 18h]
        push eax
        lea ecx, [esp + 18h]
        push ecx
        push ebx
        push 0f003fh
        push ebx
        push 58997244h
        push ebx
        push 58997258h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push ebx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esp + 14h]
        push eax
        push ebx
        push 1
        push ebx
        push 58997244h
        push edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 14h]
        push 4
        push ebx
        push 4
        push ebx
        push 5899722ch
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x58793c99
        __asm _emit 0x74
        __asm _emit 0x35
        lea ecx, [esp + 18h]
        push ecx
        lea edx, [esp + 18h]
        push edx
        push ebx
        push 0f003fh
        push ebx
        push 5899722ch
        push ebx
        push 58997258h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esp + 14h]
        push 4
        push ebx
        push 4
        push ebx
        push 5899722ch
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [esp + 14h]
        push ecx
        ; Exact mapped bytes FF 15 00 C0 98 58: call dword ptr [0x5898c000]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes EB 39: jmp 0x58793cdf
        __asm _emit 0xeb
        __asm _emit 0x39
        push 0ffffh
        push 58997c64h
        mov eax, dword ptr [ebp + 12140h]
        mov dword ptr [ebp + 1213ch], 13h
        mov dword ptr [eax + 6ch], 0ffffffh
        mov dword ptr [eax + 70h], 0
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 51 EA FF FF: call 0x58792730
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 124h]
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
        mov ecx, dword ptr [esp + 10ch]
        xor ecx, esp
        ; Exact mapped bytes E8 DA 8E 1E 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x8e
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 11ch
        ret
    }
}
