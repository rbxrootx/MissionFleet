// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050428A .. +0x212 bytes.
extern "C" __declspec(naked) void FUN_0050428a_0050428A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 40h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 9A F8 FF FF: call 0x503b3c
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 05: jne 0x5042b0
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 E3 01 00 00: jmp 0x504493
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D F0 E8 5D 00 00: cmp dword ptr [0x5de8f0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 24: jne 0x5042dd
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 6C 21 5E 00: call dword ptr [0x5e216c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, 6
        ; Exact mapped bytes 74 12: je 0x5042dd
        __asm _emit 0x74
        __asm _emit 0x12
        push 5c70b8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 43 08 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 B6 01 00 00: jmp 0x504493
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 3ch]
        push ecx
        push 3ch
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 E1 24 03 00: call 0x5367cc
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x504303
        __asm _emit 0x75
        __asm _emit 0x14
        push 4f9h
        push 5c6db0h
        ; Exact mapped bytes E8 02 07 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504303
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x5042dd
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 3ch]
        push eax
        push 5c70cch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 01 08 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DE 09 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        push 5c70dch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 07 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C6 09 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        push edx
        push 5c70ech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D1 07 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AE 09 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        push eax
        push 5c7100h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B9 07 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 96 09 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        push 5c7118h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 07 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7E 09 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        and edx, 0ffh
        push edx
        push 5c7128h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 83 07 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C8 09 03 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 27h]
        and eax, 0ffh
        push eax
        push 5c7138h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 66 07 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AB 09 03 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 26h]
        and ecx, 0ffh
        push ecx
        push 5c714ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 48 07 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8D 09 03 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 25h]
        and edx, 0ffh
        push edx
        push 5c7160h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2A 07 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6F 09 03 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        and eax, 0ffh
        push eax
        push 5c7174h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0D 07 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 52 09 03 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 23h]
        and ecx, 0ffh
        push ecx
        push 5c718ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EF 06 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 34 09 03 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 22h]
        and edx, 0ffh
        push edx
        push 5c71a4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D1 06 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 16 09 03 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 21h]
        and eax, 0ffh
        push eax
        push 5c71b8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B4 06 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F9 08 03 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        push ecx
        push 5c71d0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9C 06 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 95 06 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        push 5c71e4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 06 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
