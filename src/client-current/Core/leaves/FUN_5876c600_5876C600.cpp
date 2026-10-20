// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876C600 .. +0x233 bytes.
extern "C" __declspec(naked) void FUN_5876c600_5876C600() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888fef7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 38h
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
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 7A 8A D3 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x8a
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 129ch], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 03 31 D4 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x31
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 129ch], eax
        ; Exact mapped bytes 76 13: jbe 0x5876c66b
        __asm _emit 0x76
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 EA 30 D4 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x30
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 0C: jmp 0x5876c677
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 129ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 129ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 129ch]
        xor edx, 55555555h
        mov dword ptr [ebp - 18h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + eax + 12a0h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + ecx + 12a0h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 12a0h]
        xor ecx, 55555555h
        imul edx, ecx, 64h
        mov dword ptr [ebp - 24h], edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 05 CA FF FF: call 0x587690f0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 129ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AE 1A FF FF: call 0x5875e1b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 12ach], eax
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 12b0h], 0
        ; Exact mapped bytes 75 68: jne 0x5876c77f
        __asm _emit 0x75
        __asm _emit 0x68
        push 8ch
        ; Exact mapped bytes E8 E3 48 0C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x48
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 2B: je 0x5876c75f
        __asm _emit 0x74
        __asm _emit 0x2b
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 28h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        sub eax, 5ah
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 16 10 F0 FF: call 0x5866d770
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x10
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5876c766
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax + 12b0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12b0h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 B7 2F D4 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x2f
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 129ch]
        mov dword ptr [ebp - 30h], edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 2A 82 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x82
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        mov dword ptr [ebp - 34h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 8E 82 D1 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x82
        __asm _emit 0xd1
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 38h], eax
        push 0
        push 0
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 4C 13 F0 FF: call 0x5866db40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x13
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12b0h]
        mov dword ptr [ebp - 40h], ecx
        push 2710h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 73 96 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x96
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12b0h]
        mov dword ptr [ebp - 44h], eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 BD 96 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x96
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
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
