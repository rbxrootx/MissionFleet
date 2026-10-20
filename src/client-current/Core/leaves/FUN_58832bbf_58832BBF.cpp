// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58832BBF .. +0x409 bytes.
extern "C" __declspec(naked) void FUN_58832bbf_58832BBF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 234h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push edi
        mov edi, dword ptr [ebp + 8]
        test edi, edi
        ; Exact mapped bytes 0F 84 DB 03 00 00: je 0x58832fb9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [edi], 0
        ; Exact mapped bytes 0F 84 D2 03 00 00: je 0x58832fb9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        mov esi, 104h
        lea eax, [ebp - 108h]
        push esi
        push 0
        push eax
        ; Exact mapped bytes E8 13 A2 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        push esi
        lea eax, [ebp - 20ch]
        push 0
        push eax
        ; Exact mapped bytes E8 04 A2 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 588f1b80h
        mov dword ptr [ebp - 218h], 588f1ba4h
        mov ebx, 588f1b8ch
        mov dword ptr [ebp - 224h], eax
        mov esi, 588f1b98h
        mov dword ptr [ebp - 220h], ebx
        push eax
        mov dword ptr [ebp - 21ch], esi
        mov dword ptr [ebp - 214h], 588f1bb0h
        mov dword ptr [ebp - 210h], 588f1bbch
        ; Exact mapped bytes E8 88 9A 00 00: call 0x5883c6d9
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes E8 82 9A 00 00: call 0x5883c6d9
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 7C 9A 00 00: call 0x5883c6d9
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f1ba4h
        ; Exact mapped bytes E8 72 9A 00 00: call 0x5883c6d9
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f1bb0h
        ; Exact mapped bytes E8 68 9A 00 00: call 0x5883c6d9
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f1bbch
        ; Exact mapped bytes E8 5E 9A 00 00: call 0x5883c6d9
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        add esp, 30h
        add eax, -2
        and dword ptr [ebp - 234h], 0
        mov dword ptr [ebp - 22ch], eax
        lea eax, [ebp - 224h]
        mov dword ptr [ebp - 228h], eax
        or ebx, 0ffffffffh
        cmp ebx, -1
        ; Exact mapped bytes 75 20: jne 0x58832cc5
        __asm _emit 0x75
        __asm _emit 0x20
        push dword ptr [eax]
        push edi
        push 588f1bc8h
        ; Exact mapped bytes E8 A1 96 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 A0 9E CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x9e
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB 1F: jmp 0x58832ce4
        __asm _emit 0xeb
        __asm _emit 0x1f
        push ebx
        push dword ptr [eax]
        push edi
        push 588f1bd8h
        ; Exact mapped bytes E8 80 96 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 7F 9E CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x9e
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 14h
        push 0
        push 0
        push 3
        push 0
        push 0
        push 0c0000000h
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 00 42 89 58: call dword ptr [0x58894200]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push esi
        mov dword ptr [ebp - 230h], eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 230h]
        cmp eax, 20h
        ; Exact mapped bytes 0F 84 4C 02 00 00: je 0x58832f70
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 10: je 0x58832d39
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 228h]
        inc ebx
        cmp ebx, 63h
        ; Exact mapped bytes 0F 8E 67 FF FF FF: jle 0x58832ca0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 234h]
        mov eax, dword ptr [ebp - 228h]
        inc ecx
        add eax, 4
        mov dword ptr [ebp - 234h], ecx
        mov dword ptr [ebp - 228h], eax
        cmp ecx, 6
        ; Exact mapped bytes 0F 8C 3F FF FF FF: jl 0x58832c9d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 22ch]
        xor eax, eax
        mov dword ptr [ebp - 228h], eax
        mov ebx, ecx
        cmp ecx, -1
        ; Exact mapped bytes 0F 8C E9 01 00 00: jl 0x58832f60
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        or esi, 0ffffffffh
        cmp ebx, -1
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x58832e0c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, ebx
        ; Exact mapped bytes 75 3F: jne 0x58832dc6
        __asm _emit 0x75
        __asm _emit 0x3f
        push dword ptr [ebp + eax*4 - 224h]
        push edi
        push 588f1bc8h
        ; Exact mapped bytes E8 BA 95 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 B9 9D CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x9d
        __asm _emit 0xcd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 228h]
        add esp, 10h
        push dword ptr [ebp + eax*4 - 224h]
        lea eax, [ebx + 1]
        push eax
        push edi
        push 588f1be8h
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x58832e4c
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push dword ptr [ebp + eax*4 - 224h]
        push edi
        push 588f1bd8h
        ; Exact mapped bytes E8 7A 95 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 79 9D CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x9d
        __asm _emit 0xcd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 228h]
        add esp, 14h
        push esi
        push dword ptr [ebp + eax*4 - 224h]
        lea eax, [ebx + 1]
        push eax
        push edi
        push 588f1c18h
        ; Exact mapped bytes E8 4C 95 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x58832ea6
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, -1
        ; Exact mapped bytes 75 53: jne 0x58832e64
        __asm _emit 0x75
        __asm _emit 0x53
        push dword ptr [ebp + eax*4 - 224h]
        push ebx
        push edi
        push 588f1bf8h
        ; Exact mapped bytes E8 2F 95 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 2E 9D CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x9d
        __asm _emit 0xcd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 228h]
        add esp, 14h
        push dword ptr [ebp + eax*4 - 224h]
        lea eax, [ebx + 1]
        push eax
        push edi
        push 588f1c08h
        ; Exact mapped bytes E8 02 95 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [ebp - 20ch]
        push eax
        ; Exact mapped bytes E8 01 9D CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x9d
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes EB 53: jmp 0x58832eb7
        __asm _emit 0xeb
        __asm _emit 0x53
        push esi
        push dword ptr [ebp + eax*4 - 224h]
        push ebx
        push edi
        push 588f1c2ch
        ; Exact mapped bytes E8 61 98 00 00: call 0x5883c6d9
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 DA 9C CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x9c
        __asm _emit 0xcd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 228h]
        add esp, 18h
        push esi
        push dword ptr [ebp + eax*4 - 224h]
        lea eax, [ebx + 1]
        push eax
        push edi
        push 588f1c40h
        ; Exact mapped bytes E8 33 98 00 00: call 0x5883c6d9
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [ebp - 20ch]
        push eax
        ; Exact mapped bytes E8 AC 9C CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x9c
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 18h
        xor eax, eax
        push eax
        push eax
        push 3
        push eax
        push eax
        push 0c0000000h
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 00 42 89 58: call dword ptr [0x58894200]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 230h], eax
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 230h]
        cmp eax, -1
        ; Exact mapped bytes 74 62: je 0x58832f4a
        __asm _emit 0x74
        __asm _emit 0x62
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp ebx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes 74 36: je 0x58832f2d
        __asm _emit 0x74
        __asm _emit 0x36
        push 1
        lea eax, [ebp - 20ch]
        push eax
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 04 44 89 58: call dword ptr [0x58894404]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x58832f3a
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        lea eax, [ebp - 20ch]
        push eax
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 2C 41 89 58: call dword ptr [0x5889412c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 04 43 89 58: call dword ptr [0x58894304]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 228h]
        inc esi
        cmp esi, 63h
        ; Exact mapped bytes 0F 8E 30 FE FF FF: jle 0x58832d7a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 228h]
        dec ebx
        cmp ebx, -1
        ; Exact mapped bytes 0F 8D 1D FE FF FF: jge 0x58832d77
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 22ch]
        inc eax
        mov dword ptr [ebp - 228h], eax
        cmp eax, 6
        ; Exact mapped bytes 0F 8C FC FD FF FF: jl 0x58832d6c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 588f1b80h
        ; Exact mapped bytes E8 DC 97 00 00: call 0x5883c756
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp], 588f1b8ch
        ; Exact mapped bytes E8 D0 97 00 00: call 0x5883c756
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp], 588f1b98h
        ; Exact mapped bytes E8 C4 97 00 00: call 0x5883c756
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp], 588f1ba4h
        ; Exact mapped bytes E8 B8 97 00 00: call 0x5883c756
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp], 588f1bb0h
        ; Exact mapped bytes E8 AC 97 00 00: call 0x5883c756
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp], 588f1bbch
        ; Exact mapped bytes E8 A0 97 00 00: call 0x5883c756
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop edi
        ; Exact mapped bytes E8 8C E0 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
