// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58775E40 .. +0x210 bytes.
extern "C" __declspec(naked) void FUN_58775e40() {
    __asm {
        sub esp, 10h
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr [ebp + 80h]
        sub ecx, dword ptr [ebp + 7ch]
        mov eax, 51eb851fh
        sar ecx, 3
        mul ecx
        shr edx, 4
        inc edx
        push esi
        push edi
        mov dword ptr [esp + 14h], edx
        cmp edx, 0ah
        ; Exact mapped bytes 73 08: jae 0x58775e71
        __asm _emit 0x73
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0ah
        mov ebx, dword ptr [ebp + 7ch]
        cmp ebx, dword ptr [ebp + 80h]
        ; Exact mapped bytes 76 05: jbe 0x58775e81
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 F1 6D 20 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x6d
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 80h]
        sub edx, dword ptr [ebp + 7ch]
        mov ecx, dword ptr [esp + 2ch]
        mov eax, dword ptr [ecx]
        mov edi, dword ptr [ebp + 70h]
        sar edx, 3
        mov dword ptr [esp + 18h], edi
        mov dword ptr [esp + 1ch], ebx
        cmp eax, edx
        ; Exact mapped bytes 73 14: jae 0x58775eb6
        __asm _emit 0x73
        __asm _emit 0x14
        push eax
        lea ecx, [esp + 1ch]
        ; Exact mapped bytes E8 94 60 FC FF: call 0x5873bf40
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x60
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 1ch]
        mov edi, dword ptr [esp + 18h]
        ; Exact mapped bytes EB 0A: jmp 0x58775ec0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ecx], 0
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 80h]
        cmp dword ptr [ebp + 7ch], esi
        ; Exact mapped bytes 76 05: jbe 0x58775ed0
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 A2 6D 20 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x6d
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 70h]
        test edi, edi
        ; Exact mapped bytes 74 04: je 0x58775edb
        __asm _emit 0x74
        __asm _emit 0x04
        cmp edi, eax
        ; Exact mapped bytes 74 05: je 0x58775ee0
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 92 6D 20 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x6d
        __asm _emit 0x20
        __asm _emit 0x00
        cmp ebx, esi
        ; Exact mapped bytes 0F 84 5C 01 00 00: je 0x58776044
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 14h], 0
        ; Exact mapped bytes 0F 86 51 01 00 00: jbe 0x58776044
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        inc dword ptr [eax]
        test edi, edi
        ; Exact mapped bytes 0F 85 00 01 00 00: jne 0x58776001
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6C 6D 20 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x6d
        __asm _emit 0x20
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58775f12
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 60 6D 20 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x6d
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        cmp dword ptr [eax + 460h], 0
        ; Exact mapped bytes 0F 85 BF 00 00 00: jne 0x58775fe0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 85 DF 00 00 00: jne 0x58776008
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 44 6D 20 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x6d
        __asm _emit 0x20
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58775f3a
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 38 6D 20 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x6d
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 4]
        cmp byte ptr [ecx + 354h], 0
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x58775fe0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 85 BD 00 00 00: jne 0x5877600f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1B 6D 20 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x6d
        __asm _emit 0x20
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58775f63
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 0F 6D 20 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x6d
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, dword ptr [ebx]
        mov ecx, dword ptr [esp + 24h]
        mov eax, dword ptr [edx + 500h]
        mov esi, dword ptr [ecx]
        sub esi, dword ptr [eax + 4]
        test edi, edi
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x58776016
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F1 6C 20 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58775f8d
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 E5 6C 20 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, dword ptr [ebx]
        mov ecx, dword ptr [edx + 500h]
        mov edx, dword ptr [esp + 24h]
        mov eax, dword ptr [edx + 4]
        sub eax, dword ptr [ecx + 8]
        mov edx, esi
        mov ecx, eax
        imul edx, esi
        imul ecx, eax
        add ecx, edx
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes E8 D8 6C 20 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes D9 7C 24 10: fnstcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        movzx eax, word ptr [esp + 10h]
        or eax, 0c00h
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes D9 6C 24 18: fldcw word ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DF 7C 24 18: fistp qword ptr [esp + 0x18]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        mov eax, dword ptr [esp + 18h]
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        cmp dword ptr [esp + 28h], eax
        ; Exact mapped bytes 77 41: ja 0x58776021
        __asm _emit 0x77
        __asm _emit 0x41
        dec dword ptr [esp + 14h]
        test edi, edi
        ; Exact mapped bytes 75 35: jne 0x5877601d
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes E8 85 6C 20 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58775ff9
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 79 6C 20 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x00
        add ebx, 8
        ; Exact mapped bytes E9 BF FE FF FF: jmp 0x58775ec0
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi]
        ; Exact mapped bytes E9 00 FF FF FF: jmp 0x58775f08
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi]
        ; Exact mapped bytes E9 21 FF FF FF: jmp 0x58775f30
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi]
        ; Exact mapped bytes E9 43 FF FF FF: jmp 0x58775f59
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi]
        ; Exact mapped bytes E9 66 FF FF FF: jmp 0x58775f83
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi]
        ; Exact mapped bytes EB CE: jmp 0x58775fef
        __asm _emit 0xeb
        __asm _emit 0xce
        test edi, edi
        ; Exact mapped bytes 75 1B: jne 0x58776040
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 48 6C 20 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x00
        cmp ebx, dword ptr [edi + 10h]
        ; Exact mapped bytes 72 05: jb 0x58776034
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 3E 6C 20 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, dword ptr [edi]
        ; Exact mapped bytes EB E6: jmp 0x5877602a
        __asm _emit 0xeb
        __asm _emit 0xe6
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
