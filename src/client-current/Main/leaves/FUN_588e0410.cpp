// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E0410 .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_588e0410() {
    __asm {
        push ecx
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        mov ebp, ecx
        cmp dword ptr [eax + 4], ebp
        ; Exact mapped bytes 0F 85 BF 00 00 00: jne 0x588e04e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 B3 00 00 00: je 0x588e04e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [eax + 2cch]
        push ebx
        push esi
        mov esi, dword ptr [ebp + 1458h]
        push edi
        mov dword ptr [esp + 18h], 0
        mov dword ptr [esp + 10h], ecx
        cmp esi, dword ptr [ebp + 145ch]
        ; Exact mapped bytes 76 05: jbe 0x588e0457
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 1B C8 09 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 144ch]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 145ch]
        cmp dword ptr [ebp + 1458h], ebx
        ; Exact mapped bytes 76 05: jbe 0x588e0473
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 FF C7 09 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 144ch]
        test edi, edi
        ; Exact mapped bytes 74 04: je 0x588e0481
        __asm _emit 0x74
        __asm _emit 0x04
        cmp edi, eax
        ; Exact mapped bytes 74 05: je 0x588e0486
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 EC C7 09 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        cmp esi, ebx
        ; Exact mapped bytes 74 4B: je 0x588e04d5
        __asm _emit 0x74
        __asm _emit 0x4b
        test edi, edi
        ; Exact mapped bytes 75 3F: jne 0x588e04cd
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes E8 DF C7 09 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        xor eax, eax
        cmp esi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x588e049f
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 D3 C7 09 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 44 24 10: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 39 82 CC 02 00 00: cmp word ptr [edx + 0x2cc], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x588e04b3
        __asm _emit 0x75
        __asm _emit 0x04
        inc dword ptr [esp + 18h]
        test edi, edi
        ; Exact mapped bytes 75 1A: jne 0x588e04d1
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 B6 C7 09 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        xor eax, eax
        cmp esi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x588e04c8
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 AA C7 09 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        add esi, 4
        ; Exact mapped bytes EB 93: jmp 0x588e0460
        __asm _emit 0xeb
        __asm _emit 0x93
        mov eax, dword ptr [edi]
        ; Exact mapped bytes EB C4: jmp 0x588e0495
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov eax, dword ptr [edi]
        ; Exact mapped bytes EB E9: jmp 0x588e04be
        __asm _emit 0xeb
        __asm _emit 0xe9
        mov eax, dword ptr [esp + 18h]
        pop edi
        pop esi
        pop ebx
        pop ebp
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        pop ebp
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
