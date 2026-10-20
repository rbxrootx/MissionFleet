// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D69B .. +0x159 bytes.
extern "C" __declspec(naked) void FUN_0045d69b_0045D69B() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ea6ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 40h], ecx
        mov dword ptr [ebp - 3ch], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 3C 76 0C 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x76
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 C5 DE 0E 00: call 0x54b59f
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xde
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 29: jne 0x45d708
        __asm _emit 0x75
        __asm _emit 0x29
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F EE 06 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xee
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        or ecx, 1
        mov dword ptr [ebp - 3ch], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 EC F1 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf1
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 D9 00 00 00: jmp 0x45d7e1
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 8F DE 0E 00: call 0x54b59f
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xde
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 17: je 0x45d72c
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 2E EE FF FF: call 0x45c556
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 51: jne 0x45d77d
        __asm _emit 0x75
        __asm _emit 0x51
        push 0f099h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 47 C5 07 00: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc5
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x45d751
        __asm _emit 0x75
        __asm _emit 0x14
        push 895h
        push 678664h
        ; Exact mapped bytes E8 F4 B5 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb5
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45d751
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x45d72c
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B7 ED 06 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xed
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3ch]
        or edx, 1
        mov dword ptr [ebp - 3ch], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 74 F1 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf1
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 64: jmp 0x45d7e1
        __asm _emit 0xeb
        __asm _emit 0x64
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 BC F0 FF FF: call 0x45c842
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        push 80h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 B4 FA 06 00: call 0x4cd247
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfa
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BA 75 0C 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x75
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 00 E7 00 00: call 0x46beb0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        push -1
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 16 FA 06 00: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xfa
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 51 ED 06 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xed
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3ch]
        or edx, 1
        mov dword ptr [ebp - 3ch], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 0E F1 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xf1
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
