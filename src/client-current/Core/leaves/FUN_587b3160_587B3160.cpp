// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B3160 .. +0x18E bytes.
extern "C" __declspec(naked) void FUN_587b3160_587B3160() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 230h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 220h], 0
        push 200h
        push 0
        lea eax, [ebp - 204h]
        push eax
        ; Exact mapped bytes E8 80 9C 09 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        push 588bd9a4h
        push 200h
        lea ecx, [ebp - 204h]
        push ecx
        push 58895250h
        push 588bd9b4h
        push 588bd9bch
        ; Exact mapped bytes FF 15 BC 42 89 58: call dword ptr [0x588942bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 58895250h
        lea edx, [ebp - 204h]
        push edx
        lea ecx, [ebp - 21ch]
        ; Exact mapped bytes E8 FF 68 CF FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x68
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        mov eax, dword ptr [ebp - 230h]
        push eax
        ; Exact mapped bytes E8 7D BB D6 FF: call 0x5851ed60
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xbb
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        mov byte ptr [ebp - 221h], al
        lea ecx, [ebp - 21ch]
        ; Exact mapped bytes E8 39 6B CF FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x6b
        __asm _emit 0xcf
        __asm _emit 0xff
        movzx ecx, byte ptr [ebp - 221h]
        test ecx, ecx
        ; Exact mapped bytes 74 26: je 0x587b3228
        __asm _emit 0x74
        __asm _emit 0x26
        lea edx, [ebp - 204h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BF 68 CF FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 220h]
        or eax, 1
        mov dword ptr [ebp - 220h], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x587b32e4
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 22ch]
        push ecx
        ; Exact mapped bytes E8 DC CA D6 FF: call 0x5851fd10
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xca
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp - 22ch], 9
        ; Exact mapped bytes 75 26: jne 0x587b3266
        __asm _emit 0x75
        __asm _emit 0x26
        push 588bd9c8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 83 68 CF FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x68
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 220h]
        or edx, 1
        mov dword ptr [ebp - 220h], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x587b32e4
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 5F: jmp 0x587b32c5
        __asm _emit 0xeb
        __asm _emit 0x5f
        cmp dword ptr [ebp - 22ch], 4
        ; Exact mapped bytes 75 56: jne 0x587b32c5
        __asm _emit 0x75
        __asm _emit 0x56
        cmp dword ptr [ebp - 228h], 2
        ; Exact mapped bytes 75 23: jne 0x587b329b
        __asm _emit 0x75
        __asm _emit 0x23
        push 588bd9d0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4B 68 CF FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x68
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 220h]
        or eax, 1
        mov dword ptr [ebp - 220h], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 4B: jmp 0x587b32e4
        __asm _emit 0xeb
        __asm _emit 0x4b
        ; Exact mapped bytes EB 2A: jmp 0x587b32c5
        __asm _emit 0xeb
        __asm _emit 0x2a
        cmp dword ptr [ebp - 228h], 1
        ; Exact mapped bytes 75 21: jne 0x587b32c5
        __asm _emit 0x75
        __asm _emit 0x21
        push 588bd9d8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1F 68 CF FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x68
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 220h]
        or ecx, 1
        mov dword ptr [ebp - 220h], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 1F: jmp 0x587b32e4
        __asm _emit 0xeb
        __asm _emit 0x1f
        push 588bd9c8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FE 67 CF FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x67
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 220h]
        or edx, 1
        mov dword ptr [ebp - 220h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 62 DD 07 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xdd
        __asm _emit 0x07
        __asm _emit 0x00
    }
}
