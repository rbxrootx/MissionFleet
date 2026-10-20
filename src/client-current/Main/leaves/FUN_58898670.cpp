// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58898670 .. +0x1BB bytes.
extern "C" __declspec(naked) void FUN_58898670() {
    __asm {
        sub esp, 2ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 28h], eax
        push ebx
        push ebp
        xor eax, eax
        push esi
        mov esi, dword ptr [esp + 3ch]
        push edi
        lea edi, [esi + esi*2]
        add edi, edi
        mov ebx, ecx
        add edi, edi
        mov dword ptr [esp + 19h], eax
        mov dword ptr [esp + 1dh], eax
        mov dword ptr [esp + 21h], eax
        mov dword ptr [esp + 25h], eax
        mov dword ptr [esp + 29h], eax
        mov dword ptr [esp + 2dh], eax
        mov dword ptr [esp + 31h], eax
        ; Exact mapped bytes 66 89 44 24 35: mov word ptr [esp + 0x35], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x35
        mov byte ptr [esp + 37h], al
        xor ebp, ebp
        add edi, edi
        lea eax, [ebx + 0a4h]
        mov byte ptr [esp + 18h], 0
        mov dword ptr [esp + 14h], edi
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 148h]
        sub ecx, dword ptr [ebx + 144h]
        mov eax, 2aaaaaabh
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        cmp esi, ecx
        ; Exact mapped bytes 72 05: jb 0x588986f6
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 7C 45 0E 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x45
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 144h]
        mov ecx, dword ptr [eax + edi + 10h]
        sub ecx, dword ptr [eax + edi + 0ch]
        add eax, edi
        mov eax, 92492493h
        imul ecx
        add edx, ecx
        mov ecx, dword ptr [ebx + 118h]
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        add ecx, ebp
        cmp ecx, eax
        ; Exact mapped bytes 0F 83 9A 00 00 00: jae 0x588987c3
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 148h]
        sub ecx, dword ptr [ebx + 144h]
        mov eax, 2aaaaaabh
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp esi, eax
        ; Exact mapped bytes 72 05: jb 0x5889874f
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 23 45 0E 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x45
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 144h]
        mov ecx, dword ptr [esi + edi + 10h]
        sub ecx, dword ptr [esi + edi + 0ch]
        add esi, edi
        mov edi, dword ptr [ebx + 118h]
        mov eax, 92492493h
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 1fh
        add edi, ebp
        add ecx, edx
        cmp edi, ecx
        ; Exact mapped bytes 72 05: jb 0x58898783
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 EF 44 0E 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x44
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ch]
        lea edx, [edi*8]
        sub edx, edi
        cmp dword ptr [eax + edx*4 + 18h], 10h
        lea eax, [eax + edx*4]
        ; Exact mapped bytes 72 15: jb 0x588987ae
        __asm _emit 0x72
        __asm _emit 0x15
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [esp + 10h]
        mov ecx, dword ptr [ecx]
        push eax
        ; Exact mapped bytes E8 38 95 E9 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x95
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edi, dword ptr [esp + 14h]
        ; Exact mapped bytes EB 55: jmp 0x58898803
        __asm _emit 0xeb
        __asm _emit 0x55
        mov ecx, dword ptr [esp + 10h]
        mov ecx, dword ptr [ecx]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 23 95 E9 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x95
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edi, dword ptr [esp + 14h]
        ; Exact mapped bytes EB 40: jmp 0x58898803
        __asm _emit 0xeb
        __asm _emit 0x40
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [edx]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x58898807
        __asm _emit 0x74
        __asm _emit 0x37
        lea edx, [esp + 18h]
        mov esi, 80h
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x588987fb
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x588987fb
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x588987e0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x588987ff
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x58898800
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov esi, dword ptr [esp + 40h]
        add dword ptr [esp + 10h], 4
        inc ebp
        cmp ebp, 0fh
        ; Exact mapped bytes 0F 8C BA FE FF FF: jl 0x588986d0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 38h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 B5 43 0E 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x43
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 2ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
