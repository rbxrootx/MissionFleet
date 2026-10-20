// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054DAF3 .. +0x16B bytes.
extern "C" __declspec(naked) void FUN_0054daf3_0054DAF3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x54db22
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 33 01 00 00: jmp 0x54dc55
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 E9 FE FF FF: call 0x54da1b
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 13 01 00 00: je 0x54dc52
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 DC 00 00 00: jne 0x54dc33
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 0F 85 D2 00 00 00: jne 0x54dc33
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        lea edx, [ebp - 20h]
        push edx
        push 0
        ; Exact mapped bytes FF 15 F4 C2 68 00: call dword ptr [0x68c2f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 85 B2 00 00 00: jne 0x54dc33
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 0
        lea eax, [ebp - 2ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 50 50: call dword ptr [eax + 0x50]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x50
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x54dbb6
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 35: jmp 0x54dbeb
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 F0 B8 68 00: call dword ptr [0x68b8f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [eax + eax + 2]
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 CC 83 F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x83
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], esp
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 E8 B1 F0 FF: call 0x458dd0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 1D: jne 0x54dc14
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 17: je 0x54dc14
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 13: je 0x54dc2d
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov dword ptr [ebp - 20h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E1: jne 0x54dc14
        __asm _emit 0x75
        __asm _emit 0xe1
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 13: je 0x54dc4c
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 0ch], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E1: jne 0x54dc33
        __asm _emit 0x75
        __asm _emit 0xe1
        mov eax, dword ptr [ebp - 10h]
        lea esp, [ebp - 34h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
