// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100ED4F0 .. +0x532 bytes.
extern "C" __declspec(naked) void FUN_100ed4f0_100ED4F0() {
    __asm {
        push -1
        push 10173ffeh
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
        sub esp, 13ch
        mov eax, dword ptr [esp + 14ch]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov cl, byte ptr [eax]
        mov dl, cl
        and edx, 1fh
        mov edi, edx
        mov dl, byte ptr [eax + 1]
        mov al, byte ptr [eax + 2]
        mov dword ptr [esp + 28h], edi
        mov byte ptr [esp + 1ch], al
        lea eax, [esi + 328h]
        mov byte ptr [esp + 10h], dl
        mov eax, dword ptr [eax + edi*4 + 9cch]
        test eax, eax
        ; Exact mapped bytes 0F 84 BF 04 00 00: je 0x100eda07
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 0D 00: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 B0 04 00 00: jne 0x100eda07
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        and cl, 0e0h
        ; Exact mapped bytes 0F 85 EF 03 00 00: jne 0x100ed94f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 84 BE 76 0C 00 00: mov ax, word ptr [esi + edi*4 + 0xc76]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x76
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 10h]
        and eax, 0ffffh
        xor eax, 0aah
        mov ebx, eax
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 74 7B: je 0x100ed600
        __asm _emit 0x74
        __asm _emit 0x7b
        mov eax, dword ptr [esi + 5c0ch]
        push ebx
        mov ebx, dword ptr [esp + 20h]
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 88h]
        mov eax, dword ptr [eax + 84h]
        and ebx, 0ffh
        mov edi, dword ptr [edx + 10474h]
        push ebx
        mov edx, dword ptr [edx + 1047ch]
        mov ebx, ebp
        and ebx, 0ffh
        push ebx
        push ecx
        lea ecx, [esi + 37ch]
        push eax
        push ecx
        push edi
        push edx
        lea edx, [esp + 6ch]
        push 101ac5e8h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 28h
        lea eax, [esp + 2ch]
        lea ecx, [esp + 4ch]
        push 0
        push eax
        push ecx
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes A1 F0 51 1C 10: mov eax, dword ptr [0x101c51f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [esp + 58h]
        push edx
        push eax
        ; Exact mapped bytes FF 15 A4 50 17 10: call dword ptr [0x101750a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esp + 1ch]
        and eax, 0ffh
        mov dword ptr [esp + 24h], eax
        shl eax, 4
        lea ebx, [eax + esi]
        mov dword ptr [esp + 2ch], ebx
        mov eax, dword ptr [ebx + 0f84h]
        test eax, eax
        ; Exact mapped bytes 0F 8F E2 03 00 00: jg 0x100eda07
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e74h]
        ; Exact mapped bytes 66 0F B6 4C 24 10: movzx cx, byte ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        mov dl, byte ptr [eax + 0eh]
        and edx, 0ffh
        ; Exact mapped bytes 66 3B CA: cmp cx, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes 76 22: jbe 0x100ed661
        __asm _emit 0x76
        __asm _emit 0x22
        mov al, byte ptr [eax + 0eh]
        and eax, 0ffh
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 5
        ; Exact mapped bytes E8 0A 01 F6 FF: call 0x1004d760
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 0F EB 07 00: call 0x1016c170
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0x07
        __asm _emit 0x00
        xor edi, edi
        and ebp, 0ffh
        mov dword ptr [esp + 30h], edi
        mov dword ptr [esp + 10h], edi
        mov dword ptr [esp + 20h], ebp
        ; Exact mapped bytes 0F 8E AC 02 00 00: jle 0x100ed927
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100ed67f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 540h
        ; Exact mapped bytes E8 17 F1 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf1
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, edi
        mov dword ptr [esp + 154h], edi
        ; Exact mapped bytes 74 2E: je 0x100ed6c9
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 2710h
        push edi
        push edi
        mov edx, dword ptr [ecx + 104e0h]
        mov ecx, dword ptr [esi + 8]
        push edi
        push ecx
        mov ecx, dword ptr [esi + 4]
        push ecx
        push edx
        mov edx, dword ptr [esp + 2ch]
        mov ecx, eax
        push edx
        push esi
        ; Exact mapped bytes E8 3B 85 F1 FF: call 0x10005c00
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes EB 02: jmp 0x100ed6cb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [esp + 24h]
        mov edi, dword ptr [esp + 28h]
        mov dword ptr [esp + 14h], ecx
        mov ebp, 0e10h
        mov edx, dword ptr [esi + eax*4 + 5f00h]
        mov eax, dword ptr [esi + 0e74h]
        push edx
        mov dword ptr [esp + 158h], 0ffffffffh
        mov dl, byte ptr [eax + 2]
        xor eax, eax
        and dl, 1fh
        cmp dl, 8
        mov edx, dword ptr [esp + 28h]
        sete al
        push eax
        mov eax, dword ptr [esi + edi*4 + 0cf4h]
        push edx
        push eax
        mov eax, dword ptr [esi + 5c44h]
        add eax, 384h
        cdq
        idiv ebp
        push edx
        ; Exact mapped bytes E8 DB B2 F1 FF: call 0x10008a00
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xb2
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [esi + edi*8 + 0d78h]
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 1B: je 0x100ed74d
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp dword ptr [esp + 18h], ebp
        ; Exact mapped bytes 74 15: je 0x100ed74d
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        push 1
        push ecx
        mov ecx, dword ptr [esp + 1ch]
        ; Exact mapped bytes E8 E9 D0 F1 FF: call 0x1000a830
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0xf1
        __asm _emit 0xff
        dec dword ptr [esp + 18h]
        ; Exact mapped bytes EB 14: jmp 0x100ed761
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 89 6C 24 34: mov word ptr [esp + 0x34], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x34
        mov edx, dword ptr [esp + 34h]
        push ebp
        push edx
        ; Exact mapped bytes E8 CF D0 F1 FF: call 0x1000a830
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd0
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 4], esi
        ; Exact mapped bytes 0F 85 00 01 00 00: jne 0x100ed86f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 30h], ebp
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x100ed856
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 14h]
        mov eax, dword ptr [esi + 103ch]
        mov edx, dword ptr [esi + 1040h]
        xor edi, edi
        ; Exact mapped bytes 66 8B 8D C0 02 00 00: mov cx, word ptr [ebp + 0x2c0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edx
        ; Exact mapped bytes 74 17: je 0x100ed7ad
        __asm _emit 0x74
        __asm _emit 0x17
        mov ebx, dword ptr [eax]
        ; Exact mapped bytes 66 39 8B C0 02 00 00: cmp word ptr [ebx + 0x2c0], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x8b
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 01: jne 0x100ed7a2
        __asm _emit 0x75
        __asm _emit 0x01
        inc edi
        add eax, 4
        cmp eax, edx
        ; Exact mapped bytes 75 ED: jne 0x100ed796
        __asm _emit 0x75
        __asm _emit 0xed
        mov ebx, dword ptr [esp + 2ch]
        and ecx, 0ffffh
        xor edx, edx
        mov dl, byte ptr [ecx + esi + 1047h]
        cmp edi, edx
        ; Exact mapped bytes 7C 73: jl 0x100ed833
        __asm _emit 0x7c
        __asm _emit 0x73
        xor eax, eax
        ; Exact mapped bytes 66 8B 85 C0 02 00 00: mov ax, word ptr [ebp + 0x2c0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        cmp eax, 3
        ; Exact mapped bytes 77 39: ja 0x100ed808
        __asm _emit 0x77
        __asm _emit 0x39
        ; Exact mapped bytes FF 24 85 24 DA 0E 10: jmp dword ptr [eax*4 + 0x100eda24]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0xda
        __asm _emit 0x0e
        __asm _emit 0x10
        push 101ac5e0h
        ; Exact mapped bytes EB 1D: jmp 0x100ed7fa
        __asm _emit 0xeb
        __asm _emit 0x1d
        lea ecx, [esp + 3ch]
        push 101ac5d8h
        push ecx
        ; Exact mapped bytes EB 16: jmp 0x100ed7ff
        __asm _emit 0xeb
        __asm _emit 0x16
        lea edx, [esp + 3ch]
        push 101ac5c8h
        push edx
        ; Exact mapped bytes EB 0A: jmp 0x100ed7ff
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 101ac5bch
        lea eax, [esp + 40h]
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 8
        mov edx, dword ptr [esp + 20h]
        lea ecx, [esp + 3ch]
        shl edx, 10h
        push 0
        or edx, edi
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push 6
        ; Exact mapped bytes E8 AA FF F5 FF: call 0x1004d7d0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 3F E9 07 00: call 0x1016c170
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 19: jmp 0x100ed84c
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [esi + 1040h]
        lea ecx, [esi + 1038h]
        lea eax, [esp + 14h]
        push eax
        push 1
        push edx
        ; Exact mapped bytes E8 C4 83 FA FF: call 0x10095c10
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [esp + 30h], 1
        xor ebp, ebp
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 1ch]
        push 1
        push ebp
        mov ecx, dword ptr [ecx + 9ch]
        push eax
        ; Exact mapped bytes E8 41 30 FB FF: call 0x100a08b0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x30
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 0f80h]
        mov edi, dword ptr [esp + 14h]
        cmp eax, ebp
        push 14h
        ; Exact mapped bytes 75 37: jne 0x100ed8b6
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes E8 1C EF 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xef
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        cmp eax, ebp
        ; Exact mapped bytes 74 14: je 0x100ed89f
        __asm _emit 0x74
        __asm _emit 0x14
        mov dword ptr [eax], 10176584h
        mov dword ptr [eax + 10h], ebp
        mov dword ptr [eax + 0ch], edi
        mov dword ptr [eax + 8], ebp
        mov dword ptr [eax + 4], ebp
        ; Exact mapped bytes EB 02: jmp 0x100ed8a1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [ebx + 0f80h], eax
        mov dword ptr [ebx + 0f7ch], eax
        mov dword ptr [eax + 10h], edx
        ; Exact mapped bytes EB 4D: jmp 0x100ed903
        __asm _emit 0xeb
        __asm _emit 0x4d
        ; Exact mapped bytes E8 E5 EE 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xee
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        cmp eax, ebp
        ; Exact mapped bytes 74 14: je 0x100ed8d6
        __asm _emit 0x74
        __asm _emit 0x14
        mov dword ptr [eax], 10176584h
        mov dword ptr [eax + 10h], ebp
        mov dword ptr [eax + 0ch], edi
        mov dword ptr [eax + 8], ebp
        mov dword ptr [eax + 4], ebp
        ; Exact mapped bytes EB 02: jmp 0x100ed8d8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 0f80h]
        mov dword ptr [ecx + 8], eax
        mov eax, dword ptr [ebx + 0f80h]
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ebx + 0f80h]
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ebx + 0f80h], eax
        mov dword ptr [eax + 10h], ecx
        mov edi, dword ptr [ebx + 0f84h]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 20h]
        inc edi
        inc eax
        mov dword ptr [ebx + 0f84h], edi
        cmp eax, ecx
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 8C 58 FD FF FF: jl 0x100ed67d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 28h]
        xor eax, 0aah
        push edi
        push eax
        push 1
        push edx
        lea ecx, [esi + 328h]
        ; Exact mapped bytes E8 9C 40 00 00: call 0x100f19e0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0ff8h], edi
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x100eda07
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp cl, 20h
        ; Exact mapped bytes 0F 85 AF 00 00 00: jne 0x100eda07
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [esp + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 6F: je 0x100ed9d4
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, dword ptr [esi + 5c0ch]
        mov ecx, edi
        and ecx, 0ffh
        mov edx, dword ptr [eax + 88h]
        mov eax, dword ptr [eax + 84h]
        push ecx
        push edx
        push eax
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [esi + 37ch]
        mov edx, dword ptr [eax + 10474h]
        mov eax, dword ptr [eax + 1047ch]
        push ecx
        push edx
        push eax
        lea ecx, [esp + 64h]
        push 101ac57ch
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 20h
        lea edx, [esp + 38h]
        lea eax, [esp + 4ch]
        push 0
        push edx
        push eax
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 F0 51 1C 10: mov edx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [esp + 54h]
        push eax
        push ecx
        push edx
        ; Exact mapped bytes FF 15 A4 50 17 10: call dword ptr [0x101750a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        and edi, 0ffh
        shl edi, 4
        mov esi, dword ptr [edi + esi + 0f7ch]
        test esi, esi
        ; Exact mapped bytes 74 1F: je 0x100eda07
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [esi + 0ch]
        ; Exact mapped bytes E8 D0 BE F1 FF: call 0x100098c0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xbe
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100eda00
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 0ch]
        push 0
        push 5
        ; Exact mapped bytes E8 50 B4 F1 FF: call 0x10008e50
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xf1
        __asm _emit 0xff
        mov esi, dword ptr [esi + 8]
        test esi, esi
        ; Exact mapped bytes 75 E1: jne 0x100ed9e8
        __asm _emit 0x75
        __asm _emit 0xe1
        mov ecx, dword ptr [esp + 14ch]
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
        add esp, 148h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
