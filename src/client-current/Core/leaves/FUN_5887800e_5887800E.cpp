// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887800E .. +0x1F0 bytes.
extern "C" __declspec(naked) void FUN_5887800e_5887800E() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 18h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0ch]
        push ebx
        mov ebx, dword ptr [ebp + 10h]
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes E8 6C 0B FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 50h
        lea edi, [ebp - 10h]
        mov dword ptr [ebp - 14h], eax
        xor eax, eax
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes E8 59 0B FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        xor edx, edx
        mov dword ptr [eax + 34ch], ecx
        lea ecx, [esi + 80h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], esi
        lea edi, [eax + 4]
        mov dword ptr [edi], ecx
        test ecx, ecx
        ; Exact mapped bytes 74 1F: je 0x58878085
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 66 39 11: cmp word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x11
        ; Exact mapped bytes 74 1A: je 0x58878085
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes A1 34 A2 8C 58: mov eax, dword ptr [0x588ca234]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0xa2
        __asm _emit 0x8c
        __asm _emit 0x58
        push edi
        dec eax
        push eax
        push 588ca120h
        ; Exact mapped bytes E8 2A FF FF FF: call 0x58877fa7
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        add esp, 0ch
        xor edx, edx
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [eax]
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x588780f8
        __asm _emit 0x74
        __asm _emit 0x6a
        ; Exact mapped bytes 66 39 10: cmp word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 74 65: je 0x588780f8
        __asm _emit 0x74
        __asm _emit 0x65
        mov eax, dword ptr [edi]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x588780a9
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 39 10: cmp word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 74 0B: je 0x588780a9
        __asm _emit 0x74
        __asm _emit 0x0b
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 E6 F8 FF FF: call 0x5887798d
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 09: jmp 0x588780b2
        __asm _emit 0xeb
        __asm _emit 0x09
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 76 F9 FF FF: call 0x58877a28
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], 0
        pop ecx
        ; Exact mapped bytes 75 69: jne 0x58878122
        __asm _emit 0x75
        __asm _emit 0x69
        ; Exact mapped bytes A1 1C A1 8C 58: mov eax, dword ptr [0x588ca11c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0xa1
        __asm _emit 0x8c
        __asm _emit 0x58
        push dword ptr [ebp - 14h]
        dec eax
        push eax
        push 588c9e10h
        ; Exact mapped bytes E8 DA FE FF FF: call 0x58877fa7
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test al, al
        ; Exact mapped bytes 74 4E: je 0x58878122
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [edi]
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x588780ed
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 66 39 38: cmp word ptr [eax], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x38
        ; Exact mapped bytes 74 0C: je 0x588780ed
        __asm _emit 0x74
        __asm _emit 0x0c
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 A3 F8 FF FF: call 0x5887798d
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB 37: jmp 0x58878124
        __asm _emit 0xeb
        __asm _emit 0x37
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 32 F9 FF FF: call 0x58877a28
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB F2: jmp 0x588780ea
        __asm _emit 0xeb
        __asm _emit 0xf2
        mov eax, dword ptr [edi]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5887810f
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 66 39 10: cmp word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 74 0C: je 0x5887810f
        __asm _emit 0x74
        __asm _emit 0x0c
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 36 F8 FF FF: call 0x58877942
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB 13: jmp 0x58878122
        __asm _emit 0xeb
        __asm _emit 0x13
        mov dword ptr [ebp - 10h], 104h
        ; Exact mapped bytes FF 15 A4 41 89 58: call dword ptr [0x588941a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 0ch], eax
        xor edi, edi
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 BF 00 00 00: je 0x588781ed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        lea eax, [esi + 100h]
        neg esi
        sbb esi, esi
        and esi, eax
        push esi
        ; Exact mapped bytes E8 E8 FC FF FF: call 0x58877e2c
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x588781ed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, si
        push ecx
        ; Exact mapped bytes FF 15 88 41 89 58: call dword ptr [0x58894188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x588781ed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 15 A8 41 89 58: call dword ptr [0x588941a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 7C: je 0x588781ed
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 18h]
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x5887817a
        __asm _emit 0x74
        __asm _emit 0x02
        mov dword ptr [eax], esi
        mov eax, dword ptr [ebp - 14h]
        push edi
        push 55h
        add eax, 250h
        push eax
        push dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E9 76 FF FF: call 0x5886f877
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        test ebx, ebx
        ; Exact mapped bytes 74 56: je 0x588781e8
        __asm _emit 0x74
        __asm _emit 0x56
        push edi
        push 55h
        lea eax, [ebx + 120h]
        push eax
        push dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D3 76 FF FF: call 0x5886f877
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        push 40h
        push ebx
        push 1001h
        push dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 15 AC 41 89 58: call dword ptr [0x588941ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x588781ed
        __asm _emit 0x74
        __asm _emit 0x34
        push 40h
        lea eax, [ebx + 80h]
        push eax
        push 1002h
        push dword ptr [ebp - 8]
        ; Exact mapped bytes FF 15 AC 41 89 58: call dword ptr [0x588941ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x588781ed
        __asm _emit 0x74
        __asm _emit 0x19
        push 0ah
        push 10h
        lea ecx, [ebx + 100h]
        push ecx
        push esi
        ; Exact mapped bytes E8 75 E5 FD FF: call 0x5885675a
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        xor eax, eax
        inc eax
        ; Exact mapped bytes EB 02: jmp 0x588781ef
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 54 8E FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8e
        __asm _emit 0xfb
        __asm _emit 0xff
        leave
        ret
    }
}
