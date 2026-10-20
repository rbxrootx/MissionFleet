// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10012D80 .. +0x23D bytes.
extern "C" __declspec(naked) void FUN_10012d80_10012D80() {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov eax, dword ptr [ebx + 18h]
        mov ecx, dword ptr [ebx + 1ch]
        mov esi, dword ptr [esp + 18h]
        cmp eax, ecx
        push edi
        ; Exact mapped bytes 74 1D: je 0x10012db4
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [esi]
        cmp dword ptr [eax], edx
        ; Exact mapped bytes 75 0E: jne 0x10012dab
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edi, dword ptr [eax + 4]
        mov ebp, dword ptr [esi + 4]
        cmp edi, ebp
        ; Exact mapped bytes 0F 84 08 02 00 00: je 0x10012fb3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 808h
        cmp eax, ecx
        ; Exact mapped bytes 75 E5: jne 0x10012d99
        __asm _emit 0x75
        __asm _emit 0xe5
        mov ecx, dword ptr [ebx + 1ch]
        mov edx, dword ptr [ebx + 20h]
        add ebx, 14h
        sub edx, ecx
        mov eax, 7f807f81h
        mov ebp, ecx
        imul edx
        sar edx, 0ah
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 1
        ; Exact mapped bytes 0F 83 FE 00 00 00: jae 0x10012ed9
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 4]
        test esi, esi
        ; Exact mapped bytes 74 1C: je 0x10012dfe
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, ecx
        mov eax, 7f807f81h
        sub edx, esi
        imul edx
        sar edx, 0ah
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 1
        mov edi, edx
        ; Exact mapped bytes 77 05: ja 0x10012e03
        __asm _emit 0x77
        __asm _emit 0x05
        mov edi, 1
        test esi, esi
        ; Exact mapped bytes 75 04: jne 0x10012e0b
        __asm _emit 0x75
        __asm _emit 0x04
        xor edx, edx
        ; Exact mapped bytes EB 13: jmp 0x10012e1e
        __asm _emit 0xeb
        __asm _emit 0x13
        sub ecx, esi
        mov eax, 7f807f81h
        imul ecx
        sar edx, 0ah
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        lea eax, [edx + edi]
        test eax, eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 7D 02: jge 0x10012e2b
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        mov edx, eax
        shl edx, 8
        add edx, eax
        shl edx, 3
        push edx
        ; Exact mapped bytes E8 65 99 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x15
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 4]
        add esp, 4
        cmp esi, ebp
        mov dword ptr [esp + 14h], eax
        mov edi, eax
        ; Exact mapped bytes 74 1A: je 0x10012e65
        __asm _emit 0x74
        __asm _emit 0x1a
        push esi
        push edi
        ; Exact mapped bytes E8 7E 03 00 00: call 0x100131d0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 808h
        add esp, 8
        add edi, 808h
        cmp esi, ebp
        ; Exact mapped bytes 75 E6: jne 0x10012e4b
        __asm _emit 0x75
        __asm _emit 0xe6
        mov eax, dword ptr [esp + 1ch]
        mov ecx, ebx
        push eax
        push 1
        push edi
        ; Exact mapped bytes E8 FC 02 00 00: call 0x10013170
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 8]
        add edi, 808h
        push edi
        push ecx
        push ebp
        mov ecx, ebx
        ; Exact mapped bytes E8 79 02 00 00: call 0x10013100
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 8]
        mov eax, dword ptr [ebx + 4]
        push edx
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 3A BD 08 00: call 0x1009ebd0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xbd
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 4]
        push ecx
        ; Exact mapped bytes E8 E5 98 15 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x98
        __asm _emit 0x15
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        mov esi, dword ptr [esp + 18h]
        mov edx, eax
        add esp, 4
        shl edx, 8
        add edx, eax
        mov ecx, ebx
        lea eax, [esi + edx*8]
        mov dword ptr [ebx + 0ch], eax
        ; Exact mapped bytes E8 12 02 00 00: call 0x100130d0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        inc eax
        mov dword ptr [ebx + 4], esi
        mov ecx, eax
        pop edi
        shl ecx, 8
        add ecx, eax
        lea edx, [esi + ecx*8]
        pop esi
        mov dword ptr [ebx + 8], edx
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, ecx
        mov eax, 7f807f81h
        sub edx, ebp
        imul edx
        sar edx, 0ah
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 1
        ; Exact mapped bytes 73 5B: jae 0x10012f4e
        __asm _emit 0x73
        __asm _emit 0x5b
        lea edx, [ebp + 808h]
        push edx
        push ecx
        push ebp
        mov ecx, ebx
        ; Exact mapped bytes E8 FD 01 00 00: call 0x10013100
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebx + 8]
        mov eax, 7f807f81h
        mov ecx, edi
        push esi
        sub ecx, ebp
        imul ecx
        sar edx, 0ah
        mov eax, edx
        mov ecx, 1
        shr eax, 1fh
        add edx, eax
        sub ecx, edx
        push ecx
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 44 02 00 00: call 0x10013170
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 8]
        cmp ebp, eax
        ; Exact mapped bytes 74 79: je 0x10012fac
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes EB 04: jmp 0x10012f39
        __asm _emit 0xeb
        __asm _emit 0x04
        mov esi, dword ptr [esp + 1ch]
        mov edi, ebp
        add ebp, 808h
        mov ecx, 202h
        cmp ebp, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 75 E9: jne 0x10012f35
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes EB 5E: jmp 0x10012fac
        __asm _emit 0xeb
        __asm _emit 0x5e
        push ecx
        push ecx
        add ecx, 0fffff7f8h
        push ecx
        mov ecx, ebx
        ; Exact mapped bytes E8 A2 01 00 00: call 0x10013100
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 8]
        lea eax, [edx - 808h]
        cmp ebp, eax
        ; Exact mapped bytes 74 1E: je 0x10012f89
        __asm _emit 0x74
        __asm _emit 0x1e
        sub eax, 808h
        sub edx, 808h
        mov ecx, 202h
        mov esi, eax
        mov edi, edx
        cmp eax, ebp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 75 E6: jne 0x10012f6b
        __asm _emit 0x75
        __asm _emit 0xe6
        mov esi, dword ptr [esp + 1ch]
        lea eax, [ebp + 808h]
        cmp ebp, eax
        ; Exact mapped bytes 74 19: je 0x10012fac
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes EB 04: jmp 0x10012f99
        __asm _emit 0xeb
        __asm _emit 0x04
        mov esi, dword ptr [esp + 1ch]
        mov edi, ebp
        add ebp, 808h
        mov ecx, 202h
        cmp ebp, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 75 E9: jne 0x10012f95
        __asm _emit 0x75
        __asm _emit 0xe9
        add dword ptr [ebx + 8], 808h
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
