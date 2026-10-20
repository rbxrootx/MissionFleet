// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58839D3E .. +0x17E bytes.
extern "C" __declspec(naked) void FUN_58839d3e_58839D3E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 408h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov esi, ecx
        mov dword ptr [ebp - 408h], edi
        ; Exact mapped bytes E8 DC 24 00 00: call 0x5883c240
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        cmp byte ptr [esi], bl
        ; Exact mapped bytes 0F 84 34 01 00 00: je 0x58839ea2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F6 05 E8 83 96 58 01: test byte ptr [0x589683e8], 1
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 75 5F: jne 0x58839dd6
        __asm _emit 0x75
        __asm _emit 0x5f
        push 400h
        lea eax, [ebp - 404h]
        push ebx
        push eax
        ; Exact mapped bytes E8 87 30 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 404h]
        push ebx
        push ebx
        push 400h
        push eax
        push -1
        push edi
        push ebx
        push 0fde9h
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 404h]
        push eax
        ; Exact mapped bytes FF 35 C8 7D 96 58: push dword ptr [0x58967dc8]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        lea edi, [esi + 28h]
        ; Exact mapped bytes FF 35 B8 7D 96 58: push dword ptr [0x58967db8]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xb8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        push 588f0f04h
        ; Exact mapped bytes E8 8A 25 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push edi
        ; Exact mapped bytes E8 B9 02 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes EB 24: jmp 0x58839dfa
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes FF 35 C8 7D 96 58: push dword ptr [0x58967dc8]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        lea edi, [esi + 28h]
        ; Exact mapped bytes FF 35 B8 7D 96 58: push dword ptr [0x58967db8]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xb8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        push 588f0f1ch
        ; Exact mapped bytes E8 64 25 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push edi
        ; Exact mapped bytes E8 93 02 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        push dword ptr [ebp - 408h]
        ; Exact mapped bytes E8 8B F4 01 00: call 0x58859290
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        add eax, eax
        mov ecx, 400h
        cmp eax, ecx
        ; Exact mapped bytes 7C 1A: jl 0x58839e2b
        __asm _emit 0x7c
        __asm _emit 0x1a
        push eax
        push 588f0f30h
        ; Exact mapped bytes E8 37 25 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push edi
        ; Exact mapped bytes E8 66 02 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor al, al
        ; Exact mapped bytes EB 7E: jmp 0x58839ea9
        __asm _emit 0xeb
        __asm _emit 0x7e
        push -1
        push dword ptr [ebp - 408h]
        lea edi, [esi + 1898h]
        push ecx
        push edi
        ; Exact mapped bytes E8 30 C1 02 00: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes 66 39 1F: cmp word ptr [edi], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x1f
        ; Exact mapped bytes 74 20: je 0x58839e68
        __asm _emit 0x74
        __asm _emit 0x20
        push ebx
        push ebx
        push 400h
        lea eax, [esi + 1498h]
        push eax
        push edi
        ; Exact mapped bytes E8 34 F4 01 00: call 0x58859290
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        inc eax
        push eax
        push edi
        push ebx
        push ebx
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 39 1D B8 7D 96 58: cmp dword ptr [0x58967db8], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xb8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 0F: je 0x58839e7f
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 39 1D C8 7D 96 58: cmp dword ptr [0x58967dc8], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xc8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 07: je 0x58839e7f
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 78 B7 FF FF: call 0x588355f7
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 408h]
        lea ecx, [esi + 22c4h]
        mov dword ptr [esi + 22c0h], ebx
        push 61eh
        push 8b1h
        ; Exact mapped bytes E8 7C 39 00 00: call 0x5883d81c
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov bl, al
        ; Exact mapped bytes E8 B3 23 00 00: call 0x5883c25a
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, bl
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 9A 71 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
