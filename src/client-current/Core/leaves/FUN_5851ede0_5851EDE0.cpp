// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851EDE0 .. +0x206 bytes.
extern "C" __declspec(naked) void FUN_5851ede0_5851EDE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588815ddh
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
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 FA 90 F6 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x90
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        xor ecx, ecx
        mov byte ptr [ebp - 0dh], cl
        lea edx, [ebp - 0dh]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 EC 34 F8 FF: call 0x584a2320
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x34
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 10h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 14h], 0fh
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 4], 0
        mov byte ptr [ebp - 11h], 0
        ; Exact mapped bytes EB 09: jmp 0x5851ee64
        __asm _emit 0xeb
        __asm _emit 0x09
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 5D 0D 00 00: call 0x5851fbc0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        lea edx, [ebp + 10h]
        push edx
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 AF FE FF FF: call 0x5851ed20
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 12 01 00 00: je 0x5851ef91
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 10h]
        cmp ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x5851ef51
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B7 B9 F8 FF: call 0x584aa850
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 10h], eax
        ; Exact mapped bytes 75 06: jne 0x5851eea7
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes E8 CA B6 F8 FF: call 0x584aa570
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xb6
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D1 B5 F8 FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EC 6B FA FF: call 0x584c5ab0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x6b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 5C A2 F8 FF: call 0x584a9130
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa2
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 C4 83 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x83
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 ED B7 F8 FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xb7
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 42 B5 F8 FF: call 0x584aa450
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xb5
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 23: je 0x5851ef38
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 05 B5 F8 FF: call 0x584aa430
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xb5
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 10: jmp 0x5851ef48
        __asm _emit 0xeb
        __asm _emit 0x10
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 7B 7E F6 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x7e
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 27 B5 F8 FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xb5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 2C 0C 00 00: call 0x5851fb90
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 0eh], al
        lea ecx, [ebp - 0eh]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 40h]
        add eax, dword ptr [edx + 10h]
        push eax
        ; Exact mapped bytes E8 66 B6 F8 FF: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb6
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 10h]
        add edx, 1
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 10h], edx
        ; Exact mapped bytes E9 CA FE FF FF: jmp 0x5851ee5b
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E7 B4 F8 FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xb4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 0fh], 0
        lea ecx, [ebp - 0fh]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 44h]
        add eax, dword ptr [edx + 10h]
        push eax
        ; Exact mapped bytes E8 2D B6 F8 FF: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xb6
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 2ch], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6B 8F F6 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x8f
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 2C 0A 00 00: call 0x5851fa00
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
