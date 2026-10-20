// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A5380 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_587a5380() {
    __asm {
        sub esp, 8
        cmp dword ptr [esp + 0ch], 0
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x587a5435
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        lea ebx, [ecx + 4]
        push edi
        mov edi, dword ptr [ebx + 0ch]
        cmp edi, dword ptr [ebx + 10h]
        ; Exact mapped bytes 76 05: jbe 0x587a53a0
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 D2 78 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x78
        __asm _emit 0x1d
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [ebx]
        push ebp
        mov ebp, dword ptr [ebx + 10h]
        cmp dword ptr [ebx + 0ch], ebp
        ; Exact mapped bytes 76 05: jbe 0x587a53b1
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 C1 78 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x78
        __asm _emit 0x1d
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x587a53bb
        __asm _emit 0x74
        __asm _emit 0x04
        cmp esi, eax
        ; Exact mapped bytes 74 05: je 0x587a53c0
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 B2 78 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x78
        __asm _emit 0x1d
        __asm _emit 0x00
        cmp edi, ebp
        ; Exact mapped bytes 74 6D: je 0x587a5431
        __asm _emit 0x74
        __asm _emit 0x6d
        test esi, esi
        ; Exact mapped bytes 75 33: jne 0x587a53fb
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes E8 A5 78 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x78
        __asm _emit 0x1d
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x587a53d9
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 99 78 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x78
        __asm _emit 0x1d
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 1ch]
        cmp ebp, dword ptr [edi]
        ; Exact mapped bytes 74 22: je 0x587a5403
        __asm _emit 0x74
        __asm _emit 0x22
        test esi, esi
        ; Exact mapped bytes 75 1A: jne 0x587a53ff
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 88 78 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x1d
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x587a53f6
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 7C 78 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x78
        __asm _emit 0x1d
        __asm _emit 0x00
        add edi, 4
        ; Exact mapped bytes EB A9: jmp 0x587a53a4
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB D0: jmp 0x587a53cf
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB E9: jmp 0x587a53ec
        __asm _emit 0xeb
        __asm _emit 0xe9
        mov ecx, ebp
        ; Exact mapped bytes E8 16 D8 15 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd8
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, ebp
        ; Exact mapped bytes E8 5F D8 15 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xd8
        __asm _emit 0x15
        __asm _emit 0x00
        push edi
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 45 24: and word ptr [ebp + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x45
        __asm _emit 0x24
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 4D 24: and word ptr [ebp + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4d
        __asm _emit 0x24
        push esi
        lea edx, [esp + 18h]
        push edx
        mov ecx, ebx
        ; Exact mapped bytes E8 4F 45 0A 00: call 0x58849980
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x45
        __asm _emit 0x0a
        __asm _emit 0x00
        pop ebp
        pop esi
        pop edi
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
