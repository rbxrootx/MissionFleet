// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58862460 .. +0x241 bytes.
extern "C" __declspec(naked) void FUN_58862460() {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esi + 118h], ebp
        test ebp, ebp
        ; Exact mapped bytes 7E 79: jle 0x588624ed
        __asm _emit 0x7e
        __asm _emit 0x79
        xor ebx, ebx
        lea edi, [esi + 6e8h]
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov eax, dword ptr [esi + 4]
        lea ecx, [ebx + eax + 0fh]
        push ecx
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 4A 0E 0A 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x0e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [edi - 28h]
        lea eax, [ebx + edx + 5]
        push eax
        ; Exact mapped bytes E8 3A 0E 0A 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x0e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        lea edx, [ebx + ecx + 5]
        mov ecx, dword ptr [edi - 3ch]
        push edx
        ; Exact mapped bytes E8 2A 0E 0A 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x0e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        lea ecx, [ebx + eax + 8]
        push ecx
        mov ecx, dword ptr [edi - 14h]
        ; Exact mapped bytes E8 1A 0E 0A 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x0e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [edi - 14h]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [edi - 6ch]
        lea eax, [ebx + edx + 5]
        push eax
        ; Exact mapped bytes E8 02 0E 0A 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x0e
        __asm _emit 0x0a
        __asm _emit 0x00
        add edi, 4
        add ebx, 27h
        sub ebp, 1
        ; Exact mapped bytes 75 97: jne 0x58862480
        __asm _emit 0x75
        __asm _emit 0x97
        mov ebp, dword ptr [esp + 14h]
        cmp ebp, 5
        ; Exact mapped bytes 7D 6D: jge 0x5886255f
        __asm _emit 0x7d
        __asm _emit 0x6d
        mov ebx, 5
        lea edi, [esi + ebp*4 + 6e8h]
        sub ebx, ebp
        mov eax, dword ptr [edi]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [edi]
        push 500h
        ; Exact mapped bytes E8 C9 0D 0A 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi - 28h]
        push 500h
        ; Exact mapped bytes E8 BC 0D 0A 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi - 3ch]
        push 500h
        ; Exact mapped bytes E8 AF 0D 0A 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi - 14h]
        push 500h
        ; Exact mapped bytes E8 A2 0D 0A 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [edi - 14h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [edi - 6ch]
        push 500h
        ; Exact mapped bytes E8 89 0D 0A 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 A1: jne 0x58862500
        __asm _emit 0x75
        __asm _emit 0xa1
        xor ebp, ebp
        lea edi, [esi + 5f4h]
        lea ebx, [ebp + 4]
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 118h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi - 10h]
        push eax
        mov dword ptr [edi], eax
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 4F F0 F3 FF: call 0x587a15e0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xf0
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [edi]
        xor edx, 0aah
        ; Exact mapped bytes 74 05: je 0x588625a0
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, 1
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 C8: jne 0x58862570
        __asm _emit 0x75
        __asm _emit 0xc8
        mov eax, dword ptr [esi + 70ch]
        mov edi, 1
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 700h]
        push edi
        ; Exact mapped bytes E8 9D 4D 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x4d
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 100ch]
        movzx eax, word ptr [edx + 10h]
        mov ecx, dword ptr [esi + 708h]
        and eax, 0ffh
        push eax
        ; Exact mapped bytes E8 7A 4D 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x4d
        __asm _emit 0x0a
        __asm _emit 0x00
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 52 F9 FF FF: call 0x58861f40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 71ch]
        test ebp, ebp
        ; Exact mapped bytes 74 51: je 0x58862649
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 720h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 724h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 740h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 754h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 758h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 744h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov esi, dword ptr [esi + 748h]
        ; Exact mapped bytes 66 09 7E 24: or word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7e
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 720h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 724h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 740h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 754h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 758h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 744h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [esi + 748h]
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
