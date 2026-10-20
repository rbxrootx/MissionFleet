// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879FE10 .. +0x514 bytes.
extern "C" __declspec(naked) void FUN_5879fe10_5879FE10() {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push edi
        mov edi, dword ptr [esp + 14h]
        test ebx, ebx
        ; Exact mapped bytes 0F 84 FD 04 00 00: je 0x587a0320
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 84 F5 04 00 00: je 0x587a0320
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 60h]
        mov ecx, dword ptr [esp + 18h]
        push ebp
        push esi
        test edx, edx
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x5879febe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0c8h]
        and eax, ecx
        test eax, 4000h
        ; Exact mapped bytes 74 73: je 0x5879febe
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [esp + 24h]
        cmp eax, -1
        ; Exact mapped bytes 74 20: je 0x5879fe74
        __asm _emit 0x74
        __asm _emit 0x20
        lea esi, [eax*8]
        sub esi, eax
        push dword ptr [edx + esi*4 + 4]
        push ebx
        ; Exact mapped bytes E8 69 6B 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 60h]
        mov dword ptr [eax + esi*4 + 4], 0
        ; Exact mapped bytes EB 43: jmp 0x5879feb7
        __asm _emit 0xeb
        __asm _emit 0x43
        xor ebp, ebp
        cmp dword ptr [edi + 58h], ebp
        ; Exact mapped bytes 7E 1E: jle 0x5879fe99
        __asm _emit 0x7e
        __asm _emit 0x1e
        xor esi, esi
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [edi + 60h]
        push dword ptr [esi + eax + 4]
        push ebx
        ; Exact mapped bytes E8 43 6B 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        inc ebp
        lea esi, [esi + 1ch]
        add esp, 8
        cmp ebp, dword ptr [edi + 58h]
        ; Exact mapped bytes 7C E7: jl 0x5879fe80
        __asm _emit 0x7c
        __asm _emit 0xe7
        push dword ptr [edi + 60h]
        push ebx
        ; Exact mapped bytes E8 2E 6B 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 60h], 0
        mov dword ptr [edi + 58h], 0
        mov dword ptr [edi + 5ch], 0
        mov ecx, dword ptr [esp + 28h]
        add esp, 8
        mov eax, dword ptr [edi + 0c8h]
        lea edx, [edi + 0c8h]
        and eax, ecx
        lea ebp, [edi + 8]
        test eax, 2000h
        ; Exact mapped bytes 74 33: je 0x5879ff09
        __asm _emit 0x74
        __asm _emit 0x33
        push dword ptr [edi + 74h]
        and dword ptr [ebp], 0ffffffefh
        push ebx
        ; Exact mapped bytes E8 ED 6A 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 28h]
        lea esi, [edi + 0c8h]
        add esp, 8
        mov dword ptr [edi + 74h], 0
        xor eax, eax
        mov dword ptr [esp + 18h], esi
        ; Exact mapped bytes 66 89 47 16: mov word ptr [edi + 0x16], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x16
        lea edx, [edi + 0c8h]
        ; Exact mapped bytes EB 06: jmp 0x5879ff0f
        __asm _emit 0xeb
        __asm _emit 0x06
        mov esi, edx
        mov dword ptr [esp + 18h], edx
        mov eax, ecx
        and eax, dword ptr [edx]
        test eax, 100h
        ; Exact mapped bytes 74 42: je 0x5879ff5c
        __asm _emit 0x74
        __asm _emit 0x42
        push dword ptr [edi + 0e0h]
        push ebx
        ; Exact mapped bytes E8 AA 6A 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [edi + 0e4h]
        push ebx
        ; Exact mapped bytes E8 9E 6A 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 30h]
        lea edx, [edi + 0c8h]
        add esp, 10h
        mov dword ptr [edi + 0e0h], 0
        and dword ptr [ebp], 0ffffbfffh
        mov dword ptr [edi + 0e4h], 0
        ; Exact mapped bytes EB 06: jmp 0x5879ff62
        __asm _emit 0xeb
        __asm _emit 0x06
        mov esi, edx
        mov dword ptr [esp + 18h], esi
        mov eax, ecx
        and eax, dword ptr [edx]
        test al, al
        ; Exact mapped bytes 0F 89 A3 00 00 00: jns 0x587a0011
        __asm _emit 0x0f
        __asm _emit 0x89
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [edi + 0b0h]
        push ebx
        ; Exact mapped bytes E8 56 6A 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [edi + 0bch]
        push ebx
        ; Exact mapped bytes E8 4A 6A 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [edi + 0b0h], 0
        cmp dword ptr [edi + 0c0h], 0
        mov dword ptr [edi + 0bch], 0
        ; Exact mapped bytes 74 60: je 0x587a0006
        __asm _emit 0x74
        __asm _emit 0x60
        mov eax, dword ptr [esp + 18h]
        xor esi, esi
        cmp byte ptr [edi + 0c5h], 0
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes 76 30: jbe 0x5879ffe9
        __asm _emit 0x76
        __asm _emit 0x30
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0c0h]
        push dword ptr [eax + esi*4]
        push ebx
        ; Exact mapped bytes E8 01 6A 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [edi + 0c5h]
        inc esi
        add esp, 8
        cmp esi, eax
        ; Exact mapped bytes 7C E2: jl 0x5879ffc0
        __asm _emit 0x7c
        __asm _emit 0xe2
        lea ebp, [edi + 8]
        lea esi, [edi + 0c8h]
        ; Exact mapped bytes EB 04: jmp 0x5879ffed
        __asm _emit 0xeb
        __asm _emit 0x04
        mov esi, dword ptr [esp + 18h]
        push dword ptr [edi + 0c0h]
        push ebx
        ; Exact mapped bytes E8 D7 69 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [edi + 0c0h], 0
        and dword ptr [ebp], 0fffffbffh
        mov ecx, dword ptr [esp + 20h]
        mov edx, dword ptr [esi]
        mov eax, edx
        and eax, ecx
        test al, 10h
        ; Exact mapped bytes 74 39: je 0x587a0054
        __asm _emit 0x74
        __asm _emit 0x39
        push dword ptr [edi + 2ch]
        push ebx
        ; Exact mapped bytes E8 AC 69 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [edi + 30h]
        push ebx
        ; Exact mapped bytes E8 A3 69 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        lea eax, [edi + 8]
        mov ecx, dword ptr [esp + 30h]
        add esp, 10h
        and dword ptr [ebp], 0ffffefffh
        mov dword ptr [edi + 2ch], 0
        mov dword ptr [edi + 30h], 0
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes EB 06: jmp 0x587a005a
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, ebp
        mov dword ptr [esp + 18h], ebp
        cmp dword ptr [edi + 0d4h], 0
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x587a0148
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and edx, ecx
        mov dword ptr [esp + 18h], eax
        test dl, 20h
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x587a0148
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        cmp eax, -1
        ; Exact mapped bytes 74 47: je 0x587a00c6
        __asm _emit 0x74
        __asm _emit 0x47
        mov esi, eax
        mov eax, dword ptr [edi + 0d4h]
        add esi, esi
        push dword ptr [eax + esi*8]
        push ebx
        ; Exact mapped bytes E8 3E 69 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0d4h]
        push dword ptr [eax + esi*8 + 8]
        push ebx
        ; Exact mapped bytes E8 2E 69 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0d4h]
        add esp, 10h
        mov dword ptr [eax + esi*8], 0
        mov dword ptr [eax + esi*8 + 8], 0
        lea esi, [edi + 8]
        mov dword ptr [esp + 18h], esi
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x587a014c
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 0d8h], 0
        mov esi, ebp
        mov dword ptr [esp + 10h], 0
        mov dword ptr [esp + 18h], ebp
        ; Exact mapped bytes 7E 40: jle 0x587a011d
        __asm _emit 0x7e
        __asm _emit 0x40
        xor esi, esi
        nop
        mov eax, dword ptr [edi + 0d4h]
        push dword ptr [esi + eax]
        push ebx
        ; Exact mapped bytes E8 E1 68 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0d4h]
        push dword ptr [esi + eax + 8]
        push ebx
        ; Exact mapped bytes E8 D1 68 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 20h]
        lea esi, [esi + 10h]
        inc eax
        add esp, 10h
        mov dword ptr [esp + 10h], eax
        cmp eax, dword ptr [edi + 0d8h]
        ; Exact mapped bytes 7C CA: jl 0x587a00e0
        __asm _emit 0x7c
        __asm _emit 0xca
        lea esi, [edi + 8]
        mov dword ptr [esp + 18h], esi
        push dword ptr [edi + 0d4h]
        push ebx
        ; Exact mapped bytes E8 A7 68 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [edi + 0d4h], 0
        and dword ptr [esi], 0ffffdfffh
        mov dword ptr [edi + 0d8h], 0
        ; Exact mapped bytes EB 04: jmp 0x587a014c
        __asm _emit 0xeb
        __asm _emit 0x04
        mov esi, dword ptr [esp + 18h]
        mov ecx, dword ptr [edi + 0cch]
        mov ebp, esi
        test ecx, ecx
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x587a01f5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0c8h]
        and eax, dword ptr [esp + 20h]
        test eax, 200h
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x587a01f5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        cmp eax, -1
        ; Exact mapped bytes 74 21: je 0x587a019b
        __asm _emit 0x74
        __asm _emit 0x21
        lea esi, [eax + eax*4]
        push dword ptr [ecx + esi*4 + 8]
        push ebx
        ; Exact mapped bytes E8 49 68 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0cch]
        mov ebp, dword ptr [esp + 20h]
        mov dword ptr [eax + esi*4 + 8], 0
        ; Exact mapped bytes EB 57: jmp 0x587a01f2
        __asm _emit 0xeb
        __asm _emit 0x57
        xor ebp, ebp
        cmp dword ptr [edi + 0d0h], ebp
        ; Exact mapped bytes 7E 2A: jle 0x587a01cf
        __asm _emit 0x7e
        __asm _emit 0x2a
        xor esi, esi
        ; Exact mapped bytes 66 0F 1F 84 00 00 00 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0cch]
        push dword ptr [esi + eax + 8]
        push ebx
        ; Exact mapped bytes E8 10 68 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        inc ebp
        lea esi, [esi + 14h]
        add esp, 8
        cmp ebp, dword ptr [edi + 0d0h]
        ; Exact mapped bytes 7C E1: jl 0x587a01b0
        __asm _emit 0x7c
        __asm _emit 0xe1
        push dword ptr [edi + 0cch]
        push ebx
        ; Exact mapped bytes E8 F5 67 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 0cch], 0
        lea ebp, [edi + 8]
        mov dword ptr [edi + 0d0h], 0
        add esp, 8
        mov ecx, dword ptr [edi + 0c8h]
        mov eax, ecx
        mov esi, dword ptr [esp + 20h]
        and eax, esi
        test eax, 8000h
        ; Exact mapped bytes 74 2E: je 0x587a0238
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [edi + 0a8h]
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x587a022e
        __asm _emit 0x74
        __asm _emit 0x1a
        push eax
        push ebx
        ; Exact mapped bytes E8 B5 67 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0c8h]
        add esp, 8
        mov dword ptr [edi + 0a8h], 0
        and dword ptr [edi + 8], 0fffeffffh
        lea ebp, [edi + 8]
        and ecx, esi
        test cl, 8
        ; Exact mapped bytes 74 26: je 0x587a0265
        __asm _emit 0x74
        __asm _emit 0x26
        push dword ptr [edi + 0ach]
        push ebx
        ; Exact mapped bytes E8 85 67 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [edi + 8]
        mov dword ptr [edi + 0ach], 0
        add esp, 8
        mov dword ptr [esp + 18h], ecx
        and dword ptr [ebp], 0ffffffbfh
        ; Exact mapped bytes EB 04: jmp 0x587a0269
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 18h], ebp
        mov eax, dword ptr [edi + 0c8h]
        and eax, esi
        test eax, 1000h
        ; Exact mapped bytes 74 21: je 0x587a0299
        __asm _emit 0x74
        __asm _emit 0x21
        push dword ptr [edi + 10h]
        push ebx
        ; Exact mapped bytes E8 4F 67 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp], 0fffffff7h
        add esp, 8
        mov ebp, dword ptr [esp + 18h]
        xor eax, eax
        mov dword ptr [edi + 10h], 0
        ; Exact mapped bytes 66 89 47 14: mov word ptr [edi + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x14
        mov ecx, dword ptr [edi + 0c8h]
        mov eax, ecx
        and eax, esi
        test al, 40h
        ; Exact mapped bytes 74 5E: je 0x587a0305
        __asm _emit 0x74
        __asm _emit 0x5e
        cmp dword ptr [edi + 0e8h], 0
        ; Exact mapped bytes 74 4E: je 0x587a02fe
        __asm _emit 0x74
        __asm _emit 0x4e
        xor esi, esi
        cmp dword ptr [edi + 4], esi
        ; Exact mapped bytes 76 24: jbe 0x587a02db
        __asm _emit 0x76
        __asm _emit 0x24
        ; Exact mapped bytes 66 0F 1F 84 00 00 00 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0e8h]
        push dword ptr [eax + esi*4]
        push ebx
        ; Exact mapped bytes E8 01 67 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        add esp, 8
        cmp esi, dword ptr [edi + 4]
        ; Exact mapped bytes 72 E8: jb 0x587a02c0
        __asm _emit 0x72
        __asm _emit 0xe8
        lea ebp, [edi + 8]
        push dword ptr [edi + 0e8h]
        push ebx
        ; Exact mapped bytes E8 E9 66 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0c8h]
        add esp, 8
        mov esi, dword ptr [esp + 20h]
        mov dword ptr [edi + 0e8h], 0
        and dword ptr [ebp], 0ffff7fffh
        mov eax, esi
        and eax, 0ffffbddfh
        cmp dword ptr [esp + 24h], -1
        cmove eax, esi
        not eax
        and eax, ecx
        pop esi
        mov dword ptr [edi + 0c8h], eax
        pop ebp
        pop edi
        pop ebx
        pop ecx
        ret
    }
}
