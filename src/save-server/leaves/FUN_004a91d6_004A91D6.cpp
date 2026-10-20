// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A91D6 .. +0x155 bytes.
extern "C" __declspec(naked) void FUN_004a91d6_004A91D6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 05 14 6A 68 00: cmp eax, dword ptr [0x686a14]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 74 1D: je 0x4a920a
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FA 7C 06 00: call 0x510eff
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 18 01 00 00: jmp 0x4a9322
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x4a9224
        __asm _emit 0x75
        __asm _emit 0x14
        push 85h
        push 672a58h
        ; Exact mapped bytes E8 21 FB 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfb
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a9224
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4a920a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4a924a
        __asm _emit 0x75
        __asm _emit 0x14
        push 87h
        push 672a58h
        ; Exact mapped bytes E8 FB FA 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xfa
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a924a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4a9230
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        sub ecx, 485h
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 3
        ; Exact mapped bytes 0F 87 AF 00 00 00: ja 0x4a931d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 24 95 2B 93 4A 00: jmp dword ptr [edx*4 + 0x4a932b]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x2b
        __asm _emit 0x93
        __asm _emit 0x4a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        sub esp, 8
        mov ecx, esp
        mov edx, dword ptr [eax + 0ch]
        push edx
        mov eax, dword ptr [eax + 8]
        push eax
        ; Exact mapped bytes E8 F0 8B 08 00: call 0x531e7d
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x8b
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 DC 00 00 00: call dword ptr [edx + 0xdc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 7B: jmp 0x4a931d
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 4]
        sub esp, 8
        mov ecx, esp
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov edx, dword ptr [edx + 8]
        push edx
        ; Exact mapped bytes E8 C6 8B 08 00: call 0x531e7d
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x8b
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 E0 00 00 00: call dword ptr [edx + 0xe0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 56: jmp 0x4a931d
        __asm _emit 0xeb
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 4]
        sub esp, 8
        mov ecx, esp
        mov edx, dword ptr [eax + 0ch]
        push edx
        mov eax, dword ptr [eax + 8]
        push eax
        ; Exact mapped bytes E8 A1 8B 08 00: call 0x531e7d
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x8b
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 E4 00 00 00: call dword ptr [edx + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 2C: jmp 0x4a931d
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 4]
        sub esp, 8
        mov ecx, esp
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov edx, dword ptr [edx + 8]
        push edx
        ; Exact mapped bytes E8 77 8B 08 00: call 0x531e7d
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x8b
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 44 50 08 00: call 0x52e352
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
