// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862D500 .. +0x32A bytes.
extern "C" __declspec(naked) void FUN_5862d500_5862D500() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 8B 02 00 00: jne 0x5862d79e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 130h]
        ; Exact mapped bytes 0F 85 FD 00 00 00: jne 0x5862d622
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 144h], 0
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x5862d601
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 05 38 05 96 58: movsx eax, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, 6
        ; Exact mapped bytes 0F 85 BA 00 00 00: jne 0x5862d5ff
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 74 E5 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x74
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x5862d5e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 74 E5 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x74
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 86 C0 EB FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 4fh
        ; Exact mapped bytes 75 74: jne 0x5862d5e3
        __asm _emit 0x75
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 120h]
        ; Exact mapped bytes E8 D3 8B F1 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x8b
        __asm _emit 0xf1
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 43: jne 0x5862d5c5
        __asm _emit 0x75
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 130h]
        mov dword ptr [edx + 278h], ecx
        ; Exact mapped bytes E8 57 9C EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x9c
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0f8h]
        ; Exact mapped bytes E8 76 F6 FF FF: call 0x5862cc20
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 139h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FE 41 EB FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x41
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5862d5e1
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 26 9C EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x9c
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 0
        push 219h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 90 B7 EA FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xb7
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5862d5ff
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 08 9C EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x9c
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 0
        push 4b8h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 72 B7 EA FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb7
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5862d61d
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 EA 9B EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x9b
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        push 0
        push 218h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 54 B7 EA FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb7
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 77 01 00 00: jmp 0x5862d799
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0f8h]
        ; Exact mapped bytes 75 60: jne 0x5862d690
        __asm _emit 0x75
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 11ch]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0f8h]
        ; Exact mapped bytes E8 76 35 19 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x35
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 37 3F 19 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x3f
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 120h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0f8h]
        ; Exact mapped bytes E8 4D 35 19 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x35
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 0E 3F 19 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x3f
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 06 0E 00 00: call 0x5862e490
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 09 01 00 00: jmp 0x5862d799
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 11ch]
        ; Exact mapped bytes 75 60: jne 0x5862d6fe
        __asm _emit 0x75
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 11ch]
        ; Exact mapped bytes E8 08 35 19 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x35
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 C9 3E 19 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x3e
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 11ch]
        ; Exact mapped bytes E8 DF 34 19 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x34
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A0 3E 19 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x3e
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 98 0D 00 00: call 0x5862e490
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x5862d799
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 120h]
        ; Exact mapped bytes 75 5D: jne 0x5862d769
        __asm _emit 0x75
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 120h]
        ; Exact mapped bytes E8 9A 34 19 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x34
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 5B 3E 19 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x3e
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 11ch]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 120h]
        ; Exact mapped bytes E8 71 34 19 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x34
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 32 3E 19 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x3e
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2A 0D 00 00: call 0x5862e490
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 30: jmp 0x5862d799
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 134h]
        ; Exact mapped bytes 75 0B: jne 0x5862d782
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C1 03 00 00: call 0x5862db40
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 17: jmp 0x5862d799
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 138h]
        ; Exact mapped bytes 75 09: jne 0x5862d799
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 58 03 00 00: call 0x5862daf0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x5862d824
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0f230h
        ; Exact mapped bytes 75 7D: jne 0x5862d824
        __asm _emit 0x75
        __asm _emit 0x7d
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 98 EA FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x98
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 75 6D: jne 0x5862d824
        __asm _emit 0x75
        __asm _emit 0x6d
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 7E 5F: jle 0x5862d824
        __asm _emit 0x7e
        __asm _emit 0x5f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 278h]
        cmp edx, dword ptr [ecx + 130h]
        ; Exact mapped bytes 75 4B: jne 0x5862d824
        __asm _emit 0x75
        __asm _emit 0x4b
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 45 FE: mov word ptr [ebp - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfe
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0f8h]
        ; Exact mapped bytes E8 5B 89 F1 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x89
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 20: mov dx, word ptr [eax + 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x20
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        mov eax, dword ptr [ebp + 10h]
        push eax
        movzx ecx, word ptr [ebp - 2]
        push ecx
        movzx edx, word ptr [ebp - 4]
        push edx
        push 0
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 07 F5 FF: call 0x5857dff0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 08 F5 FF: call 0x5857e030
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
