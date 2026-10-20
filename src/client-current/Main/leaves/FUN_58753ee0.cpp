// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58753EE0 .. +0x1A0 bytes.
extern "C" __declspec(naked) void FUN_58753ee0() {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        lea ebx, [ecx + 4]
        push edi
        mov edi, dword ptr [ebx + 0ch]
        mov dword ptr [esp + 10h], ecx
        cmp edi, dword ptr [ebx + 10h]
        ; Exact mapped bytes 76 05: jbe 0x58753efb
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 77 8D 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x8d
        __asm _emit 0x22
        __asm _emit 0x00
        mov esi, dword ptr [ebx]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ebp, dword ptr [ebx + 10h]
        cmp dword ptr [ebx + 0ch], ebp
        ; Exact mapped bytes 76 05: jbe 0x58753f0d
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 65 8D 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8d
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x58753f17
        __asm _emit 0x74
        __asm _emit 0x04
        cmp esi, eax
        ; Exact mapped bytes 74 05: je 0x58753f1c
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 56 8D 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x8d
        __asm _emit 0x22
        __asm _emit 0x00
        cmp edi, ebp
        ; Exact mapped bytes 74 6F: je 0x58753f8f
        __asm _emit 0x74
        __asm _emit 0x6f
        test esi, esi
        ; Exact mapped bytes 75 51: jne 0x58753f75
        __asm _emit 0x75
        __asm _emit 0x51
        ; Exact mapped bytes E8 49 8D 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x8d
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58753f35
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 3D 8D 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x8d
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [esp + 20h]
        cmp dword ptr [edi], eax
        ; Exact mapped bytes 75 1E: jne 0x58753f5b
        __asm _emit 0x75
        __asm _emit 0x1e
        test esi, esi
        ; Exact mapped bytes 75 38: jne 0x58753f79
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes E8 2C 8D 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x8d
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58753f52
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 20 8D 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x8d
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 24h]
        cmp dword ptr [edi + 4], ecx
        ; Exact mapped bytes 74 26: je 0x58753f81
        __asm _emit 0x74
        __asm _emit 0x26
        test esi, esi
        ; Exact mapped bytes 75 1E: jne 0x58753f7d
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes E8 0E 8D 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x8d
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58753f70
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 02 8D 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x8d
        __asm _emit 0x22
        __asm _emit 0x00
        add edi, 48h
        ; Exact mapped bytes EB 8B: jmp 0x58753f00
        __asm _emit 0xeb
        __asm _emit 0x8b
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB B2: jmp 0x58753f2b
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB CB: jmp 0x58753f48
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB E5: jmp 0x58753f66
        __asm _emit 0xeb
        __asm _emit 0xe5
        push edi
        push esi
        lea edx, [esp + 1ch]
        push edx
        mov ecx, ebx
        ; Exact mapped bytes E8 E1 FD FF FF: call 0x58753d70
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 10h]
        mov ebp, dword ptr [ebx + 28h]
        cmp ebp, dword ptr [ebx + 2ch]
        ; Exact mapped bytes 76 05: jbe 0x58753fa0
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 D2 8C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x8c
        __asm _emit 0x22
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 1ch]
        mov edi, dword ptr [ebx + 2ch]
        cmp dword ptr [ebx + 28h], edi
        ; Exact mapped bytes 76 05: jbe 0x58753fb0
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 C2 8C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x8c
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 1ch]
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x58753fbb
        __asm _emit 0x74
        __asm _emit 0x04
        cmp esi, eax
        ; Exact mapped bytes 74 05: je 0x58753fc0
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 B2 8C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x8c
        __asm _emit 0x22
        __asm _emit 0x00
        cmp ebp, edi
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x58754076
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 75 55: jne 0x58754021
        __asm _emit 0x75
        __asm _emit 0x55
        ; Exact mapped bytes E8 A1 8C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x8c
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp ebp, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58753fdd
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 95 8C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [esp + 20h]
        cmp dword ptr [ebp], eax
        ; Exact mapped bytes 75 1E: jne 0x58754004
        __asm _emit 0x75
        __asm _emit 0x1e
        test esi, esi
        ; Exact mapped bytes 75 3B: jne 0x58754025
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes E8 83 8C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x8c
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp ebp, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58753ffb
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 77 8C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x8c
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 24h]
        cmp dword ptr [ebp + 4], ecx
        ; Exact mapped bytes 74 29: je 0x5875402d
        __asm _emit 0x74
        __asm _emit 0x29
        test esi, esi
        ; Exact mapped bytes 75 21: jne 0x58754029
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes E8 65 8C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8c
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp ebp, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58754019
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 59 8C 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x8c
        __asm _emit 0x22
        __asm _emit 0x00
        add ebp, 808h
        ; Exact mapped bytes EB 82: jmp 0x58753fa3
        __asm _emit 0xeb
        __asm _emit 0x82
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB AE: jmp 0x58753fd3
        __asm _emit 0xeb
        __asm _emit 0xae
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB C8: jmp 0x58753ff1
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB E2: jmp 0x5875400f
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov ebx, dword ptr [ebx + 2ch]
        lea eax, [ebp + 808h]
        cmp eax, ebx
        ; Exact mapped bytes 74 20: je 0x5875405a
        __asm _emit 0x74
        __asm _emit 0x20
        lea edx, [eax - 808h]
        mov esi, eax
        mov edi, edx
        add eax, 808h
        mov ecx, 202h
        add edx, 808h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        cmp eax, ebx
        ; Exact mapped bytes 75 E6: jne 0x58754040
        __asm _emit 0x75
        __asm _emit 0xe6
        mov eax, dword ptr [esp + 10h]
        add dword ptr [eax + 2ch], 0fffff7f8h
        mov ecx, dword ptr [eax + 2ch]
        cmp dword ptr [eax + 28h], ebp
        ; Exact mapped bytes 77 04: ja 0x58754071
        __asm _emit 0x77
        __asm _emit 0x04
        cmp ebp, ecx
        ; Exact mapped bytes 76 05: jbe 0x58754076
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 FC 8B 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x8b
        __asm _emit 0x22
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
