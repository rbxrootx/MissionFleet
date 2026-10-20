// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004EAD0 .. +0x1C9 bytes.
extern "C" __declspec(naked) void FUN_1004ead0_1004EAD0() {
    __asm {
        sub esp, 0ch
        mov eax, dword ptr [ecx + 1b0h]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [eax + 4]
        test edi, edi
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 0F 84 A3 01 00 00: je 0x1004ec8f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 30h]
        mov esi, dword ptr [edi + 0ch]
        mov eax, dword ptr [esi + 0ach]
        test eax, eax
        ; Exact mapped bytes 0F 84 83 01 00 00: je 0x1004ec84
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esi]
        push ebp
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x1004ebb8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 18h]
        mov edx, dword ptr [ebx + 14h]
        mov eax, dword ptr [ebx + 10h]
        mov ebp, dword ptr [esp + 20h]
        push ecx
        mov ecx, dword ptr [ebx + 0ch]
        push edx
        mov edx, dword ptr [ebx + 8]
        push eax
        mov eax, dword ptr [ebx + 4]
        push ecx
        mov ecx, dword ptr [ebx]
        push edx
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 BF F8 FB FF: call 0x1000e400
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf8
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 62: je 0x1004eba7
        __asm _emit 0x74
        __asm _emit 0x62
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 24: call dword ptr [edx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x24
        test ebp, ebp
        ; Exact mapped bytes 74 0E: je 0x1004eb5e
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebx], 0bh
        ; Exact mapped bytes 75 09: jne 0x1004eb5e
        __asm _emit 0x75
        __asm _emit 0x09
        push 0bh
        mov ecx, ebp
        ; Exact mapped bytes E8 E2 07 0A 00: call 0x100ef340
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x07
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a4h]
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x1004eba7
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [esp + 10h]
        mov esi, dword ptr [edi + 8]
        test edi, edi
        mov ebp, dword ptr [eax + 1b0h]
        ; Exact mapped bytes 74 26: je 0x1004eb9f
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [edi + 4]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1004eb85
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [eax + 8], esi
        ; Exact mapped bytes EB 03: jmp 0x1004eb88
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [ebp + 4], esi
        test esi, esi
        ; Exact mapped bytes 74 05: je 0x1004eb91
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes EB 03: jmp 0x1004eb94
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [ebp + 8], eax
        mov edx, dword ptr [edi]
        push 1
        mov ecx, edi
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        dec dword ptr [ebp + 0ch]
        test esi, esi
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x1004ec8f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 DC 00 00 00: je 0x1004ec8f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x1004ec84
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esp + 24h]
        sub ecx, eax
        mov eax, dword ptr [esi + 8]
        sub eax, ebp
        mov edx, ecx
        imul eax, eax
        imul edx, ecx
        mov ecx, dword ptr [esp + 2ch]
        add eax, edx
        mov edx, ecx
        mov dword ptr [esp + 30h], eax
        imul edx, ecx
        cmp eax, edx
        ; Exact mapped bytes 0F 8D 9F 00 00 00: jge 0x1004ec84
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DB 44 24 30: fild dword ptr [esp + 0x30]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes DD 5C 24 14: fstp qword ptr [esp + 0x14]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 14h]
        push eax
        push ecx
        ; Exact mapped bytes E8 B0 DB 11 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xdb
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes E8 A5 DB 11 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xdb
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [esp + 34h]
        push eax
        mov eax, dword ptr [ebx + 8]
        push edx
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        ; Exact mapped bytes E8 0B 32 FD FF: call 0x10021e20
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x32
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 18h]
        mov edx, dword ptr [ebx]
        add esp, 14h
        push ecx
        push 0
        push -1
        push 2
        push eax
        mov eax, dword ptr [esp + 34h]
        push 0
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 CC F7 FB FF: call 0x1000e400
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf7
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x1004ec84
        __asm _emit 0x74
        __asm _emit 0x4c
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 24: call dword ptr [edx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a4h]
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x1004ec84
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [esp + 10h]
        mov esi, dword ptr [edi + 8]
        test edi, edi
        mov ebp, dword ptr [eax + 1b0h]
        ; Exact mapped bytes 74 26: je 0x1004ec80
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [edi + 4]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1004ec66
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [eax + 8], esi
        ; Exact mapped bytes EB 03: jmp 0x1004ec69
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [ebp + 4], esi
        test esi, esi
        ; Exact mapped bytes 74 05: je 0x1004ec72
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes EB 03: jmp 0x1004ec75
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [ebp + 8], eax
        mov edx, dword ptr [edi]
        push 1
        mov ecx, edi
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        dec dword ptr [ebp + 0ch]
        test esi, esi
        ; Exact mapped bytes 74 0B: je 0x1004ec8f
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edi, dword ptr [edi + 8]
        test edi, edi
        ; Exact mapped bytes 0F 85 61 FE FF FF: jne 0x1004eaf0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
