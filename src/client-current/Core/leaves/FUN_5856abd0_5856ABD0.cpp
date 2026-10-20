// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856ABD0 .. +0x12A bytes.
extern "C" __declspec(naked) void FUN_5856abd0_5856ABD0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58883954h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 28h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 232h]
        cmp ecx, 640h
        ; Exact mapped bytes 7E 4A: jle 0x5856ac54
        __asm _emit 0x7e
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 232h]
        cmp eax, 0c80h
        ; Exact mapped bytes 7E 2A: jle 0x5856ac45
        __asm _emit 0x7e
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 232h]
        cmp edx, 12c0h
        ; Exact mapped bytes 7E 09: jle 0x5856ac36
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 3
        ; Exact mapped bytes EB 07: jmp 0x5856ac3d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 2
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5856ac4c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x5856ac5b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes 83 3D D4 35 90 58 00: cmp dword ptr [0x589035d4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 77: je 0x5856ace1
        __asm _emit 0x74
        __asm _emit 0x77
        push 20h
        ; Exact mapped bytes E8 93 63 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x63
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 3E: je 0x5856acc2
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes E8 E3 5F 2E 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x5f
        __asm _emit 0x2e
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5856ac95
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        mov ecx, dword ptr [ebp - 28h]
        lea edx, [eax + ecx*2 + 30h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes 8B 0D 10 07 96 58: mov ecx, dword ptr [0x58960710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 9D F1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x9d
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 63 2D 00 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5856acc9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 34h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 60h], ecx
        ; Exact mapped bytes EB 0A: jmp 0x5856aceb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 60h], 0
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
        mov esp, ebp
        pop ebp
        ret
    }
}
