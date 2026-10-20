// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58752C50 .. +0x367 bytes.
extern "C" __declspec(naked) void FUN_58752c50() {
    __asm {
        sub esp, 28h
        push ebx
        mov ebx, dword ptr [ecx + 84h]
        push ebp
        push esi
        lea esi, [ecx + 78h]
        xor eax, eax
        push edi
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 1ch], eax
        cmp ebx, dword ptr [esi + 10h]
        ; Exact mapped bytes 76 05: jbe 0x58752c78
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 FA 9F 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x9f
        __asm _emit 0x22
        __asm _emit 0x00
        mov edi, dword ptr [esi]
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 10h]
        cmp dword ptr [esi + 0ch], ebp
        ; Exact mapped bytes 76 05: jbe 0x58752c8d
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 E5 9F 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x9f
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        test edi, edi
        ; Exact mapped bytes 74 04: je 0x58752c97
        __asm _emit 0x74
        __asm _emit 0x04
        cmp edi, eax
        ; Exact mapped bytes 74 05: je 0x58752c9c
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 D6 9F 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x9f
        __asm _emit 0x22
        __asm _emit 0x00
        cmp ebx, ebp
        ; Exact mapped bytes 74 66: je 0x58752d06
        __asm _emit 0x74
        __asm _emit 0x66
        test edi, edi
        ; Exact mapped bytes 75 33: jne 0x58752cd7
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes E8 C9 9F 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x9f
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58752cb5
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 BD 9F 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x9f
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 75 22: jne 0x58752cdf
        __asm _emit 0x75
        __asm _emit 0x22
        test edi, edi
        ; Exact mapped bytes 75 1A: jne 0x58752cdb
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 AC 9F 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x9f
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58752cd2
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 A0 9F 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x9f
        __asm _emit 0x22
        __asm _emit 0x00
        add ebx, 4
        ; Exact mapped bytes EB A9: jmp 0x58752c80
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov eax, dword ptr [edi]
        ; Exact mapped bytes EB D0: jmp 0x58752cab
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov eax, dword ptr [edi]
        ; Exact mapped bytes EB E9: jmp 0x58752cc8
        __asm _emit 0xeb
        __asm _emit 0xe9
        test edi, edi
        ; Exact mapped bytes 0F 85 D0 00 00 00: jne 0x58752db7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 86 9F 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x9f
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58752cf8
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 7A 9F 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x9f
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 18h], edi
        mov dword ptr [esp + 1ch], ebx
        mov ecx, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 10h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 DA 00 00 00: jne 0x58752df0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x58752df0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x58752df0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 B3 EF 0C 00: call 0x58821ce0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xef
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        mov eax, dword ptr [esp + 18h]
        push edx
        push eax
        lea ecx, [esp + 28h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 3D 6C 0F 00: call 0x58849980
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x0f
        __asm _emit 0x00
        lea edx, [esp + 3ch]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 81 27 05 00: call 0x587a54d0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 0ch]
        cmp ebx, dword ptr [esi + 10h]
        ; Exact mapped bytes 76 05: jbe 0x58752d5c
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 16 9F 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x9f
        __asm _emit 0x22
        __asm _emit 0x00
        mov edi, dword ptr [esi]
        mov edi, edi
        mov ebp, dword ptr [esi + 10h]
        cmp dword ptr [esi + 0ch], ebp
        ; Exact mapped bytes 76 05: jbe 0x58752d6d
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 05 9F 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x9f
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        test edi, edi
        ; Exact mapped bytes 74 04: je 0x58752d77
        __asm _emit 0x74
        __asm _emit 0x04
        cmp edi, eax
        ; Exact mapped bytes 74 05: je 0x58752d7c
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 F6 9E 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x9e
        __asm _emit 0x22
        __asm _emit 0x00
        cmp ebx, ebp
        ; Exact mapped bytes 74 62: je 0x58752de2
        __asm _emit 0x74
        __asm _emit 0x62
        test edi, edi
        ; Exact mapped bytes 75 3A: jne 0x58752dbe
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes E8 E9 9E 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58752d95
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 DD 9E 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x9e
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 75 29: jne 0x58752dc6
        __asm _emit 0x75
        __asm _emit 0x29
        test edi, edi
        ; Exact mapped bytes 75 21: jne 0x58752dc2
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes E8 CC 9E 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x9e
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58752db2
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 C0 9E 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x9e
        __asm _emit 0x22
        __asm _emit 0x00
        add ebx, 4
        ; Exact mapped bytes EB A9: jmp 0x58752d60
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov eax, dword ptr [edi]
        ; Exact mapped bytes E9 30 FF FF FF: jmp 0x58752cee
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi]
        ; Exact mapped bytes EB C9: jmp 0x58752d8b
        __asm _emit 0xeb
        __asm _emit 0xc9
        mov eax, dword ptr [edi]
        ; Exact mapped bytes EB E2: jmp 0x58752da8
        __asm _emit 0xeb
        __asm _emit 0xe2
        test edi, edi
        ; Exact mapped bytes 75 22: jne 0x58752dec
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes E8 A3 9E 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x9e
        __asm _emit 0x22
        __asm _emit 0x00
        cmp ebx, dword ptr [edi + 10h]
        ; Exact mapped bytes 72 05: jb 0x58752dd9
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 99 9E 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x9e
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        push 1
        ; Exact mapped bytes E8 FE EE 0C 00: call 0x58821ce0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xee
        __asm _emit 0x0c
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 28h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [edi]
        ; Exact mapped bytes EB DF: jmp 0x58752dcf
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov edi, dword ptr [esi + 0ch]
        cmp edi, dword ptr [esi + 10h]
        ; Exact mapped bytes 76 05: jbe 0x58752dfd
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 75 9E 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x9e
        __asm _emit 0x22
        __asm _emit 0x00
        mov ebx, dword ptr [esi]
        mov dword ptr [esp + 20h], ebx
        mov ebp, edi
        mov edi, dword ptr [esi + 10h]
        cmp dword ptr [esi + 0ch], edi
        ; Exact mapped bytes 76 05: jbe 0x58752e12
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 60 9E 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x9e
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        test ebx, ebx
        ; Exact mapped bytes 74 04: je 0x58752e1c
        __asm _emit 0x74
        __asm _emit 0x04
        cmp ebx, eax
        ; Exact mapped bytes 74 05: je 0x58752e21
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 51 9E 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x9e
        __asm _emit 0x22
        __asm _emit 0x00
        cmp ebp, edi
        ; Exact mapped bytes 74 BD: je 0x58752de2
        __asm _emit 0x74
        __asm _emit 0xbd
        test ebx, ebx
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x58752ec2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 40 9E 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x9e
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp ebp, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58752e3e
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 34 9E 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x9e
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        cmp ecx, dword ptr [esp + 3ch]
        ; Exact mapped bytes 0F 85 47 01 00 00: jne 0x58752f92
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 75 7A: jne 0x58752ec9
        __asm _emit 0x75
        __asm _emit 0x7a
        ; Exact mapped bytes E8 1E 9E 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x9e
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp ebp, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58752e60
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 12 9E 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x9e
        __asm _emit 0x22
        __asm _emit 0x00
        cmp dword ptr [esp + 10h], 0
        mov edx, dword ptr [ebp]
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x58752f0f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 10h]
        push 0
        mov ecx, ebx
        ; Exact mapped bytes E8 61 EE 0C 00: call 0x58821ce0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xee
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, dword ptr [esp + 1ch]
        mov eax, dword ptr [esi + 10h]
        lea ecx, [edi + 4]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        ; Exact mapped bytes 7E 10: jle 0x58752ea2
        __asm _emit 0x7e
        __asm _emit 0x10
        add eax, eax
        add eax, eax
        push eax
        push ecx
        push eax
        push edi
        ; Exact mapped bytes E8 B5 9D 22 00: call 0x5897cc54
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x9d
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 10h
        add dword ptr [esi + 10h], -4
        mov eax, dword ptr [esi + 10h]
        cmp dword ptr [esi + 0ch], edi
        ; Exact mapped bytes 77 04: ja 0x58752eb2
        __asm _emit 0x77
        __asm _emit 0x04
        cmp edi, eax
        ; Exact mapped bytes 76 05: jbe 0x58752eb7
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 BB 9D 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x9d
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 75 0F: jne 0x58752ecd
        __asm _emit 0x75
        __asm _emit 0x0f
        xor eax, eax
        ; Exact mapped bytes EB 13: jmp 0x58752ed5
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebx]
        ; Exact mapped bytes E9 6B FF FF FF: jmp 0x58752e34
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx]
        ; Exact mapped bytes EB 89: jmp 0x58752e56
        __asm _emit 0xeb
        __asm _emit 0x89
        mov eax, dword ptr [esi + 14h]
        sub eax, ecx
        sar eax, 2
        mov edi, dword ptr [esi + 10h]
        mov edx, edi
        sub edx, ecx
        sar edx, 2
        cmp edx, eax
        ; Exact mapped bytes 73 0A: jae 0x58752eed
        __asm _emit 0x73
        __asm _emit 0x0a
        mov dword ptr [edi], ebx
        add edi, 4
        mov dword ptr [esi + 10h], edi
        ; Exact mapped bytes EB 1E: jmp 0x58752f0b
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp ecx, edi
        ; Exact mapped bytes 76 05: jbe 0x58752ef6
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 7C 9D 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x9d
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        lea ecx, [esp + 10h]
        push ecx
        push edi
        push eax
        lea edx, [esp + 34h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 85 39 1A 00: call 0x588f6890
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x39
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 20h]
        mov eax, dword ptr [esi + 10h]
        lea ecx, [ebp + 4]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        ; Exact mapped bytes 7E 10: jle 0x58752f2e
        __asm _emit 0x7e
        __asm _emit 0x10
        add eax, eax
        add eax, eax
        push eax
        push ecx
        push eax
        push ebp
        ; Exact mapped bytes E8 29 9D 22 00: call 0x5897cc54
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x9d
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 10h
        add dword ptr [esi + 10h], -4
        mov eax, dword ptr [esi + 10h]
        cmp dword ptr [esi + 0ch], ebp
        ; Exact mapped bytes 77 04: ja 0x58752f3e
        __asm _emit 0x77
        __asm _emit 0x04
        cmp ebp, eax
        ; Exact mapped bytes 76 05: jbe 0x58752f43
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 2F 9D 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9d
        __asm _emit 0x22
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0ch]
        cmp edi, dword ptr [esi + 10h]
        ; Exact mapped bytes 76 05: jbe 0x58752f50
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 22 9D 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x9d
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        lea ecx, [esp + 14h]
        push ecx
        push edi
        push eax
        lea edx, [esp + 3ch]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 2B 39 1A 00: call 0x588f6890
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x39
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0ch]
        cmp edi, dword ptr [esi + 10h]
        ; Exact mapped bytes 76 05: jbe 0x58752f72
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 00 9D 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x9d
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 75 37: jne 0x58752faf
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes E8 F5 9C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x9c
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58752f89
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 E9 9C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 1
        ; Exact mapped bytes E8 4E ED 0C 00: call 0x58821ce0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xed
        __asm _emit 0x0c
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 75 1D: jne 0x58752fb3
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes E8 D7 9C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x9c
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp ebp, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58752fa7
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 CB 9C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x9c
        __asm _emit 0x22
        __asm _emit 0x00
        add ebp, 4
        ; Exact mapped bytes E9 56 FE FF FF: jmp 0x58752e05
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB CC: jmp 0x58752f7f
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov eax, dword ptr [ebx]
        ; Exact mapped bytes EB E6: jmp 0x58752f9d
        __asm _emit 0xeb
        __asm _emit 0xe6
    }
}
