// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A7760 .. +0x380 bytes.
extern "C" __declspec(naked) void FUN_584a7760_584A7760() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes F2 0F 10 05 10 52 89 58: movsd xmm0, qword ptr [0x58895210]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 45 90: movsd qword ptr [ebp - 0x70], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x90
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 EF D1 FF FF: call 0x584a4970
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 0e0h
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E7 08 FE FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x584a77a5
        __asm _emit 0xeb
        __asm _emit 0x09
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 FC D2 FF FF: call 0x584a4aa0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        add edx, 0e0h
        mov dword ptr [ebp - 24h], edx
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D0 09 FE FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 07 02 FE FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x584a7884
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 64 02 FE FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 46 02 FE FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 24h]
        ; Exact mapped bytes E8 5E 9E 02 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 74 05: je 0x584a77fe
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 DE 02 00 00: jmp 0x584a7adc
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 2A 02 FE FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 7E 05: jle 0x584a7810
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes E9 CC 02 00 00: jmp 0x584a7adc
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 18 02 FE FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 28h], edx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 0A 02 FE FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax + 18h]
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 FC 01 FE FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 30h], ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 EE 01 FE FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 C3 0B 00 00: call 0x584a8420
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes DD 5D 98: fstp qword ptr [ebp - 0x68]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0x98
        ; Exact mapped bytes F2 0F 10 45 90: movsd xmm0, qword ptr [ebp - 0x70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x90
        ; Exact mapped bytes 66 0F 2F 45 98: comisd xmm0, xmmword ptr [ebp - 0x68]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0x98
        ; Exact mapped bytes 76 10: jbe 0x584a787f
        __asm _emit 0x76
        __asm _emit 0x10
        ; Exact mapped bytes F2 0F 10 45 98: movsd xmm0, qword ptr [ebp - 0x68]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x98
        ; Exact mapped bytes F2 0F 11 45 90: movsd qword ptr [ebp - 0x70], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x90
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 18 FF FF FF: jmp 0x584a779c
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 A4 01 FE FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 18h
        mov dword ptr [ebp - 38h], eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 96 01 FE FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 73 0C 00 00: call 0x584a8520
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 48h], eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 75 01 FE FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 67 01 FE FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes F2 0F 10 05 C0 51 89 58: movsd xmm0, qword ptr [0x588951c0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 70 FF FF FF: movsd qword ptr [ebp - 0x90], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 11 45 E4: movsd qword ptr [ebp - 0x1c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe4
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 41 01 FE FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax + 24h]
        mov dword ptr [ebp - 44h], eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 33 01 FE FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 18h
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 D9 A7 2B 00: call 0x587620f0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xa7
        __asm _emit 0x2b
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x584a79a2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 45 E4: movsd xmm0, qword ptr [ebp - 0x1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 66 0F 2F 05 00 52 89 58: comisd xmm0, xmmword ptr [0x58895200]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 76 02: jbe 0x584a7930
        __asm _emit 0x76
        __asm _emit 0x02
        ; Exact mapped bytes EB 72: jmp 0x584a79a2
        __asm _emit 0xeb
        __asm _emit 0x72
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 11 45 88: movsd qword ptr [ebp - 0x78], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x88
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 11 45 80: movsd qword ptr [ebp - 0x80], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x80
        lea ecx, [ebp - 80h]
        push ecx
        lea edx, [ebp - 78h]
        push edx
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 45 E4: movsd xmm0, qword ptr [ebp - 0x1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 48h]
        push eax
        ; Exact mapped bytes F2 0F 2A 45 EC: cvtsi2sd xmm0, dword ptr [ebp - 0x14]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xec
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes F2 0F 2A 45 F0: cvtsi2sd xmm0, dword ptr [ebp - 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 E8 0A 00 00: call 0x584a8460
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        ; Exact mapped bytes F2 0F 2C 4D 88: cvttsd2si ecx, qword ptr [ebp - 0x78]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x4d
        __asm _emit 0x88
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes F2 0F 2C 55 80: cvttsd2si edx, qword ptr [ebp - 0x80]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x55
        __asm _emit 0x80
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes F2 0F 10 45 E4: movsd xmm0, qword ptr [ebp - 0x1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes F2 0F 58 85 70 FF FF FF: addsd xmm0, qword ptr [ebp - 0x90]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 11 45 E4: movsd qword ptr [ebp - 0x1c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes E9 45 FF FF FF: jmp 0x584a78e7
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 86 00 FE FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax + 24h]
        mov dword ptr [ebp - 50h], eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 78 00 FE FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 18h
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 1E A7 2B 00: call 0x587620f0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xa7
        __asm _emit 0x2b
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2C: jne 0x584a7a02
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0d4h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0d8h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0d0h], 0
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x584a7adc
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 26 00 FE FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 54h], ecx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 18 00 FE FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 58h], edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 0A 00 FE FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax + 10h]
        mov dword ptr [ebp - 5ch], eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 FC FF FD FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        ; Exact mapped bytes E8 D1 09 00 00: call 0x584a8420
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes DD 9D 68 FF FF FF: fstp qword ptr [ebp - 0x98]
        __asm _emit 0xdd
        __asm _emit 0x9d
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 10 05 D8 51 89 58: movsd xmm0, qword ptr [0x588951d8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 85 68 FF FF FF: comisd xmm0, xmmword ptr [ebp - 0x98]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 72 02: jb 0x584a7a6c
        __asm _emit 0x72
        __asm _emit 0x02
        ; Exact mapped bytes EB 70: jmp 0x584a7adc
        __asm _emit 0xeb
        __asm _emit 0x70
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0d0h], 0
        ; Exact mapped bytes 75 3D: jne 0x584a7ab5
        __asm _emit 0x75
        __asm _emit 0x3d
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 B0 FF FD FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0d4h], ecx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 99 FF FD FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0d8h], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0d0h], 1
        ; Exact mapped bytes EB 27: jmp 0x584a7adc
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0d4h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0d8h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0d0h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
