// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58561C50 .. +0x14D bytes.
extern "C" __declspec(naked) void FUN_58561c50_58561C50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588836eah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1e0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ech], ecx
        movzx eax, byte ptr [ebp + 0ch]
        push eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        push 588a94c4h
        lea edx, [ebp - 90h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        lea eax, [ebp - 1d0h]
        push eax
        lea ecx, [ebp - 90h]
        push ecx
        ; Exact mapped bytes E8 9D 23 25 00: call 0x587b4050
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x23
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 1e0h], eax
        cmp dword ptr [ebp - 1e0h], -1
        ; Exact mapped bytes 75 07: jne 0x58561cc9
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x58561d82
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 8
        ; Exact mapped bytes E8 34 F3 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf3
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e4h], eax
        mov edx, dword ptr [ebp - 1e4h]
        mov dword ptr [ebp - 1d4h], edx
        push 8
        push 0
        mov eax, dword ptr [ebp - 1d4h]
        push eax
        ; Exact mapped bytes E8 1B B1 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xb1
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 1d4h]
        mov dl, byte ptr [ebp + 8]
        mov byte ptr [ecx + 4], dl
        mov eax, dword ptr [ebp - 1d4h]
        mov cl, byte ptr [ebp + 0ch]
        mov byte ptr [eax + 5], cl
        push 198h
        ; Exact mapped bytes E8 EA F2 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf2
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1d8h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1d8h], 0
        ; Exact mapped bytes 74 1E: je 0x58561d51
        __asm _emit 0x74
        __asm _emit 0x1e
        push 1
        push 0
        lea edx, [ebp - 90h]
        push edx
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 67 E6 21 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe6
        __asm _emit 0x21
        __asm _emit 0x00
        mov dword ptr [ebp - 1dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58561d5b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1dch], 0
        mov eax, dword ptr [ebp - 1dch]
        mov dword ptr [ebp - 1e8h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 1d4h]
        mov edx, dword ptr [ebp - 1e8h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 1d4h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 B9 F2 2C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf2
        __asm _emit 0x2c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
