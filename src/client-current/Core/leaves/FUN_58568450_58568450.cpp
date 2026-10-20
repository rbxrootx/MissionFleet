// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58568450 .. +0x1BF8 bytes.
extern "C" __declspec(naked) void FUN_58568450_58568450() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58883913h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 31ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push ebx
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 124h], ecx
        mov dword ptr [ebp - 1b4h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 94h], ecx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 94h]
        shr ecx, 5
        and ecx, 3ffh
        push ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 94h]
        shr eax, 0fh
        and eax, 0fffh
        push eax
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 3B BE FF FF: call 0x58564310
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 94h]
        shr edx, 0fh
        and edx, 0fffh
        mov dword ptr [ebp - 12ch], edx
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 1d0h], eax
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 94h]
        shr edx, 1dh
        and edx, 3
        ; Exact mapped bytes 74 18: je 0x58568528
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 124h]
        movzx ecx, byte ptr [eax + 22fh]
        imul edx, ecx, 0ah
        mov dword ptr [ebp - 1b8h], edx
        ; Exact mapped bytes EB 16: jmp 0x5856853e
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 124h]
        movzx ecx, byte ptr [eax + 22eh]
        imul edx, ecx, 0ah
        mov dword ptr [ebp - 1b8h], edx
        mov eax, dword ptr [ebp - 1b8h]
        mov dword ptr [ebp - 17ch], eax
        mov dword ptr [ebp - 20ch], 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 66 8B 91 28 02 00 00: mov dx, word ptr [ecx + 0x228]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 7E 49: jle 0x585685b6
        __asm _emit 0x7e
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 17ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 12ch]
        sub ecx, eax
        mov eax, ecx
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 12ch], edx
        mov edx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 66 8B 82 28 02 00 00: mov ax, word ptr [edx + 0x228]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        sub ecx, 1
        mov eax, dword ptr [ebp - 17ch]
        cdq
        idiv ecx
        mov dword ptr [ebp - 20ch], eax
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 7D 14: jge 0x585685d3
        __asm _emit 0x7d
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 12ch]
        add edx, 0e10h
        mov dword ptr [ebp - 1bch], edx
        ; Exact mapped bytes EB 14: jmp 0x585685e7
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 12ch]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 1bch], edx
        mov edx, dword ptr [ebp - 1bch]
        mov dword ptr [ebp - 12ch], edx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 42 21 00 00: call 0x5856a740
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1b4h], eax
        mov dword ptr [ebp - 128h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5856861f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 128h]
        add eax, 1
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp - 128h]
        cmp ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes 0F 8D E1 16 00 00: jge 0x58569d12
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe1
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 124h]
        movzx edx, word ptr [ecx + eax + 258h]
        cmp edx, 2
        ; Exact mapped bytes 0F 85 51 06 00 00: jne 0x58568ca1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 124h]
        movzx edx, word ptr [ecx + eax + 258h]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 32 06 00 00: jne 0x58568ca1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x32
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 17ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 170h], eax
        mov eax, dword ptr [ebp - 1d0h]
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 128h]
        and ecx, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5856869f
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffffeh
        inc ecx
        test ecx, ecx
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x5856872a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 134h]
        sub edx, dword ptr [ebp - 170h]
        mov dword ptr [ebp - 134h], edx
        ; Exact mapped bytes 79 11: jns 0x585686cc
        __asm _emit 0x79
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 134h]
        add eax, 0e10h
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 0a8h]
        mov eax, dword ptr [ebp - 124h]
        add edx, dword ptr [eax + 130h]
        sub edx, dword ptr [ebp - 170h]
        mov dword ptr [ebp - 190h], edx
        ; Exact mapped bytes 79 14: jns 0x58568706
        __asm _emit 0x79
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 190h]
        add ecx, 0e10h
        mov dword ptr [ebp - 1c0h], ecx
        ; Exact mapped bytes EB 0C: jmp 0x58568712
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 190h]
        mov dword ptr [ebp - 1c0h], edx
        mov eax, dword ptr [ebp - 1c0h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 2C AF FF FF: call 0x58563650
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x585687bc
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 134h]
        add ecx, dword ptr [ebp - 170h]
        mov dword ptr [ebp - 134h], ecx
        cmp dword ptr [ebp - 134h], 0e10h
        ; Exact mapped bytes 7C 12: jl 0x5856875a
        __asm _emit 0x7c
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 134h]
        sub edx, 0e10h
        mov dword ptr [ebp - 134h], edx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 0a8h]
        mov edx, dword ptr [ebp - 124h]
        add ecx, dword ptr [edx + 130h]
        add ecx, dword ptr [ebp - 170h]
        mov dword ptr [ebp - 194h], ecx
        cmp dword ptr [ebp - 194h], 0e10h
        ; Exact mapped bytes 7C 13: jl 0x5856879d
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 194h]
        sub eax, 0e10h
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes EB 0C: jmp 0x585687a9
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 194h]
        mov dword ptr [ebp - 1c4h], ecx
        mov edx, dword ptr [ebp - 1c4h]
        push edx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 95 AE FF FF: call 0x58563650
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 134h]
        mov ecx, dword ptr [eax*4 + 5894c930h]
        mov dword ptr [ebp - 198h], ecx
        mov edx, dword ptr [ebp - 134h]
        mov eax, dword ptr [edx*4 + 589490f0h]
        mov dword ptr [ebp - 160h], eax
        mov ecx, dword ptr [ebp - 198h]
        mov dword ptr [ebp - 174h], ecx
        mov edx, dword ptr [ebp - 160h]
        mov dword ptr [ebp - 178h], edx
        mov eax, dword ptr [ebp - 160h]
        neg eax
        mov dword ptr [ebp - 160h], eax
        cmp dword ptr [ebp - 174h], 0
        ; Exact mapped bytes 7D 0D: jge 0x5856881e
        __asm _emit 0x7d
        __asm _emit 0x0d
        imul ecx, dword ptr [ebp - 174h], -1
        mov dword ptr [ebp - 174h], ecx
        cmp dword ptr [ebp - 178h], 0
        ; Exact mapped bytes 7D 0D: jge 0x58568834
        __asm _emit 0x7d
        __asm _emit 0x0d
        imul edx, dword ptr [ebp - 178h], -1
        mov dword ptr [ebp - 178h], edx
        mov eax, dword ptr [ebp - 174h]
        add eax, dword ptr [ebp - 178h]
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 11 85 DC FD FF FF: movsd qword ptr [ebp - 0x224], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2A 85 68 FE FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x198]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5E 85 DC FD FF FF: divsd xmm0, qword ptr [ebp - 0x224]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 59 05 D0 50 89 58: mulsd xmm0, qword ptr [0x588950d0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 F8 FC FF FF: movsd qword ptr [ebp - 0x308], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2A 85 A0 FE FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x160]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5E 85 DC FD FF FF: divsd xmm0, qword ptr [ebp - 0x224]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 59 05 D0 50 89 58: mulsd xmm0, qword ptr [0x588950d0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 14 FD FF FF: movsd qword ptr [ebp - 0x2ec], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2A 85 68 FE FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x198]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5E 85 DC FD FF FF: divsd xmm0, qword ptr [ebp - 0x224]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 59 05 E8 51 89 58: mulsd xmm0, qword ptr [0x588951e8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 0C FD FF FF: movsd qword ptr [ebp - 0x2f4], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2A 85 A0 FE FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x160]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5E 85 DC FD FF FF: divsd xmm0, qword ptr [ebp - 0x224]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 59 05 E8 51 89 58: mulsd xmm0, qword ptr [0x588951e8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 04 FD FF FF: movsd qword ptr [ebp - 0x2fc], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        imul ecx, dword ptr [ebp - 128h], 360h
        mov edx, dword ptr [ebp - 124h]
        lea eax, [edx + ecx + 2fch]
        mov ecx, dword ptr [ebp - 124h]
        imul edx, dword ptr [ecx + 0a0h], 18h
        add eax, edx
        mov ecx, 8
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ecx + 4]
        add ecx, dword ptr [eax + edx]
        mov dword ptr [ebp - 14ch], ecx
        imul edx, dword ptr [ebp - 128h], 360h
        mov eax, dword ptr [ebp - 124h]
        lea ecx, [eax + edx + 2fch]
        mov edx, dword ptr [ebp - 124h]
        imul eax, dword ptr [edx + 0a0h], 18h
        add ecx, eax
        mov edx, 8
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 124h]
        mov edx, dword ptr [edx + 8]
        sub edx, dword ptr [ecx + eax + 4]
        mov dword ptr [ebp - 148h], edx
        imul eax, dword ptr [ebp - 128h], 360h
        mov ecx, dword ptr [ebp - 124h]
        lea edx, [ecx + eax + 2fch]
        mov eax, dword ptr [ebp - 124h]
        imul ecx, dword ptr [eax + 0a0h], 18h
        add edx, ecx
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ecx + 4]
        add ecx, dword ptr [edx + eax]
        ; Exact mapped bytes F2 0F 2C 95 F8 FC FF FF: cvttsd2si edx, qword ptr [ebp - 0x308]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add ecx, edx
        mov dword ptr [ebp - 168h], ecx
        imul eax, dword ptr [ebp - 128h], 360h
        mov ecx, dword ptr [ebp - 124h]
        lea edx, [ecx + eax + 2fch]
        mov eax, dword ptr [ebp - 124h]
        imul ecx, dword ptr [eax + 0a0h], 18h
        add edx, ecx
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ecx + 8]
        sub ecx, dword ptr [edx + eax + 4]
        ; Exact mapped bytes F2 0F 2C 95 14 FD FF FF: cvttsd2si edx, qword ptr [ebp - 0x2ec]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add ecx, edx
        mov dword ptr [ebp - 164h], ecx
        imul eax, dword ptr [ebp - 128h], 360h
        mov ecx, dword ptr [ebp - 124h]
        lea edx, [ecx + eax + 2fch]
        mov eax, dword ptr [ebp - 124h]
        imul ecx, dword ptr [eax + 0a0h], 18h
        add edx, ecx
        mov eax, 8
        shl eax, 1
        mov ecx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ecx + 4]
        add ecx, dword ptr [edx + eax]
        ; Exact mapped bytes F2 0F 2C 95 0C FD FF FF: cvttsd2si edx, qword ptr [ebp - 0x2f4]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add ecx, edx
        mov dword ptr [ebp - 140h], ecx
        imul eax, dword ptr [ebp - 128h], 360h
        mov ecx, dword ptr [ebp - 124h]
        lea edx, [ecx + eax + 2fch]
        mov eax, dword ptr [ebp - 124h]
        imul ecx, dword ptr [eax + 0a0h], 18h
        add edx, ecx
        mov eax, 8
        shl eax, 1
        mov ecx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ecx + 8]
        sub ecx, dword ptr [edx + eax + 4]
        ; Exact mapped bytes F2 0F 2C 95 04 FD FF FF: cvttsd2si edx, qword ptr [ebp - 0x2fc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add ecx, edx
        mov dword ptr [ebp - 13ch], ecx
        push 438h
        ; Exact mapped bytes E8 85 85 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c8h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1c8h], 0
        ; Exact mapped bytes 0F 84 00 01 00 00: je 0x58568b9c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 DF F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xdf
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 2c8h], eax
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 28ch], eax
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 94h]
        shr edx, 1bh
        and edx, 3
        ; Exact mapped bytes 74 1F: je 0x58568aec
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 66 8B 94 01 DE 02 00 00: mov dx, word ptr [ecx + eax + 0x2de]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 95 B2 FE FF FF: mov word ptr [ebp - 0x14e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1D: jmp 0x58568b09
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 66 8B 94 01 DA 02 00 00: mov dx, word ptr [ecx + eax + 0x2da]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 95 B2 FE FF FF: mov word ptr [ebp - 0x14e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 14eh]
        mov dword ptr [ebp - 2c4h], eax
        mov ecx, dword ptr [ebp - 124h]
        movzx edx, word ptr [ecx + 18ch]
        mov dword ptr [ebp - 2cch], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 38 F2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x38
        __asm _emit 0xf2
        __asm _emit 0xff
        add eax, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 2a4h], eax
        push 40h
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        push ecx
        mov edx, dword ptr [ebp - 2c8h]
        push edx
        mov eax, dword ptr [ebp - 28ch]
        push eax
        mov ecx, dword ptr [ebp - 2c4h]
        push ecx
        mov edx, dword ptr [ebp - 2cch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        push ecx
        mov edx, dword ptr [ebp - 2a4h]
        push edx
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 3C BA FE FF: call 0x585545d0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58568ba6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1cch], 0
        mov eax, dword ptr [ebp - 1cch]
        mov dword ptr [ebp - 2d4h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 2d4h]
        mov dword ptr [ebp - 144h], ecx
        mov edx, dword ptr [ebp - 164h]
        push edx
        mov eax, dword ptr [ebp - 168h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 62 F4 FE FF: call 0x58558040
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 88h]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 AA 45 F3 FF: call 0x5849d1a0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x45
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 3904h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        add edx, 238h
        push edx
        push 0
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 D3 F2 FE FF: call 0x58557ef0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 2f4h]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 AB 45 F3 FF: call 0x5849d1e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x45
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 CB F2 FF: call 0x58495790
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xcb
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 2e0h], eax
        mov edx, dword ptr [ebp - 144h]
        push edx
        mov ecx, dword ptr [ebp - 2e0h]
        ; Exact mapped bytes E8 38 79 FE FF: call 0x58550590
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C CC F2 FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xcc
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x58568c9c
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD CC F2 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xcc
        __asm _emit 0xf2
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 75 24: jne 0x58568c9c
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D CB F2 FF: call 0x58495810
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xcb
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 228h], eax
        mov eax, dword ptr [ebp - 144h]
        push eax
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 F5 A6 F2 FF: call 0x58493390
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa6
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 10 0F 00 00: jmp 0x58569bb1
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 124h]
        movzx ecx, word ptr [eax + edx + 258h]
        cmp ecx, 5
        ; Exact mapped bytes 0F 85 C9 07 00 00: jne 0x58569489
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 124h]
        movzx ecx, word ptr [eax + edx + 258h]
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 AA 07 00 00: jne 0x58569489
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        shr eax, 1bh
        and eax, 3
        ; Exact mapped bytes 74 1E: je 0x58568d0a
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 66 8B 91 D0 02 00 00: mov dx, word ptr [ecx + 0x2d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 06: shr dx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        ; Exact mapped bytes 66 89 95 B0 FE FF FF: mov word ptr [ebp - 0x150], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 18: jmp 0x58568d22
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 124h]
        ; Exact mapped bytes 66 8B 88 D0 02 00 00: mov cx, word ptr [eax + 0x2d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 3F: and cx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x3f
        ; Exact mapped bytes 66 89 8D B0 FE FF FF: mov word ptr [ebp - 0x150], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 150h]
        mov dword ptr [ebp - 22ch], edx
        imul eax, dword ptr [ebp - 22ch], 0ah
        mov dword ptr [ebp - 114h], eax
        mov ecx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [ebp - 114h]
        imul eax, dword ptr [ecx*4 + 5894c930h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 120h], eax
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [ebp - 114h]
        imul eax, dword ptr [edx*4 + 589490f0h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 11ch], eax
        mov dword ptr [ebp - 118h], 0
        mov eax, dword ptr [ebp - 17ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 16ch], eax
        mov edx, dword ptr [ebp - 1d0h]
        mov dword ptr [ebp - 130h], edx
        mov eax, dword ptr [ebp - 128h]
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x58568db9
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        test eax, eax
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x58568e5f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 130h]
        sub ecx, dword ptr [ebp - 16ch]
        mov dword ptr [ebp - 130h], ecx
        ; Exact mapped bytes 79 14: jns 0x58568de9
        __asm _emit 0x79
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 130h]
        add edx, 0e10h
        mov dword ptr [ebp - 1d4h], edx
        ; Exact mapped bytes EB 0C: jmp 0x58568df5
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 1d4h], eax
        mov ecx, dword ptr [ebp - 1d4h]
        mov dword ptr [ebp - 130h], ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 0a8h]
        mov ecx, dword ptr [ebp - 124h]
        add eax, dword ptr [ecx + 130h]
        sub eax, dword ptr [ebp - 16ch]
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes 79 14: jns 0x58568e3b
        __asm _emit 0x79
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 19ch]
        add edx, 0e10h
        mov dword ptr [ebp - 1d8h], edx
        ; Exact mapped bytes EB 0C: jmp 0x58568e47
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 19ch]
        mov dword ptr [ebp - 1d8h], eax
        mov ecx, dword ptr [ebp - 1d8h]
        push ecx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 F7 A7 FF FF: call 0x58563650
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x58568f0a
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 130h]
        add edx, dword ptr [ebp - 16ch]
        mov dword ptr [ebp - 130h], edx
        cmp dword ptr [ebp - 130h], 0e10h
        ; Exact mapped bytes 7C 13: jl 0x58568e90
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 130h]
        sub eax, 0e10h
        mov dword ptr [ebp - 1dch], eax
        ; Exact mapped bytes EB 0C: jmp 0x58568e9c
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 1dch], ecx
        mov edx, dword ptr [ebp - 1dch]
        mov dword ptr [ebp - 130h], edx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 0a8h]
        mov edx, dword ptr [ebp - 124h]
        add ecx, dword ptr [edx + 130h]
        add ecx, dword ptr [ebp - 16ch]
        mov dword ptr [ebp - 1a0h], ecx
        cmp dword ptr [ebp - 1a0h], 0e10h
        ; Exact mapped bytes 7C 13: jl 0x58568eeb
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 1a0h]
        sub eax, 0e10h
        mov dword ptr [ebp - 1e0h], eax
        ; Exact mapped bytes EB 0C: jmp 0x58568ef7
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 1a0h]
        mov dword ptr [ebp - 1e0h], ecx
        mov edx, dword ptr [ebp - 1e0h]
        push edx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 47 A7 FF FF: call 0x58563650
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 130h]
        mov ecx, dword ptr [eax*4 + 5894c930h]
        mov dword ptr [ebp - 1a4h], ecx
        mov edx, dword ptr [ebp - 130h]
        mov eax, dword ptr [edx*4 + 589490f0h]
        mov dword ptr [ebp - 15ch], eax
        mov ecx, dword ptr [ebp - 1a4h]
        mov dword ptr [ebp - 180h], ecx
        mov edx, dword ptr [ebp - 15ch]
        mov dword ptr [ebp - 184h], edx
        mov eax, dword ptr [ebp - 15ch]
        neg eax
        mov dword ptr [ebp - 15ch], eax
        cmp dword ptr [ebp - 180h], 0
        ; Exact mapped bytes 7D 0D: jge 0x58568f6c
        __asm _emit 0x7d
        __asm _emit 0x0d
        imul ecx, dword ptr [ebp - 180h], -1
        mov dword ptr [ebp - 180h], ecx
        cmp dword ptr [ebp - 184h], 0
        ; Exact mapped bytes 7D 0D: jge 0x58568f82
        __asm _emit 0x7d
        __asm _emit 0x0d
        imul edx, dword ptr [ebp - 184h], -1
        mov dword ptr [ebp - 184h], edx
        mov eax, dword ptr [ebp - 180h]
        add eax, dword ptr [ebp - 184h]
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 11 85 E4 FD FF FF: movsd qword ptr [ebp - 0x21c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2A 85 5C FE FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x1a4]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5E 85 E4 FD FF FF: divsd xmm0, qword ptr [ebp - 0x21c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 59 05 D8 72 8A 58: mulsd xmm0, qword ptr [0x588a72d8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x72
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 F0 FC FF FF: movsd qword ptr [ebp - 0x310], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2A 85 A4 FE FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x15c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5E 85 E4 FD FF FF: divsd xmm0, qword ptr [ebp - 0x21c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 59 05 D8 72 8A 58: mulsd xmm0, qword ptr [0x588a72d8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x72
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 E8 FC FF FF: movsd qword ptr [ebp - 0x318], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2A 85 5C FE FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x1a4]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5E 85 E4 FD FF FF: divsd xmm0, qword ptr [ebp - 0x21c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 59 05 D0 50 89 58: mulsd xmm0, qword ptr [0x588950d0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 E0 FC FF FF: movsd qword ptr [ebp - 0x320], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2A 85 A4 FE FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x15c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5E 85 E4 FD FF FF: divsd xmm0, qword ptr [ebp - 0x21c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 59 05 D0 50 89 58: mulsd xmm0, qword ptr [0x588950d0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 D8 FC FF FF: movsd qword ptr [ebp - 0x328], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        imul ecx, dword ptr [ebp - 128h], 360h
        mov edx, dword ptr [ebp - 124h]
        lea eax, [edx + ecx + 2fch]
        mov ecx, dword ptr [ebp - 124h]
        imul edx, dword ptr [ecx + 0a0h], 18h
        add eax, edx
        mov ecx, 8
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ecx + 4]
        add ecx, dword ptr [eax + edx]
        mov dword ptr [ebp - 14ch], ecx
        imul edx, dword ptr [ebp - 128h], 360h
        mov eax, dword ptr [ebp - 124h]
        lea ecx, [eax + edx + 2fch]
        mov edx, dword ptr [ebp - 124h]
        imul eax, dword ptr [edx + 0a0h], 18h
        add ecx, eax
        mov edx, 8
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 124h]
        mov edx, dword ptr [edx + 8]
        sub edx, dword ptr [ecx + eax + 4]
        mov dword ptr [ebp - 148h], edx
        imul eax, dword ptr [ebp - 128h], 360h
        mov ecx, dword ptr [ebp - 124h]
        lea edx, [ecx + eax + 2fch]
        mov eax, dword ptr [ebp - 124h]
        imul ecx, dword ptr [eax + 0a0h], 18h
        add edx, ecx
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ecx + 4]
        add ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 168h], ecx
        imul edx, dword ptr [ebp - 128h], 360h
        mov eax, dword ptr [ebp - 124h]
        lea ecx, [eax + edx + 2fch]
        mov edx, dword ptr [ebp - 124h]
        imul eax, dword ptr [edx + 0a0h], 18h
        add ecx, eax
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 124h]
        mov eax, dword ptr [eax + 8]
        sub eax, dword ptr [ecx + edx + 4]
        add eax, 7
        mov dword ptr [ebp - 164h], eax
        imul ecx, dword ptr [ebp - 128h], 360h
        mov edx, dword ptr [ebp - 124h]
        lea eax, [edx + ecx + 2fch]
        mov ecx, dword ptr [ebp - 124h]
        imul edx, dword ptr [ecx + 0a0h], 18h
        add eax, edx
        mov ecx, 8
        shl ecx, 1
        mov edx, dword ptr [ebp - 124h]
        mov edx, dword ptr [edx + 4]
        add edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 140h], edx
        imul eax, dword ptr [ebp - 128h], 360h
        mov ecx, dword ptr [ebp - 124h]
        lea edx, [ecx + eax + 2fch]
        mov eax, dword ptr [ebp - 124h]
        imul ecx, dword ptr [eax + 0a0h], 18h
        add edx, ecx
        mov eax, 8
        shl eax, 1
        mov ecx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ecx + 8]
        sub ecx, dword ptr [edx + eax + 4]
        add ecx, 0ch
        mov dword ptr [ebp - 13ch], ecx
        push 94h
        ; Exact mapped bytes E8 59 7E 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x7e
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e4h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1e4h], 0
        ; Exact mapped bytes 74 73: je 0x58569237
        __asm _emit 0x74
        __asm _emit 0x73
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 2f8h]
        push eax
        ; Exact mapped bytes 8B 0D 40 07 96 58: mov ecx, dword ptr [0x58960740]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 B8 F1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb8
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 D7 F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xd7
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        mov edx, dword ptr [ebp - 14ch]
        push edx
        mov eax, dword ptr [ebp - 230h]
        push eax
        mov ecx, dword ptr [ebp - 234h]
        push ecx
        push 0
        push 24h
        lea edx, [ebp - 120h]
        push edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 81 41 F6 FF: call 0x584cd3b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x41
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58569241
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e8h], 0
        mov eax, dword ptr [ebp - 1e8h]
        mov dword ptr [ebp - 238h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 238h]
        mov dword ptr [ebp - 1a8h], ecx
        push 0
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 86 43 F6 FF: call 0x584cd600
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x43
        __asm _emit 0xf6
        __asm _emit 0xff
        push 3e8h
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 F6 CB F1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xcb
        __asm _emit 0xf1
        __asm _emit 0xff
        push 101h
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 16 C3 24 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xc3
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        push 19ch
        ; Exact mapped bytes E8 5F 7D 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x7d
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ech], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ech], 0
        ; Exact mapped bytes 0F 84 FE 00 00 00: je 0x585693c0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 D7 F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd7
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 23ch], eax
        mov ecx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 240h], ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 94h]
        shr eax, 1bh
        and eax, 3
        ; Exact mapped bytes 74 1F: je 0x58569312
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 66 8B 84 0A DE 02 00 00: mov ax, word ptr [edx + ecx + 0x2de]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 AE FE FF FF: mov word ptr [ebp - 0x152], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1D: jmp 0x5856932f
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 66 8B 84 0A DA 02 00 00: mov ax, word ptr [edx + ecx + 0x2da]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 AE FE FF FF: mov word ptr [ebp - 0x152], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 152h]
        mov dword ptr [ebp - 244h], ecx
        mov edx, dword ptr [ebp - 124h]
        movzx eax, word ptr [edx + 18ch]
        mov dword ptr [ebp - 248h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 30 F2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x30
        __asm _emit 0xf2
        __asm _emit 0xff
        add eax, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 24ch], eax
        push 40h
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov edx, dword ptr [ebp - 140h]
        push edx
        mov eax, dword ptr [ebp - 23ch]
        push eax
        mov ecx, dword ptr [ebp - 240h]
        push ecx
        mov edx, dword ptr [ebp - 244h]
        push edx
        mov eax, dword ptr [ebp - 248h]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        mov edx, dword ptr [ebp - 14ch]
        push edx
        mov eax, dword ptr [ebp - 24ch]
        push eax
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 C8 ED F5 FF: call 0x584c8180
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xed
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585693ca
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f0h], 0
        mov ecx, dword ptr [ebp - 1f0h]
        mov dword ptr [ebp - 250h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 250h]
        mov dword ptr [ebp - 188h], edx
        mov eax, dword ptr [ebp - 164h]
        push eax
        mov ecx, dword ptr [ebp - 168h]
        push ecx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 7E 09 F6 FF: call 0x584c9d80
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x09
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 88h]
        push eax
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 A6 16 00 00: call 0x5856aac0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 3904h]
        push edx
        mov eax, dword ptr [ebp - 124h]
        add eax, 238h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 E0 07 F6 FF: call 0x584c9c20
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x07
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 C4 F2 FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc4
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x58569484
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 C4 F2 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc4
        __asm _emit 0xf2
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 75 24: jne 0x58569484
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 C3 F2 FF: call 0x58495810
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc3
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 254h], eax
        mov ecx, dword ptr [ebp - 188h]
        push ecx
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 8D EF FF FF: call 0x58568410
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 28 07 00 00: jmp 0x58569bb1
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        shr eax, 1bh
        and eax, 3
        ; Exact mapped bytes 74 1E: je 0x585694b4
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 66 8B 91 D0 02 00 00: mov dx, word ptr [ecx + 0x2d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 06: shr dx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        ; Exact mapped bytes 66 89 95 AC FE FF FF: mov word ptr [ebp - 0x154], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 18: jmp 0x585694cc
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 124h]
        ; Exact mapped bytes 66 8B 88 D0 02 00 00: mov cx, word ptr [eax + 0x2d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 3F: and cx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x3f
        ; Exact mapped bytes 66 89 8D AC FE FF FF: mov word ptr [ebp - 0x154], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 154h]
        mov dword ptr [ebp - 258h], edx
        imul eax, dword ptr [ebp - 258h], 0ah
        mov dword ptr [ebp - 114h], eax
        mov ecx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [ebp - 114h]
        imul eax, dword ptr [ecx*4 + 5894c930h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 120h], eax
        mov edx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [edx + 88h]
        ; Exact mapped bytes E8 27 2F F2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x2f
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C0 B4 F1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xb4
        __asm _emit 0xf1
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
        cmp ecx, 9
        ; Exact mapped bytes 75 24: jne 0x58569554
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [ebp - 114h]
        imul eax, dword ptr [edx*4 + 589490f0h]
        cdq
        mov ecx, 276h
        idiv ecx
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 22: jmp 0x58569576
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [ebp - 114h]
        imul eax, dword ptr [edx*4 + 589490f0h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 11ch], eax
        mov dword ptr [ebp - 118h], 0
        imul edx, dword ptr [ebp - 128h], 360h
        mov eax, dword ptr [ebp - 124h]
        lea ecx, [eax + edx + 2fch]
        mov edx, dword ptr [ebp - 124h]
        imul eax, dword ptr [edx + 0a0h], 18h
        add ecx, eax
        mov edx, 8
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 124h]
        mov edx, dword ptr [edx + 4]
        add edx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 14ch], edx
        imul eax, dword ptr [ebp - 128h], 360h
        mov ecx, dword ptr [ebp - 124h]
        lea edx, [ecx + eax + 2fch]
        mov eax, dword ptr [ebp - 124h]
        imul ecx, dword ptr [eax + 0a0h], 18h
        add edx, ecx
        mov eax, 8
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 124h]
        mov eax, dword ptr [eax + 8]
        sub eax, dword ptr [edx + ecx + 4]
        mov dword ptr [ebp - 148h], eax
        imul ecx, dword ptr [ebp - 128h], 360h
        mov edx, dword ptr [ebp - 124h]
        lea eax, [edx + ecx + 2fch]
        mov ecx, dword ptr [ebp - 124h]
        imul edx, dword ptr [ecx + 0a0h], 18h
        add eax, edx
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 124h]
        mov edx, dword ptr [edx + 4]
        add edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 168h], edx
        imul eax, dword ptr [ebp - 128h], 360h
        mov ecx, dword ptr [ebp - 124h]
        lea edx, [ecx + eax + 2fch]
        mov eax, dword ptr [ebp - 124h]
        imul ecx, dword ptr [eax + 0a0h], 18h
        add edx, ecx
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ecx + 8]
        sub ecx, dword ptr [edx + eax + 4]
        add ecx, 7
        mov dword ptr [ebp - 164h], ecx
        imul edx, dword ptr [ebp - 128h], 360h
        mov eax, dword ptr [ebp - 124h]
        lea ecx, [eax + edx + 2fch]
        mov edx, dword ptr [ebp - 124h]
        imul eax, dword ptr [edx + 0a0h], 18h
        add ecx, eax
        mov edx, 8
        shl edx, 1
        mov eax, dword ptr [ebp - 124h]
        mov eax, dword ptr [eax + 4]
        add eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 140h], eax
        imul ecx, dword ptr [ebp - 128h], 360h
        mov edx, dword ptr [ebp - 124h]
        lea eax, [edx + ecx + 2fch]
        mov ecx, dword ptr [ebp - 124h]
        imul edx, dword ptr [ecx + 0a0h], 18h
        add eax, edx
        mov ecx, 8
        shl ecx, 1
        mov edx, dword ptr [ebp - 124h]
        mov edx, dword ptr [edx + 8]
        sub edx, dword ptr [eax + ecx + 4]
        add edx, 0ch
        mov dword ptr [ebp - 13ch], edx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes E8 68 2D F2 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x2d
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 4A 02 00 00: jne 0x5856996d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 94h
        ; Exact mapped bytes E8 D7 78 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x78
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1f4h], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 1f4h], 0
        ; Exact mapped bytes 74 73: je 0x585697b9
        __asm _emit 0x74
        __asm _emit 0x73
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 2f8h]
        push eax
        ; Exact mapped bytes 8B 0D 40 07 96 58: mov ecx, dword ptr [0x58960740]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 B3 F1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb3
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 25ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 D2 F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        mov edx, dword ptr [ebp - 14ch]
        push edx
        mov eax, dword ptr [ebp - 25ch]
        push eax
        mov ecx, dword ptr [ebp - 260h]
        push ecx
        push 0
        push 24h
        lea edx, [ebp - 120h]
        push edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 FF 3B F6 FF: call 0x584cd3b0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x3b
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 1f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585697c3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f8h], 0
        mov eax, dword ptr [ebp - 1f8h]
        mov dword ptr [ebp - 264h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 264h]
        mov dword ptr [ebp - 1ach], ecx
        push 0
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 04 3E F6 FF: call 0x584cd600
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x3e
        __asm _emit 0xf6
        __asm _emit 0xff
        push 3e8h
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 74 C6 F1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xc6
        __asm _emit 0xf1
        __asm _emit 0xff
        push 101h
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 94 BD 24 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xbd
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        push 440h
        ; Exact mapped bytes E8 DD 77 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x77
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1fch], eax
        mov dword ptr [ebp - 4], 4
        cmp dword ptr [ebp - 1fch], 0
        ; Exact mapped bytes 0F 84 FB 00 00 00: je 0x5856993f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 D1 F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd1
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        mov ecx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 26ch], ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 94h]
        shr eax, 1bh
        and eax, 3
        ; Exact mapped bytes 74 1F: je 0x58569894
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 66 8B 84 0A DE 02 00 00: mov ax, word ptr [edx + ecx + 0x2de]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 AA FE FF FF: mov word ptr [ebp - 0x156], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1D: jmp 0x585698b1
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 66 8B 84 0A DA 02 00 00: mov ax, word ptr [edx + ecx + 0x2da]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 AA FE FF FF: mov word ptr [ebp - 0x156], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 156h]
        mov dword ptr [ebp - 270h], ecx
        mov edx, dword ptr [ebp - 124h]
        movzx eax, word ptr [edx + 18ch]
        mov dword ptr [ebp - 274h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 2A F2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0xf2
        __asm _emit 0xff
        add eax, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 278h], eax
        push 40h
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov edx, dword ptr [ebp - 140h]
        push edx
        mov eax, dword ptr [ebp - 268h]
        push eax
        mov ecx, dword ptr [ebp - 26ch]
        push ecx
        mov edx, dword ptr [ebp - 270h]
        push edx
        lea eax, [ebp - 120h]
        push eax
        mov ecx, dword ptr [ebp - 274h]
        push ecx
        push 0
        push 0
        mov edx, dword ptr [ebp - 278h]
        push edx
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 A9 85 21 00: call 0x58781ee0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x00
        mov dword ptr [ebp - 200h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58569949
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 200h], 0
        mov eax, dword ptr [ebp - 200h]
        mov dword ptr [ebp - 27ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 27ch]
        mov dword ptr [ebp - 138h], ecx
        ; Exact mapped bytes E9 5A 01 00 00: jmp 0x58569ac7
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 440h
        ; Exact mapped bytes E8 8D 76 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x76
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 204h], eax
        mov dword ptr [ebp - 4], 5
        cmp dword ptr [ebp - 204h], 0
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x58569a9e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 13ch]
        sub edx, 2
        mov dword ptr [ebp - 280h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 D0 F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xd0
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 284h], eax
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 288h], eax
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 94h]
        shr edx, 1bh
        and edx, 3
        ; Exact mapped bytes 74 1F: je 0x585699f3
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 66 8B 94 01 DE 02 00 00: mov dx, word ptr [ecx + eax + 0x2de]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 95 A8 FE FF FF: mov word ptr [ebp - 0x158], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1D: jmp 0x58569a10
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 66 8B 94 01 DA 02 00 00: mov dx, word ptr [ecx + eax + 0x2da]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 95 A8 FE FF FF: mov word ptr [ebp - 0x158], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 158h]
        mov dword ptr [ebp - 2e4h], eax
        mov ecx, dword ptr [ebp - 124h]
        movzx edx, word ptr [ecx + 18ch]
        mov dword ptr [ebp - 290h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 29 F2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x29
        __asm _emit 0xf2
        __asm _emit 0xff
        add eax, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 294h], eax
        push 40h
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 280h]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        push ecx
        mov edx, dword ptr [ebp - 284h]
        push edx
        mov eax, dword ptr [ebp - 288h]
        push eax
        mov ecx, dword ptr [ebp - 2e4h]
        push ecx
        lea edx, [ebp - 120h]
        push edx
        mov eax, dword ptr [ebp - 290h]
        push eax
        push 0
        push 3
        mov ecx, dword ptr [ebp - 294h]
        push ecx
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 4A 84 21 00: call 0x58781ee0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x00
        mov dword ptr [ebp - 208h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58569aa8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 208h], 0
        mov edx, dword ptr [ebp - 208h]
        mov dword ptr [ebp - 298h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 298h]
        mov dword ptr [ebp - 138h], eax
        mov ecx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 68 29 F2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x29
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 01 AF F1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xaf
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 9
        ; Exact mapped bytes 75 0E: jne 0x58569afd
        __asm _emit 0x75
        __asm _emit 0x0e
        push 1
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 44 A9 21 00: call 0x58784440
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xa9
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 164h]
        push ecx
        mov edx, dword ptr [ebp - 168h]
        push edx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 1A AB 21 00: call 0x58784630
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xab
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 88h]
        push ecx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 92 36 F3 FF: call 0x5849d1c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x36
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 3904h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 238h
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 4B A9 21 00: call 0x587844a0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa9
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 2f4h]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 A3 36 F3 FF: call 0x5849d210
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x36
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 BD F2 FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xbd
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x58569bb1
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 BD F2 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xbd
        __asm _emit 0xf2
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 75 24: jne 0x58569bb1
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 BC F2 FF: call 0x58495810
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xbc
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 29ch], eax
        mov ecx, dword ptr [ebp - 138h]
        push ecx
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 40 98 F2 FF: call 0x584933f0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x98
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 29 01 00 00: je 0x58569ce7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [edx + 88h]
        ; Exact mapped bytes E8 D1 5F F3 FF: call 0x5849fba0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x5f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4A 0B 00 00: call 0x5856a720
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2a0h], eax
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes E8 B3 5F F3 FF: call 0x5849fba0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x5f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3C FA F7 FF: call 0x584e9630
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 2d0h], eax
        mov ecx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 35 28 F2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4E AE F1 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xae
        __asm _emit 0xf1
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 2a8h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A BD F2 FF: call 0x58495990
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xbd
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 2ach], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 BA F2 FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xba
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 2b0h], eax
        mov edx, dword ptr [ebp - 2a0h]
        push edx
        mov eax, dword ptr [ebp - 2d0h]
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov edx, dword ptr [ebp - 13ch]
        push edx
        mov eax, dword ptr [ebp - 140h]
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        push ecx
        mov edx, dword ptr [ebp - 120h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 2a8h]
        push ecx
        push 588a9648h
        mov edx, dword ptr [ebp - 2ach]
        push edx
        mov eax, dword ptr [ebp - 2b0h]
        push eax
        push 588a9650h
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 38h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 2b4h], eax
        ; Exact mapped bytes A1 70 20 96 58: mov eax, dword ptr [0x58962070]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2b8h], eax
        push 0
        lea ecx, [ebp - 300h]
        push ecx
        mov edx, dword ptr [ebp - 2b4h]
        push edx
        lea eax, [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 2b8h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov edx, dword ptr [ebp - 12ch]
        add edx, dword ptr [ebp - 20ch]
        mov dword ptr [ebp - 12ch], edx
        mov eax, dword ptr [ebp - 12ch]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 12ch], edx
        ; Exact mapped bytes E9 FE E8 FF FF: jmp 0x58568610
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 34 2E 90 58 00: cmp dword ptr [0x58902e34], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x58569e07
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        cmp dword ptr [edx + 64h], 0
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x58569e07
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 CC F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xcc
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7F AC F1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xac
        __asm _emit 0xf1
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 BB F2 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xbb
        __asm _emit 0xf2
        __asm _emit 0xff
        sar eax, 1
        imul edi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F CC F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xcc
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A8 BC F2 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xbc
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 2dch], eax
        mov ecx, dword ptr [ebp - 124h]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 CC F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xcc
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 91 B9 F2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb9
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 BB F2 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xbb
        __asm _emit 0xf2
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 CC F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xcc
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4A BC F2 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xbc
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 2d8h], esi
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 2bch], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 2d8h]
        push edx
        mov eax, dword ptr [ebp - 2dch]
        push eax
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 BA 3D 00 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 3E A4 FF FF: call 0x58564250
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 2ech]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 2ech], edx
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 2ech]
        push edx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 08 A7 FF FF: call 0x58564550
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 2ech], eax
        mov edx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 66 8B 82 28 02 00 00: mov ax, word ptr [edx + 0x228]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        mov edx, dword ptr [ebp - 124h]
        cmp dword ptr [edx + 2ech], ecx
        ; Exact mapped bytes 7C 1C: jl 0x58569e92
        __asm _emit 0x7c
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 124h]
        ; Exact mapped bytes 66 8B 88 28 02 00 00: mov cx, word ptr [eax + 0x228]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        mov dword ptr [ebp - 210h], edx
        ; Exact mapped bytes EB 12: jmp 0x58569ea4
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 2ech]
        mov dword ptr [ebp - 210h], ecx
        mov edx, dword ptr [ebp - 210h]
        push edx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 5A D2 FF FF: call 0x58567110
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 2ech]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 2ech], ecx
        mov eax, dword ptr [ebp - 124h]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 0F 84 3D 01 00 00: je 0x5856a024
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 A8 BB F2 FF: call 0x58495aa0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xbb
        __asm _emit 0xf2
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 23 01 00 00: jne 0x5856a024
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [edx + 88h]
        ; Exact mapped bytes E8 7E C8 FF FF: call 0x58566790
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 0A 01 00 00: jne 0x5856a024
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B B7 F2 FF: call 0x58495670
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xb7
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 124h]
        sub eax, dword ptr [ecx + 3908h]
        mov dword ptr [ebp - 214h], eax
        mov dword ptr [ebp - 1b0h], 0
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 D2 F6 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd2
        __asm _emit 0xf6
        __asm _emit 0xff
        movzx edx, word ptr [eax + 84h]
        cmp edx, 0dh
        ; Exact mapped bytes 74 17: je 0x58569f6f
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D D2 F6 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd2
        __asm _emit 0xf6
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 10h
        ; Exact mapped bytes 75 14: jne 0x58569f83
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 390ch]
        mov dword ptr [ebp - 1b0h], edx
        ; Exact mapped bytes EB 1C: jmp 0x58569f9f
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 124h]
        imul eax, dword ptr [eax + 390ch], 28h
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 1b0h], eax
        mov edx, dword ptr [ebp - 214h]
        cmp edx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes 73 60: jae 0x5856a00d
        __asm _emit 0x73
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 124h]
        cmp dword ptr [eax + 390ch], 0
        ; Exact mapped bytes 76 51: jbe 0x5856a00d
        __asm _emit 0x76
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 124h]
        cmp dword ptr [ecx + 3908h], 0
        ; Exact mapped bytes 76 42: jbe 0x5856a00d
        __asm _emit 0x76
        __asm _emit 0x42
        imul eax, dword ptr [ebp - 214h], 64h
        mov ecx, dword ptr [ebp - 124h]
        xor edx, edx
        div dword ptr [ecx + 390ch]
        ; Exact mapped bytes 66 89 85 74 FE FF FF: mov word ptr [ebp - 0x18c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 2c0h], eax
        movzx ecx, word ptr [ebp - 18ch]
        push ecx
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 04 F1 1F 00: call 0x58769110
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf1
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 B6 F2 FF: call 0x58495670
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xb6
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 3908h], eax
        mov eax, dword ptr [ebp - 1b4h]
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
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 0E 70 2C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x70
        __asm _emit 0x2c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
