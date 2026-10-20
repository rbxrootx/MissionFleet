// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858C1C .. +0x12F bytes.
extern "C" __declspec(naked) void FUN_58858c1c_58858C1C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov esi, dword ptr [ebp + 10h]
        test esi, esi
        ; Exact mapped bytes 79 17: jns 0x58858c43
        __asm _emit 0x79
        __asm _emit 0x17
        ; Exact mapped bytes E8 3E 98 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 6F 83 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 05 01 00 00: jmp 0x58858d48
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [ebp + 8]
        test ebx, ebx
        ; Exact mapped bytes 74 2D: je 0x58858c78
        __asm _emit 0x74
        __asm _emit 0x2d
        push ebx
        ; Exact mapped bytes E8 F4 01 00 00: call 0x58858e45
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 2D: jne 0x58858c83
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes E8 FF 97 00 00: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 0fh
        ; Exact mapped bytes E8 09 98 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 0dh
        ; Exact mapped bytes E8 3A 83 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 CF 00 00 00: jmp 0x58858d47
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 24 72 01 00: call 0x5886fea1
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 74 13: je 0x58858c96
        __asm _emit 0x74
        __asm _emit 0x13
        add bl, 40h
        ; Exact mapped bytes 66 C7 45 FD 3A 2E: mov word ptr [ebp - 3], 0x2e3a
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfd
        __asm _emit 0x3a
        __asm _emit 0x2e
        xor eax, eax
        mov byte ptr [ebp - 4], bl
        mov byte ptr [ebp - 1], al
        ; Exact mapped bytes EB 08: jmp 0x58858c9e
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 66 C7 45 FC 2E 00: mov word ptr [ebp - 4], 0x2e
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x2e
        __asm _emit 0x00
        xor eax, eax
        push edi
        mov edi, dword ptr [ebp + 0ch]
        test edi, edi
        ; Exact mapped bytes 75 5C: jne 0x58858d02
        __asm _emit 0x75
        __asm _emit 0x5c
        push esi
        lea ecx, [ebp - 1ch]
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov byte ptr [ebp - 8], al
        ; Exact mapped bytes E8 CB 00 00 00: call 0x58858d8c
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1ch]
        push eax
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes E8 8D FD FF FF: call 0x58858a5b
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 1D: jne 0x58858cf1
        __asm _emit 0x75
        __asm _emit 0x1d
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 0D 01 00 00: call 0x58858de9
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp - 8], 0
        mov esi, eax
        ; Exact mapped bytes 74 09: je 0x58858ced
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 14 09 00 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov eax, esi
        ; Exact mapped bytes EB 55: jmp 0x58858d46
        __asm _emit 0xeb
        __asm _emit 0x55
        cmp byte ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1F: je 0x58858d16
        __asm _emit 0x74
        __asm _emit 0x1f
        push dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 01 09 00 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes EB 14: jmp 0x58858d16
        __asm _emit 0xeb
        __asm _emit 0x14
        test esi, esi
        ; Exact mapped bytes 7F 14: jg 0x58858d1a
        __asm _emit 0x7f
        __asm _emit 0x14
        ; Exact mapped bytes E8 64 97 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 95 82 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 2C: jmp 0x58858d46
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov byte ptr [edi], al
        mov dword ptr [ebp - 0ch], eax
        mov byte ptr [ebp - 8], al
        lea eax, [ebp - 1ch]
        push eax
        lea eax, [ebp - 4]
        mov dword ptr [ebp - 1ch], edi
        push eax
        mov dword ptr [ebp - 18h], esi
        mov dword ptr [ebp - 14h], edi
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 19 FC FF FF: call 0x58858954
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        xor ecx, ecx
        test eax, eax
        cmove ecx, edi
        mov eax, ecx
        pop edi
        pop ebx
        pop esi
        leave
        ret
    }
}
