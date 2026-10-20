// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EEE10 .. +0x4BE bytes.
extern "C" __declspec(naked) void FUN_584eee10_584EEE10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 31ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov dword ptr [ebp - 294h], ecx
        mov dword ptr [ebp - 2ach], 0
        mov dword ptr [ebp - 2a0h], 0
        mov dword ptr [ebp - 29ch], 0
        mov dword ptr [ebp - 298h], 0
        mov dword ptr [ebp - 2a4h], 0
        mov dword ptr [ebp - 2a8h], 0
        mov dword ptr [ebp - 318h], 2
        mov dword ptr [ebp - 298h], 0
        ; Exact mapped bytes EB 0F: jmp 0x584eee8c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 298h]
        add eax, 1
        mov dword ptr [ebp - 298h], eax
        mov ecx, dword ptr [ebp - 294h]
        add ecx, 3ch
        ; Exact mapped bytes E8 86 25 00 00: call 0x584f1420
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 298h], eax
        ; Exact mapped bytes 0F 83 9A 03 00 00: jae 0x584ef240
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x9a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 294h]
        add ecx, 3ch
        mov dword ptr [ebp - 2b4h], ecx
        mov edx, dword ptr [ebp - 298h]
        push edx
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 09 FC FF FF: call 0x584eead0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 24h
        mov dword ptr [ebp - 2b8h], eax
        push 0
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 23 0A 00 00: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2bch], eax
        mov eax, dword ptr [ebp - 2b8h]
        push eax
        mov ecx, dword ptr [ebp - 2bch]
        push ecx
        push 588a263ch
        lea edx, [ebp - 188h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, dword ptr [ebp - 294h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 2c0h], ecx
        lea edx, [ebp - 188h]
        push edx
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 79 09 00 00: call 0x584ef8a0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 29ch], eax
        cmp dword ptr [ebp - 29ch], 0
        ; Exact mapped bytes 0F 85 04 01 00 00: jne 0x584ef03e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ach], 1
        mov dword ptr [ebp - 310h], 1
        mov ecx, dword ptr [ebp - 294h]
        add ecx, 3ch
        ; Exact mapped bytes E8 C4 24 00 00: call 0x584f1420
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2c8h], eax
        mov eax, dword ptr [ebp - 294h]
        add eax, 3ch
        mov dword ptr [ebp - 2c4h], eax
        mov ecx, dword ptr [ebp - 298h]
        push ecx
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 4D FB FF FF: call 0x584eead0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 24h
        mov dword ptr [ebp - 2cch], eax
        mov edx, dword ptr [ebp - 2c8h]
        push edx
        mov eax, dword ptr [ebp - 298h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 2cch]
        push ecx
        push 588a2644h
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        mov eax, dword ptr [ebp - 294h]
        add eax, 3ch
        mov dword ptr [ebp - 2d0h], eax
        mov ecx, dword ptr [ebp - 298h]
        push ecx
        mov ecx, dword ptr [ebp - 2d0h]
        ; Exact mapped bytes E8 F6 FA FF FF: call 0x584eead0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 24h
        push eax
        lea edx, [ebp - 290h]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 294h]
        add eax, 30h
        mov dword ptr [ebp - 2d4h], eax
        lea ecx, [ebp - 290h]
        push ecx
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 A4 23 00 00: call 0x584f13b0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea edx, [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 90 1D 00 00: call 0x584f0db0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2a0h], 1
        mov eax, dword ptr [ebp - 2a4h]
        add eax, 1
        mov dword ptr [ebp - 2a4h], eax
        ; Exact mapped bytes E9 B0 01 00 00: jmp 0x584ef1ee
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 294h]
        add ecx, 3ch
        mov dword ptr [ebp - 2d8h], ecx
        mov edx, dword ptr [ebp - 298h]
        push edx
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 71 FA FF FF: call 0x584eead0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 29ch]
        cmp ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes 0F 84 0B 01 00 00: je 0x584ef179
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ach], 2
        mov dword ptr [ebp - 310h], 2
        mov ecx, dword ptr [ebp - 294h]
        add ecx, 3ch
        ; Exact mapped bytes E8 90 23 00 00: call 0x584f1420
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2e0h], eax
        mov edx, dword ptr [ebp - 294h]
        add edx, 3ch
        mov dword ptr [ebp - 2dch], edx
        mov eax, dword ptr [ebp - 298h]
        push eax
        mov ecx, dword ptr [ebp - 2dch]
        ; Exact mapped bytes E8 19 FA FF FF: call 0x584eead0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 24h
        mov dword ptr [ebp - 2e4h], eax
        mov ecx, dword ptr [ebp - 2e0h]
        push ecx
        mov edx, dword ptr [ebp - 298h]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp - 2e4h]
        push eax
        push 588a2660h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        mov edx, dword ptr [ebp - 294h]
        add edx, 3ch
        mov dword ptr [ebp - 2e8h], edx
        mov eax, dword ptr [ebp - 298h]
        push eax
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 C2 F9 FF FF: call 0x584eead0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 24h
        push eax
        lea ecx, [ebp - 290h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18ch], 2
        mov edx, dword ptr [ebp - 294h]
        add edx, 30h
        mov dword ptr [ebp - 2ech], edx
        lea eax, [ebp - 290h]
        push eax
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 66 22 00 00: call 0x584f13b0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 52 1C 00 00: call 0x584f0db0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2a0h], 1
        mov edx, dword ptr [ebp - 2a8h]
        add edx, 1
        mov dword ptr [ebp - 2a8h], edx
        ; Exact mapped bytes EB 75: jmp 0x584ef1ee
        __asm _emit 0xeb
        __asm _emit 0x75
        mov dword ptr [ebp - 310h], 0
        mov ecx, dword ptr [ebp - 294h]
        add ecx, 3ch
        ; Exact mapped bytes E8 8F 22 00 00: call 0x584f1420
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2f4h], eax
        mov eax, dword ptr [ebp - 294h]
        add eax, 3ch
        mov dword ptr [ebp - 2f0h], eax
        mov ecx, dword ptr [ebp - 298h]
        push ecx
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 18 F9 FF FF: call 0x584eead0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 24h
        mov dword ptr [ebp - 2f8h], eax
        mov edx, dword ptr [ebp - 2f4h]
        push edx
        mov eax, dword ptr [ebp - 298h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 2f8h]
        push ecx
        push 588a2678h
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        lea eax, [ebp - 84h]
        mov dword ptr [ebp - 314h], eax
        mov ecx, dword ptr [ebp - 294h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 2fch], edx
        mov eax, dword ptr [ebp - 294h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 300h], eax
        sub esp, 1ch
        mov ecx, 7
        lea esi, [ebp - 31ch]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes FF 95 00 FD FF FF: call dword ptr [ebp - 0x300]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3D FC FF FF: jmp 0x584eee7d
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 85 1A 00 00: call 0x584f0cd0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push 32h
        ; Exact mapped bytes FF 15 40 42 89 58: call dword ptr [0x58894240]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp - 2a0h], 0
        ; Exact mapped bytes 75 10: jne 0x584ef26d
        __asm _emit 0x75
        __asm _emit 0x10
        push 1
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 A6 11 00 00: call 0x584f0410
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 41: jmp 0x584ef2ae
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 2a4h]
        cmp ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes 7E 0C: jle 0x584ef287
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 2b0h], 1
        ; Exact mapped bytes EB 0A: jmp 0x584ef291
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2b0h], 2
        mov edx, dword ptr [ebp - 294h]
        mov eax, dword ptr [ebp - 2b0h]
        mov dword ptr [edx + 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 63 11 00 00: call 0x584f0410
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 294h]
        mov byte ptr [ecx + 14h], 1
        mov eax, dword ptr [ebp - 2ach]
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 86 1D 34 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x1d
        __asm _emit 0x34
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
