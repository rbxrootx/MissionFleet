// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586BD250 .. +0x12F bytes.
extern "C" __declspec(naked) void FUN_586bd250_586BD250() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 34h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 0ch
        push ecx
        ; Exact mapped bytes E8 0B 3F 19 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x3f
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 77 79: ja 0x586bd2f5
        __asm _emit 0x77
        __asm _emit 0x79
        xor edx, edx
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], edx
        push 4
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 F1 F5 18 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf5
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 0ch
        movzx edx, word ptr [ebp - 26h]
        push edx
        movzx eax, word ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 94 E3 FF: call 0x584f66d0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x94
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 35: je 0x586bd2f5
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 14h
        push ecx
        ; Exact mapped bytes E8 B4 3E 19 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x3e
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 76 22: jbe 0x586bd2f5
        __asm _emit 0x76
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 24h]
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        shr ecx, 0ah
        and ecx, 3fffffh
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 18 EC FF: call 0x5857eb40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x18
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 24h]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 98 E3 FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 9E E1 FF: call 0x584d71d0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x9e
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, ax
        mov edx, dword ptr [ebp - 2ch]
        movzx eax, byte ptr [edx + 35ch]
        cmp ecx, eax
        ; Exact mapped bytes 75 20: jne 0x586bd346
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        push eax
        push 1
        push 1
        push 0
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED 7E EE FF: call 0x585a5230
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x7e
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 20: jmp 0x586bd366
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0b8h
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB 41 0C 00: call 0x58781560
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x41
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 B2 86 00 00: call 0x586c5a20
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 D7 3C 17 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x3c
        __asm _emit 0x17
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
