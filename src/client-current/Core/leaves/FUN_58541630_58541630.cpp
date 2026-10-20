// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58541630 .. +0x4A23 bytes.
extern "C" __declspec(naked) void FUN_58541630_58541630() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 704h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 288h], ecx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 0d4h]
        mov dword ptr [ebp - 6fch], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 6f4h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [ecx + 0b0h]
        ; Exact mapped bytes E8 41 F5 27 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf5
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 5e4h], eax
        mov edx, dword ptr [ebp - 5e4h]
        push edx
        mov ecx, dword ptr [ebp - 6f4h]
        ; Exact mapped bytes E8 79 F5 27 00: call 0x587c0c10
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf5
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 6f8h], eax
        mov eax, dword ptr [ebp - 6f8h]
        push eax
        mov ecx, dword ptr [ebp - 6fch]
        ; Exact mapped bytes E8 F1 49 F4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x49
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 2fch], edx
        push 0
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes E8 72 E1 F5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe1
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 300h], ecx
        push 0
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 F3 47 F4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x47
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 1a8h]
        mov dword ptr [ebp - 304h], eax
        push 588a75ceh
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 91 49 F4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x49
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 2c0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5854172b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 2c0h]
        add ecx, 1
        mov dword ptr [ebp - 2c0h], ecx
        cmp dword ptr [ebp - 2c0h], 30h
        ; Exact mapped bytes 7D 44: jge 0x58541778
        __asm _emit 0x7d
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 2c0h]
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx*4 + 0dch]
        ; Exact mapped bytes E8 34 CE F8 FF: call 0x584ce580
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xce
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2c0h]
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx*4 + 0dch]
        mov dword ptr [ebp - 308h], eax
        push 0eeeeeeh
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 6B 49 F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x49
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A4: jmp 0x5854171c
        __asm _emit 0xeb
        __asm _emit 0xa4
        push 0
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 0B 49 00 00: call 0x58546090
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 288h]
        cmp dword ptr [ecx + 268h], 1
        ; Exact mapped bytes 0F 85 AB 48 00 00: jne 0x58546044
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2b8h], 0
        mov edx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 FC A8 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xa8
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, byte ptr [eax]
        mov dword ptr [ebp - 2c4h], eax
        mov ecx, dword ptr [ebp - 2c4h]
        sub ecx, 1
        mov dword ptr [ebp - 2c4h], ecx
        cmp dword ptr [ebp - 2c4h], 0dh
        ; Exact mapped bytes 0F 87 6B 48 00 00: ja 0x58546044
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x6b
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes FF 24 95 54 60 54 58: jmp dword ptr [edx*4 + 0x58546054]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0x60
        __asm _emit 0x54
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 B9 A8 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xa8
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 298h], eax
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes 66 8B 51 10: mov dx, word ptr [ecx + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        push eax
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        mov eax, 0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        movzx ecx, dx
        push ecx
        mov edx, dword ptr [ebp - 298h]
        mov eax, dword ptr [edx + 38ch]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 2B FC FF FF: call 0x58541470
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 288h]
        movzx edx, byte ptr [ecx + 2d8h]
        cmp edx, 2
        ; Exact mapped bytes 75 50: jne 0x585418a8
        __asm _emit 0x75
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 30ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 C9 DF F5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xdf
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 2eh
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 310h], edx
        push 0eeeeeeh
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 3E 48 F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x48
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x58541936
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 F8 04 96 58: mov esi, dword ptr [0x589604f8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor esi, 55555555h
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 1B A6 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xa6
        __asm _emit 0xf4
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7C 22: jl 0x585418eb
        __asm _emit 0x7c
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 314h], edx
        push 1
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 58 DF F5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xdf
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4B: jmp 0x58541936
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 318h], ecx
        push 0
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 36 DF F5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xdf
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 2eh
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 31ch], edx
        push 0eeh
        mov ecx, dword ptr [ebp - 31ch]
        ; Exact mapped bytes E8 AB 47 F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x47
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 99 A5 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa5
        __asm _emit 0xf4
        __asm _emit 0xff
        push eax
        push 588a78a8h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 2eh
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 320h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 320h]
        ; Exact mapped bytes E8 06 C8 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xc8
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], 10ah
        mov dword ptr [ebp - 28ch], 2ch
        mov dword ptr [ebp - 290h], 0ch
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        push eax
        ; Exact mapped bytes E8 BD 06 FE FF: call 0x58522080
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 324h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        imul edx, dword ptr [ebp - 290h], 0
        add ecx, edx
        push ecx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 294h]
        push ecx
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes E8 FA 3B 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x3b
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 328h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 3D C7 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 298h]
        mov edx, dword ptr [ecx + 68h]
        push edx
        push 588a78ach
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 32ch], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        add edx, dword ptr [ebp - 290h]
        push edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 294h]
        push ecx
        mov ecx, dword ptr [ebp - 32ch]
        ; Exact mapped bytes E8 62 3B 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x3b
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 330h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 A5 C6 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc6
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 298h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 334h], ecx
        push 588a78b0h
        ; Exact mapped bytes E8 EC 04 FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 338h], eax
        mov edx, dword ptr [ebp - 334h]
        push edx
        mov eax, dword ptr [ebp - 338h]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 33ch], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 28ch]
        mov ecx, dword ptr [ebp - 290h]
        lea edx, [eax + ecx*2]
        push edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 294h]
        push ecx
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 A7 3A 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x3a
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 340h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 EB C5 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 298h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 344h], ecx
        push 588a78cch
        ; Exact mapped bytes E8 32 04 FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 348h], eax
        mov edx, dword ptr [ebp - 344h]
        push edx
        mov eax, dword ptr [ebp - 348h]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 34ch], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        imul edx, dword ptr [ebp - 290h], 3
        add ecx, edx
        push ecx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 294h]
        push ecx
        mov ecx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes E8 EC 39 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x39
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 350h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 350h]
        ; Exact mapped bytes E8 2F C5 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 298h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 354h], edx
        push 588a78e8h
        ; Exact mapped bytes E8 76 03 FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 358h], eax
        mov eax, dword ptr [ebp - 354h]
        push eax
        mov ecx, dword ptr [ebp - 358h]
        push ecx
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 35ch], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        mov edx, dword ptr [ebp - 290h]
        lea eax, [ecx + edx*4]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 30 39 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x39
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 360h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes E8 73 C4 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xc4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 66 C1 EA 06: shr dx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        mov eax, 0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        movzx ecx, dx
        push ecx
        push 588a7904h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 364h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        imul eax, dword ptr [ebp - 290h], 5
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 364h]
        ; Exact mapped bytes E8 85 38 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 368h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 368h]
        ; Exact mapped bytes E8 C8 C3 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 298h]
        movzx eax, word ptr [edx + 7ch]
        push eax
        push 588a7908h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 36ch], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        imul edx, dword ptr [ebp - 290h], 0ah
        add ecx, edx
        push ecx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 294h]
        push ecx
        mov ecx, dword ptr [ebp - 36ch]
        ; Exact mapped bytes E8 E9 37 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 370h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 2C C3 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 298h]
        movzx edx, word ptr [ecx + 80h]
        push edx
        push 588a7910h
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        imul edx, ecx, 9
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 374h], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 28ch]
        imul ecx, dword ptr [ebp - 290h], 6
        add eax, ecx
        push eax
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 374h]
        ; Exact mapped bytes E8 4A 37 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x37
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 9
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 378h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 378h]
        ; Exact mapped bytes E8 8D C2 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 298h]
        movzx ecx, word ptr [eax + 120h]
        push ecx
        push 588a7914h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        imul ecx, eax, 1eh
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 37ch], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        imul eax, dword ptr [ebp - 290h], 7
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 37ch]
        ; Exact mapped bytes E8 AB 36 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x36
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 1eh
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 380h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes E8 EE C1 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 298h]
        movzx eax, word ptr [edx + 11eh]
        push eax
        push 588a7918h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 1fh
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 384h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        mov edx, dword ptr [ebp - 290h]
        lea eax, [ecx + edx*8]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 384h]
        ; Exact mapped bytes E8 0C 36 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x36
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 1fh
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 388h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 4F C1 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, 3ffh
        mov eax, dword ptr [ebp - 298h]
        ; Exact mapped bytes 66 23 50 0C: and dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x50
        __asm _emit 0x0c
        movzx ecx, dx
        push ecx
        push 588a791ch
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        shl eax, 5
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 38ch], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        imul edx, dword ptr [ebp - 290h], 9
        add ecx, edx
        push ecx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 294h]
        push ecx
        mov ecx, dword ptr [ebp - 38ch]
        ; Exact mapped bytes E8 68 35 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x35
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        shl edx, 5
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 390h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 AB C0 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xc0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], 18bh
        mov dword ptr [ebp - 28ch], 2ch
        mov dword ptr [ebp - 290h], 0ch
        push 0
        push 0
        push 588a7920h
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov ecx, 4
        imul edx, ecx, 7
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 394h], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 28ch]
        imul ecx, dword ptr [ebp - 290h], 0
        add eax, ecx
        push eax
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 B5 34 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x34
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 7
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 398h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 398h]
        ; Exact mapped bytes E8 F8 BF F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xbf
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        push 0
        push 588a792ch
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov ecx, 4
        shl ecx, 3
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 39ch], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        mov eax, dword ptr [ebp - 290h]
        lea ecx, [edx + eax*2]
        push ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 39ch]
        ; Exact mapped bytes E8 20 34 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x34
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 3
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 3a0h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 3a0h]
        ; Exact mapped bytes E8 63 BF F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xbf
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], 217h
        mov dword ptr [ebp - 28ch], 2ch
        mov dword ptr [ebp - 290h], 0ch
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 298h]
        movzx ecx, word ptr [eax + edx + 0d6h]
        push ecx
        push 588a7938h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        imul ecx, eax, 0ah
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 3a4h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        imul eax, dword ptr [ebp - 290h], 0
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 3a4h]
        ; Exact mapped bytes E8 5A 33 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x33
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0ah
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 3a8h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 3a8h]
        ; Exact mapped bytes E8 9D BE F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xbe
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 298h]
        movzx edx, word ptr [ecx + eax + 0d6h]
        push edx
        push 588a793ch
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        imul edx, ecx, 0bh
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 3ach], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 28ch]
        add eax, dword ptr [ebp - 290h]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 3ach]
        ; Exact mapped bytes E8 B5 32 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x32
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 3b0h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 F8 BD F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xbd
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 298h]
        movzx eax, word ptr [edx + 11ah]
        push eax
        push 588a7940h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 0ch
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 3b4h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        mov edx, dword ptr [ebp - 290h]
        lea eax, [ecx + edx*2]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 3b4h]
        ; Exact mapped bytes E8 16 32 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x32
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0ch
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 3b8h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 3b8h]
        ; Exact mapped bytes E8 59 BD F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xbd
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 298h]
        movzx eax, word ptr [edx + 11ch]
        push eax
        push 588a7944h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 21h
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 3bch], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        imul edx, dword ptr [ebp - 290h], 3
        add ecx, edx
        push ecx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 294h]
        push ecx
        mov ecx, dword ptr [ebp - 3bch]
        ; Exact mapped bytes E8 77 31 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x31
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 21h
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 3c0h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 3c0h]
        ; Exact mapped bytes E8 BA BC F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xbc
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, 0ffh
        mov edx, dword ptr [ebp - 298h]
        ; Exact mapped bytes 66 23 4A 10: and cx, word ptr [edx + 0x10]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x4a
        __asm _emit 0x10
        movzx eax, cx
        push eax
        push 588a7948h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 22h
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 3c4h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        mov edx, dword ptr [ebp - 290h]
        lea eax, [ecx + edx*4]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 D3 30 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x30
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 22h
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 3c8h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 3c8h]
        ; Exact mapped bytes E8 16 BC F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xbc
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], 1cfh
        mov dword ptr [ebp - 28ch], 6ch
        mov dword ptr [ebp - 290h], 0ch
        mov edx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 07 9B F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x9b
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0C: mov ax, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E8 0A: shr ax, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        ; Exact mapped bytes 66 89 85 44 FD FF FF: mov word ptr [ebp - 0x2bc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 2bch]
        cmp ecx, 10h
        ; Exact mapped bytes 7E 0C: jle 0x585425d4
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov edx, 10h
        ; Exact mapped bytes 66 89 95 44 FD FF FF: mov word ptr [ebp - 0x2bc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2b8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585425ef
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 2b8h]
        add eax, 1
        mov dword ptr [ebp - 2b8h], eax
        movzx ecx, word ptr [ebp - 2bch]
        cmp dword ptr [ebp - 2b8h], ecx
        ; Exact mapped bytes 0F 8D CF 00 00 00: jge 0x585426d1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2b8h]
        mov eax, dword ptr [ebp - 298h]
        movzx ecx, word ptr [eax + edx*2 + 0dah]
        push ecx
        push 588a794ch
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, dword ptr [ebp - 2b8h]
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax*4 + 110h]
        mov dword ptr [ebp - 3cch], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        mov edx, dword ptr [ebp - 2b8h]
        and edx, 80000007h
        ; Exact mapped bytes 79 05: jns 0x58542667
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffff8h
        inc edx
        imul edx, dword ptr [ebp - 290h]
        add ecx, edx
        push ecx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 294h]
        mov eax, dword ptr [ebp - 2b8h]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        imul edx, eax, 46h
        add ecx, edx
        push ecx
        mov ecx, dword ptr [ebp - 3cch]
        ; Exact mapped bytes E8 80 2F 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x2f
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2b8h]
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax*4 + 110h]
        mov dword ptr [ebp - 3d0h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes E8 C5 BA F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xba
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0F FF FF FF: jmp 0x585425e0
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 3d4h], edx
        mov eax, dword ptr [ebp - 298h]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        mov edx, 0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        movzx eax, cx
        push eax
        mov ecx, dword ptr [ebp - 3d4h]
        ; Exact mapped bytes E8 88 8A 27 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x8a
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 298h]
        mov edx, dword ptr [ecx + 35ch]
        mov dword ptr [ebp - 704h], edx
        ; Exact mapped bytes E9 25 39 00 00: jmp 0x58546044
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 80 99 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2b4h], eax
        mov ecx, dword ptr [ebp - 2b4h]
        movzx edx, word ptr [ecx + 6]
        push edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 2b4h]
        mov eax, dword ptr [edx + ecx + 28h]
        push eax
        mov ecx, dword ptr [ebp - 2b4h]
        mov edx, dword ptr [ecx + 68h]
        push edx
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 07 ED FF FF: call 0x58541470
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 36 99 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x99
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 4]
        mov dword ptr [ebp - 3d8h], ecx
        mov edx, dword ptr [ebp - 3d8h]
        push edx
        ; Exact mapped bytes 8B 0D 3C 07 96 58: mov ecx, dword ptr [0x5896073c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A 23 F4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x23
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 288h]
        mov dword ptr [ecx + 9ch], eax
        mov edx, dword ptr [ebp - 288h]
        mov dword ptr [edx + 0a0h], 0
        mov eax, dword ptr [ebp - 2b4h]
        mov eax, dword ptr [eax + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov eax, edx
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 3dch], eax
        mov edx, dword ptr [ebp - 2b4h]
        mov eax, dword ptr [edx + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov dword ptr [ebp - 3e0h], eax
        push 588a7950h
        ; Exact mapped bytes E8 F9 F7 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf7
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 3e4h], eax
        mov edx, dword ptr [ebp - 3dch]
        push edx
        mov eax, dword ptr [ebp - 3e0h]
        push eax
        mov ecx, dword ptr [ebp - 3e4h]
        push ecx
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        imul ecx, eax, 2ch
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 3e8h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes E8 3E B9 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xb9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2b4h]
        movzx eax, word ptr [edx + 1eh]
        push eax
        push 588a796ch
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 2dh
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 3ech], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 3ech]
        ; Exact mapped bytes E8 F1 B8 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb8
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [ecx + 2f8h]
        ; Exact mapped bytes E8 30 96 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0xff
        push eax
        push 588a7970h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        imul ecx, eax, 2eh
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 3f0h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 3f0h]
        ; Exact mapped bytes E8 9D B8 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xb8
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], 1eah
        mov dword ptr [ebp - 28ch], 28h
        mov dword ptr [ebp - 290h], 0bh
        mov edx, dword ptr [ebp - 2b4h]
        mov eax, dword ptr [edx + 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 2b4h]
        mov edx, dword ptr [ecx + 98h]
        push edx
        push 588a7974h
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 3f4h], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 28ch]
        imul ecx, dword ptr [ebp - 290h], 0
        add eax, ecx
        push eax
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 3f4h]
        ; Exact mapped bytes E8 91 2C 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x2c
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 3f8h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 3f8h]
        ; Exact mapped bytes E8 D4 B7 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2b4h]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 3fch], ecx
        push 588a7980h
        ; Exact mapped bytes E8 18 F6 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 400h], eax
        mov edx, dword ptr [ebp - 3fch]
        push edx
        mov eax, dword ptr [ebp - 400h]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 404h], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 28ch]
        add eax, dword ptr [ebp - 290h]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 404h]
        ; Exact mapped bytes E8 D5 2B 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x2b
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 408h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 408h]
        ; Exact mapped bytes E8 18 B7 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2b4h]
        movzx edx, word ptr [ecx + 0ah]
        push edx
        push 588a799ch
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 40ch], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        mov eax, dword ptr [ebp - 290h]
        lea ecx, [edx + eax*2]
        push ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes E8 3A 2B 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x2b
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 410h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 410h]
        ; Exact mapped bytes E8 7E B6 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xb6
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], 124h
        mov dword ptr [ebp - 28ch], 28h
        mov dword ptr [ebp - 290h], 0bh
        mov edx, dword ptr [ebp - 2b4h]
        movzx eax, word ptr [edx + 0ah]
        push eax
        push 588a79a4h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 414h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        imul edx, dword ptr [ebp - 290h], 0
        add ecx, edx
        push ecx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 294h]
        push ecx
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 81 2A 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x2a
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 418h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 418h]
        ; Exact mapped bytes E8 C4 B5 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xb5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2b4h]
        movzx edx, word ptr [ecx + 1ch]
        push edx
        push 588a79a8h
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 41ch], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        add edx, dword ptr [ebp - 290h]
        push edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 294h]
        push ecx
        mov ecx, dword ptr [ebp - 41ch]
        ; Exact mapped bytes E8 E8 29 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 420h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 420h]
        ; Exact mapped bytes E8 2B B5 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xb5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2b4h]
        movzx ecx, word ptr [eax + 1eh]
        mov dword ptr [ebp - 424h], ecx
        mov edx, dword ptr [ebp - 2b4h]
        mov eax, dword ptr [edx + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov dword ptr [ebp - 428h], eax
        mov edx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 42 92 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x92
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 42ch], eax
        mov eax, dword ptr [ebp - 424h]
        push eax
        mov ecx, dword ptr [ebp - 428h]
        push ecx
        mov edx, dword ptr [ebp - 42ch]
        push edx
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 0C BB FF FF: call 0x5853e7d0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 7A 33 00 00: jmp 0x58546044
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 D5 93 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x93
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2a8h], eax
        mov ecx, dword ptr [ebp - 2a8h]
        movzx edx, word ptr [ecx + 6]
        push edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 2a8h]
        mov eax, dword ptr [edx + ecx + 28h]
        push eax
        mov ecx, dword ptr [ebp - 2a8h]
        mov edx, dword ptr [ecx + 68h]
        push edx
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 5C E7 FF FF: call 0x58541470
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 288h]
        movzx ecx, byte ptr [eax + 2d8h]
        cmp ecx, 2
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x58542ded
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A 1C F4 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x1c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A3 1C F4 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x1c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [eax + 26ch]
        mov dword ptr [ebp - 430h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, 1fh
        sub ecx, dword ptr [eax + 270h]
        mov dword ptr [ebp - 434h], ecx
        mov edx, dword ptr [ebp - 430h]
        mov ecx, dword ptr [ebp - 434h]
        shr edx, cl
        and edx, 1
        ; Exact mapped bytes 74 0C: je 0x58542d7f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 2f8h], 1
        ; Exact mapped bytes EB 0A: jmp 0x58542d89
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2f8h], 0
        mov eax, dword ptr [ebp - 2f8h]
        mov dword ptr [ebp - 2f4h], eax
        mov ecx, dword ptr [ebp - 2a8h]
        movzx edx, word ptr [ecx + 4]
        mov eax, dword ptr [ebp - 2f4h]
        lea ecx, [edx + eax + 3]
        push ecx
        ; Exact mapped bytes 8B 0D 70 75 94 58: mov ecx, dword ptr [0x58947570]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 1D F4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x1d
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov dword ptr [edx + 9ch], eax
        mov eax, dword ptr [ebp - 2a8h]
        movzx ecx, word ptr [eax + 4]
        mov edx, dword ptr [ebp - 2f4h]
        lea eax, [ecx + edx + 5]
        push eax
        ; Exact mapped bytes 8B 0D 70 75 94 58: mov ecx, dword ptr [0x58947570]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF 1C F4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x1c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 288h]
        mov dword ptr [ecx + 0a0h], eax
        mov edx, dword ptr [ebp - 2a8h]
        mov eax, dword ptr [edx + 24h]
        mov dword ptr [ebp - 2c8h], eax
        mov eax, dword ptr [ebp - 2c8h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov eax, edx
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        mov eax, dword ptr [ebp - 2c8h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        push 588a79ach
        ; Exact mapped bytes E8 C2 F1 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf1
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        imul ecx, eax, 2ch
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 438h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 438h]
        ; Exact mapped bytes E8 21 B3 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2a8h]
        movzx eax, word ptr [edx + 1eh]
        push eax
        push 588a79c8h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 2dh
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 43ch], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 43ch]
        ; Exact mapped bytes E8 D4 B2 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [ecx + 2f8h]
        ; Exact mapped bytes E8 13 90 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x90
        __asm _emit 0xf4
        __asm _emit 0xff
        push eax
        push 588a79cch
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        imul ecx, eax, 2eh
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 440h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 440h]
        ; Exact mapped bytes E8 80 B2 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xb2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], 1cch
        mov dword ptr [ebp - 28ch], 24h
        mov dword ptr [ebp - 290h], 0ch
        mov edx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes 66 8B 82 98 00 00 00: mov ax, word ptr [edx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 07: and ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x07
        movzx ecx, ax
        push ecx
        ; Exact mapped bytes E8 98 EF FD FF: call 0x58521ee0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        push 588a79d0h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 444h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        imul eax, dword ptr [ebp - 290h], 0
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 444h]
        ; Exact mapped bytes E8 70 26 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x26
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 448h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 448h]
        ; Exact mapped bytes E8 B3 B1 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2a8h]
        movzx eax, word ptr [edx + 0a0h]
        mov dword ptr [ebp - 2cch], eax
        mov eax, dword ptr [ebp - 2cch]
        cdq
        mov ecx, 64h
        idiv ecx
        push edx
        mov eax, dword ptr [ebp - 2cch]
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        push 588a79d4h
        ; Exact mapped bytes E8 D8 EF FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 44ch], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        add ecx, dword ptr [ebp - 290h]
        push ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 44ch]
        ; Exact mapped bytes E8 A8 25 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x25
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 450h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 450h]
        ; Exact mapped bytes E8 EB B0 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xb0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2a8h]
        movzx eax, word ptr [edx + 0a6h]
        mov dword ptr [ebp - 454h], eax
        push 588a79f4h
        ; Exact mapped bytes E8 2E EF FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 458h], eax
        mov ecx, dword ptr [ebp - 454h]
        push ecx
        mov edx, dword ptr [ebp - 458h]
        push edx
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 45ch], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        mov eax, dword ptr [ebp - 290h]
        lea ecx, [edx + eax*2]
        push ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 45ch]
        ; Exact mapped bytes E8 E9 24 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 460h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 460h]
        ; Exact mapped bytes E8 2D B0 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xb0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2a8h]
        movzx eax, word ptr [edx + 9eh]
        imul ecx, eax, 28h
        mov dword ptr [ebp - 2d0h], ecx
        mov eax, dword ptr [ebp - 2d0h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov eax, edx
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        mov eax, dword ptr [ebp - 2d0h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        push 588a7a18h
        ; Exact mapped bytes E8 45 EE FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 464h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        imul eax, dword ptr [ebp - 290h], 3
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 464h]
        ; Exact mapped bytes E8 12 24 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x24
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 468h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 468h]
        ; Exact mapped bytes E8 55 AF F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xaf
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes 66 8B 82 9A 00 00 00: mov ax, word ptr [edx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 7F: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        movzx ecx, ax
        mov dword ptr [ebp - 46ch], ecx
        push 588a7a38h
        ; Exact mapped bytes E8 8D ED FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xed
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 470h], eax
        mov edx, dword ptr [ebp - 46ch]
        push edx
        mov eax, dword ptr [ebp - 470h]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 474h], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 28ch]
        mov ecx, dword ptr [ebp - 290h]
        lea edx, [eax + ecx*4]
        push edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 294h]
        push ecx
        mov ecx, dword ptr [ebp - 474h]
        ; Exact mapped bytes E8 47 23 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x23
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 478h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 478h]
        ; Exact mapped bytes E8 8A AE F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xae
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes 66 8B 88 9C 00 00 00: mov cx, word ptr [eax + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx edx, cx
        mov dword ptr [ebp - 47ch], edx
        push 588a7a58h
        ; Exact mapped bytes E8 C6 EC FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 480h], eax
        mov eax, dword ptr [ebp - 47ch]
        push eax
        mov ecx, dword ptr [ebp - 480h]
        push ecx
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 484h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        imul eax, dword ptr [ebp - 290h], 5
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 484h]
        ; Exact mapped bytes E8 80 22 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x22
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 488h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 488h]
        ; Exact mapped bytes E8 C3 AD F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xad
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], 124h
        mov dword ptr [ebp - 28ch], 28h
        mov dword ptr [ebp - 290h], 0bh
        mov edx, dword ptr [ebp - 2a8h]
        movzx eax, word ptr [edx + 0ah]
        push eax
        push 588a7a7ch
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 48ch], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        imul edx, dword ptr [ebp - 290h], 0
        add ecx, edx
        push ecx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 294h]
        push ecx
        mov ecx, dword ptr [ebp - 48ch]
        ; Exact mapped bytes E8 C6 21 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x21
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 490h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 490h]
        ; Exact mapped bytes E8 09 AD F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xad
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2a8h]
        movzx edx, word ptr [ecx + 1ch]
        push edx
        push 588a7a80h
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        imul edx, ecx, 7
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 494h], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 28ch]
        add eax, dword ptr [ebp - 290h]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 494h]
        ; Exact mapped bytes E8 2D 21 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x21
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 7
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 498h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 498h]
        ; Exact mapped bytes E8 70 AC F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xac
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 288h]
        movzx eax, byte ptr [edx + 2d8h]
        cmp eax, 1
        ; Exact mapped bytes 75 62: jne 0x58543595
        __asm _emit 0x75
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 2a8h]
        movzx edx, word ptr [ecx + 1eh]
        mov dword ptr [ebp - 49ch], edx
        mov eax, dword ptr [ebp - 2a8h]
        mov eax, dword ptr [eax + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov dword ptr [ebp - 4a0h], eax
        mov edx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 74 89 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x89
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 4a4h], eax
        mov eax, dword ptr [ebp - 49ch]
        push eax
        mov ecx, dword ptr [ebp - 4a0h]
        push ecx
        mov edx, dword ptr [ebp - 4a4h]
        push edx
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 3E B2 FF FF: call 0x5853e7d0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 32: jmp 0x585435c7
        __asm _emit 0xeb
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 288h]
        movzx ecx, byte ptr [eax + 2d8h]
        cmp ecx, 2
        ; Exact mapped bytes 75 20: jne 0x585435c7
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 4a8h], eax
        push 1
        mov ecx, dword ptr [ebp - 4a8h]
        ; Exact mapped bytes E8 7A C2 F5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xc2
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 78 2A 00 00: jmp 0x58546044
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [ecx + 2f8h]
        ; Exact mapped bytes E8 D3 8A F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x8a
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2ach], eax
        mov edx, dword ptr [ebp - 2ach]
        movzx eax, word ptr [edx + 6]
        push eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 2ach]
        mov ecx, dword ptr [eax + edx + 28h]
        push ecx
        mov edx, dword ptr [ebp - 2ach]
        mov eax, dword ptr [edx + 68h]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 5A DE FF FF: call 0x58541470
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ach]
        movzx edx, word ptr [ecx + 4]
        push edx
        ; Exact mapped bytes 8B 0D 38 07 96 58: mov ecx, dword ptr [0x58960738]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 14 F4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x14
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 288h]
        mov dword ptr [ecx + 9ch], eax
        mov edx, dword ptr [ebp - 288h]
        mov dword ptr [edx + 0a0h], 0
        mov eax, dword ptr [ebp - 2ach]
        mov eax, dword ptr [eax + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov eax, edx
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 4ach], eax
        mov edx, dword ptr [ebp - 2ach]
        mov eax, dword ptr [edx + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov dword ptr [ebp - 4b0h], eax
        push 588a7a84h
        ; Exact mapped bytes E8 63 E9 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4b4h], eax
        mov edx, dword ptr [ebp - 4ach]
        push edx
        mov eax, dword ptr [ebp - 4b0h]
        push eax
        mov ecx, dword ptr [ebp - 4b4h]
        push ecx
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        imul ecx, eax, 2ch
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 4b8h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 4b8h]
        ; Exact mapped bytes E8 A8 AA F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xaa
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ach]
        movzx eax, word ptr [edx + 1eh]
        push eax
        push 588a7aa0h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 2dh
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 4bch], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 4bch]
        ; Exact mapped bytes E8 5B AA F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xaa
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [ecx + 2f8h]
        ; Exact mapped bytes E8 9A 87 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x87
        __asm _emit 0xf4
        __asm _emit 0xff
        push eax
        push 588a7aa4h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        imul ecx, eax, 2eh
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 4c0h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 4c0h]
        ; Exact mapped bytes E8 07 AA F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xaa
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], 1d6h
        mov dword ptr [ebp - 28ch], 2ah
        mov dword ptr [ebp - 290h], 0ch
        mov edx, dword ptr [ebp - 2ach]
        movzx eax, word ptr [edx + 98h]
        push eax
        push 588a7aa8h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 4c4h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        imul edx, dword ptr [ebp - 290h], 0
        add ecx, edx
        push ecx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 294h]
        push ecx
        mov ecx, dword ptr [ebp - 4c4h]
        ; Exact mapped bytes E8 07 1E 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x1e
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 4c8h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 4c8h]
        ; Exact mapped bytes E8 4A A9 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ach]
        movzx eax, word ptr [ecx + 9ah]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 4cch], edx
        mov edx, dword ptr [ebp - 2ach]
        movzx eax, word ptr [edx + 9ah]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 4d0h], eax
        push 588a7ab0h
        ; Exact mapped bytes E8 6A E7 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4d4h], eax
        mov edx, dword ptr [ebp - 4cch]
        push edx
        mov eax, dword ptr [ebp - 4d0h]
        push eax
        mov ecx, dword ptr [ebp - 4d4h]
        push ecx
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 4d8h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        add ecx, dword ptr [ebp - 290h]
        push ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 4d8h]
        ; Exact mapped bytes E8 20 1D 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x1d
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 4dch], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 4dch]
        ; Exact mapped bytes E8 63 A8 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xa8
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ach]
        movzx eax, word ptr [edx + 9ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 4e0h], edx
        mov edx, dword ptr [ebp - 2ach]
        movzx eax, word ptr [edx + 9ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 4e4h], eax
        push 588a7acch
        ; Exact mapped bytes E8 83 E6 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xe6
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4e8h], eax
        mov edx, dword ptr [ebp - 4e0h]
        push edx
        mov eax, dword ptr [ebp - 4e4h]
        push eax
        mov ecx, dword ptr [ebp - 4e8h]
        push ecx
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 4ech], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        mov edx, dword ptr [ebp - 290h]
        lea eax, [ecx + edx*2]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 4ech]
        ; Exact mapped bytes E8 37 1C 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x1c
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 4f0h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 4f0h]
        ; Exact mapped bytes E8 7B A7 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xa7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ach]
        movzx edx, word ptr [ecx + 9eh]
        shl edx, 3
        mov dword ptr [ebp - 2d4h], edx
        mov eax, dword ptr [ebp - 2d4h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push edx
        mov eax, dword ptr [ebp - 2d4h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        push 588a7ae8h
        ; Exact mapped bytes E8 9D E5 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 4f4h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        imul eax, dword ptr [ebp - 290h], 3
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 4f4h]
        ; Exact mapped bytes E8 6A 1B 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x1b
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 4f8h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 4f8h]
        ; Exact mapped bytes E8 AD A6 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa6
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], 124h
        mov dword ptr [ebp - 28ch], 28h
        mov dword ptr [ebp - 290h], 0bh
        mov edx, dword ptr [ebp - 2ach]
        movzx eax, word ptr [edx + 0ah]
        push eax
        push 588a7b04h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 4fch], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 28ch]
        imul ecx, dword ptr [ebp - 290h], 0
        add eax, ecx
        push eax
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 4fch]
        ; Exact mapped bytes E8 B0 1A 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x1a
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 500h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 500h]
        ; Exact mapped bytes E8 F3 A5 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xa5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ach]
        movzx eax, word ptr [edx + 1ch]
        push eax
        push 588a7b08h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 5
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 504h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        add ecx, dword ptr [ebp - 290h]
        push ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 504h]
        ; Exact mapped bytes E8 17 1A 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x1a
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 508h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 508h]
        ; Exact mapped bytes E8 5A A5 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xa5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ach]
        movzx ecx, word ptr [eax + 1eh]
        mov dword ptr [ebp - 50ch], ecx
        mov edx, dword ptr [ebp - 2ach]
        mov eax, dword ptr [edx + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov dword ptr [ebp - 510h], eax
        mov edx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 71 82 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x82
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 514h], eax
        mov eax, dword ptr [ebp - 50ch]
        push eax
        mov ecx, dword ptr [ebp - 510h]
        push ecx
        mov edx, dword ptr [ebp - 514h]
        push edx
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 3B AB FF FF: call 0x5853e7d0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A9 23 00 00: jmp 0x58546044
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 04 84 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2b0h], eax
        mov ecx, dword ptr [ebp - 2b0h]
        movzx edx, word ptr [ecx + 6]
        push edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 2b0h]
        mov eax, dword ptr [edx + ecx + 28h]
        push eax
        mov ecx, dword ptr [ebp - 2b0h]
        mov edx, dword ptr [ecx + 68h]
        push edx
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 8B D7 FF FF: call 0x58541470
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2b0h]
        movzx ecx, word ptr [eax + 4]
        add ecx, 3
        push ecx
        ; Exact mapped bytes 8B 0D 34 07 96 58: mov ecx, dword ptr [0x58960734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 0D F4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov dword ptr [edx + 9ch], eax
        mov eax, dword ptr [ebp - 2b0h]
        movzx ecx, word ptr [eax + 4]
        add ecx, 4
        push ecx
        ; Exact mapped bytes 8B 0D 34 07 96 58: mov ecx, dword ptr [0x58960734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD 0D F4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov dword ptr [edx + 0a0h], eax
        mov eax, dword ptr [ebp - 2b0h]
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 2d8h], ecx
        mov eax, dword ptr [ebp - 2d8h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov eax, edx
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        mov eax, dword ptr [ebp - 2d8h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        push 588a7b0ch
        ; Exact mapped bytes E8 80 E2 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        imul ecx, eax, 2ch
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 518h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 518h]
        ; Exact mapped bytes E8 DF A3 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2b0h]
        movzx eax, word ptr [edx + 1eh]
        push eax
        push 588a7b28h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 2dh
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 51ch], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 51ch]
        ; Exact mapped bytes E8 92 A3 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [ecx + 2f8h]
        ; Exact mapped bytes E8 D1 80 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x80
        __asm _emit 0xf4
        __asm _emit 0xff
        push eax
        push 588a7b2ch
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        imul ecx, eax, 2eh
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 520h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 520h]
        ; Exact mapped bytes E8 3E A3 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], 1cch
        mov dword ptr [ebp - 28ch], 28h
        mov dword ptr [ebp - 290h], 0ch
        mov edx, dword ptr [ebp - 2b0h]
        movzx eax, word ptr [edx + 0a2h]
        mov dword ptr [ebp - 2dch], eax
        mov eax, dword ptr [ebp - 2dch]
        cdq
        mov ecx, 64h
        idiv ecx
        push edx
        mov eax, dword ptr [ebp - 2dch]
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        push 588a7b30h
        ; Exact mapped bytes E8 45 E1 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 524h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        imul eax, dword ptr [ebp - 290h], 0
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 524h]
        ; Exact mapped bytes E8 12 17 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x17
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 528h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 528h]
        ; Exact mapped bytes E8 55 A2 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xa2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2b0h]
        movzx eax, word ptr [edx + 0a0h]
        imul ecx, eax, 28h
        mov dword ptr [ebp - 2e0h], ecx
        mov eax, dword ptr [ebp - 2e0h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov eax, edx
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        mov eax, dword ptr [ebp - 2e0h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        push 588a7b50h
        ; Exact mapped bytes E8 6D E0 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 52ch], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        add ecx, dword ptr [ebp - 290h]
        push ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 52ch]
        ; Exact mapped bytes E8 3D 16 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x16
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 530h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 530h]
        ; Exact mapped bytes E8 80 A1 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes 66 8B 82 98 00 00 00: mov ax, word ptr [edx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        push ecx
        push 588a7b70h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 534h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        mov edx, dword ptr [ebp - 290h]
        lea eax, [ecx + edx*2]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 534h]
        ; Exact mapped bytes E8 98 15 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x15
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 538h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 538h]
        ; Exact mapped bytes E8 DC A0 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xa0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes 66 8B 91 98 00 00 00: mov dx, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        push eax
        push 588a7b78h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 53ch], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        imul edx, dword ptr [ebp - 290h], 3
        add ecx, edx
        push ecx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 294h]
        push ecx
        mov ecx, dword ptr [ebp - 53ch]
        ; Exact mapped bytes E8 EF 14 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x14
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 540h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 540h]
        ; Exact mapped bytes E8 32 A0 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2b0h]
        movzx edx, byte ptr [ecx + 9fh]
        push edx
        mov eax, dword ptr [ebp - 2b0h]
        movzx ecx, byte ptr [eax + 9eh]
        push ecx
        push 588a7b7ch
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 544h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        mov edx, dword ptr [ebp - 290h]
        lea eax, [ecx + edx*4]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 544h]
        ; Exact mapped bytes E8 42 14 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 548h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 548h]
        ; Exact mapped bytes E8 85 9F F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], 124h
        mov dword ptr [ebp - 28ch], 28h
        mov dword ptr [ebp - 290h], 0bh
        mov ecx, dword ptr [ebp - 2b0h]
        movzx edx, word ptr [ecx + 0ah]
        push edx
        push 588a7b88h
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 54ch], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 28ch]
        imul ecx, dword ptr [ebp - 290h], 0
        add eax, ecx
        push eax
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 54ch]
        ; Exact mapped bytes E8 88 13 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 550h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 550h]
        ; Exact mapped bytes E8 CB 9E F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x9e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2b0h]
        movzx ecx, word ptr [eax + 1ch]
        push ecx
        push 588a7b8ch
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        imul ecx, eax, 6
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 554h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        add edx, dword ptr [ebp - 290h]
        push edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 294h]
        push ecx
        mov ecx, dword ptr [ebp - 554h]
        ; Exact mapped bytes E8 EF 12 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x12
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 558h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 558h]
        ; Exact mapped bytes E8 32 9E F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x9e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2b0h]
        movzx edx, word ptr [ecx + 1eh]
        mov dword ptr [ebp - 55ch], edx
        mov eax, dword ptr [ebp - 2b0h]
        mov eax, dword ptr [eax + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov dword ptr [ebp - 560h], eax
        mov edx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 49 7B F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x7b
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 564h], eax
        mov eax, dword ptr [ebp - 55ch]
        push eax
        mov ecx, dword ptr [ebp - 560h]
        push ecx
        mov edx, dword ptr [ebp - 564h]
        push edx
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 13 A4 FF FF: call 0x5853e7d0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 81 1C 00 00: jmp 0x58546044
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 DC 7C F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x7c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        mov ecx, dword ptr [ebp - 2a0h]
        movzx edx, word ptr [ecx + 6]
        push edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 2a0h]
        mov eax, dword ptr [edx + ecx + 28h]
        push eax
        mov ecx, dword ptr [ebp - 2a0h]
        mov edx, dword ptr [ecx + 68h]
        push edx
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 63 D0 FF FF: call 0x58541470
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 2a0h]
        movzx eax, word ptr [edx + ecx + 20h]
        cmp eax, 2
        ; Exact mapped bytes 0F 85 E1 01 00 00: jne 0x5854460b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 2a0h]
        movzx eax, word ptr [edx + ecx + 20h]
        mov dword ptr [ebp - 2e4h], eax
        cmp dword ptr [ebp - 2e4h], 1
        ; Exact mapped bytes 74 12: je 0x5854445e
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 2e4h], 8
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x58544536
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AB 01 00 00: jmp 0x58544609
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        push 0
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes E8 9F 89 30 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x89
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 0ch
        push 0
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 2a0h]
        movzx ecx, word ptr [eax + edx + 20h]
        push ecx
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 2a0h]
        movzx edx, word ptr [ecx + eax + 20h]
        push edx
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 F3 17 00: call 0x586c38a0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf3
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 568h], eax
        push 588a7b90h
        ; Exact mapped bytes E8 37 DB FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 56ch], eax
        mov eax, dword ptr [ebp - 568h]
        push eax
        mov ecx, dword ptr [ebp - 56ch]
        push ecx
        lea edx, [ebp - 204h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 570h], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, 1ach
        push eax
        mov ecx, dword ptr [ebp - 570h]
        ; Exact mapped bytes E8 A4 11 27 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x11
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 574h], edx
        lea eax, [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 574h]
        ; Exact mapped bytes E8 70 1B F4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x1b
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D3 00 00 00: jmp 0x58544609
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        push 0
        lea ecx, [ebp - 284h]
        push ecx
        ; Exact mapped bytes E8 C7 88 30 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x88
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 0ch
        push 0
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 2a0h]
        movzx ecx, word ptr [eax + edx + 20h]
        push ecx
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 2a0h]
        movzx edx, word ptr [ecx + eax + 20h]
        push edx
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F F3 17 00: call 0x586c38a0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf3
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 578h], eax
        push 588a7bb8h
        ; Exact mapped bytes E8 5F DA FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 57ch], eax
        mov eax, dword ptr [ebp - 578h]
        push eax
        mov ecx, dword ptr [ebp - 57ch]
        push ecx
        lea edx, [ebp - 284h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 580h], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, 1a0h
        push eax
        mov ecx, dword ptr [ebp - 580h]
        ; Exact mapped bytes E8 CC 10 27 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 584h], edx
        lea eax, [ebp - 284h]
        push eax
        mov ecx, dword ptr [ebp - 584h]
        ; Exact mapped bytes E8 98 1A F4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x1a
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 23: jmp 0x5854462e
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 588h], edx
        push 588a75cfh
        mov ecx, dword ptr [ebp - 588h]
        ; Exact mapped bytes E8 73 1A F4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x1a
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 2a0h]
        movzx ecx, word ptr [eax + 9eh]
        mov dword ptr [ebp - 58ch], ecx
        push 588a7be4h
        ; Exact mapped bytes E8 A5 D9 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 590h], eax
        mov edx, dword ptr [ebp - 58ch]
        push edx
        mov eax, dword ptr [ebp - 590h]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 2ch
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 594h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 594h]
        ; Exact mapped bytes E8 F1 9A F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x9a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2a0h]
        movzx eax, word ptr [ecx + 1eh]
        cdq
        mov ecx, 0ah
        idiv ecx
        push edx
        mov edx, dword ptr [ebp - 2a0h]
        movzx eax, word ptr [edx + 1eh]
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        push 588a7c08h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        imul ecx, eax, 2dh
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 598h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 598h]
        ; Exact mapped bytes E8 89 9A F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x9a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 C8 77 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x77
        __asm _emit 0xf4
        __asm _emit 0xff
        push eax
        push 588a7c10h
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        imul edx, ecx, 2eh
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 59ch], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 59ch]
        ; Exact mapped bytes E8 35 9A F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x9a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 1ach]
        mov dword ptr [ebp - 5a0h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, 96h
        push edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1c6h
        push ecx
        mov ecx, dword ptr [ebp - 5a0h]
        ; Exact mapped bytes E8 7F 0E 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x0e
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 1ach]
        mov dword ptr [ebp - 5a4h], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, 0a2h
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, 1c6h
        push edx
        mov ecx, dword ptr [ebp - 5a4h]
        ; Exact mapped bytes E8 3A 0E 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x0e
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 1ach]
        mov dword ptr [ebp - 5a8h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 0aeh
        push ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, 1c6h
        push eax
        mov ecx, dword ptr [ebp - 5a8h]
        ; Exact mapped bytes E8 F6 0D 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x0d
        __asm _emit 0x27
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 59 18 00 00: call 0x58546090
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 294h], 1e6h
        mov dword ptr [ebp - 28ch], 28h
        mov dword ptr [ebp - 290h], 0ch
        mov ecx, dword ptr [ebp - 2a0h]
        movzx eax, word ptr [ecx + 0a0h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 5ach], edx
        mov edx, dword ptr [ebp - 2a0h]
        movzx eax, word ptr [edx + 0a0h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 5b0h], eax
        push 588a7c14h
        ; Exact mapped bytes E8 5B D7 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 5b4h], eax
        mov edx, dword ptr [ebp - 5ach]
        push edx
        mov eax, dword ptr [ebp - 5b0h]
        push eax
        mov ecx, dword ptr [ebp - 5b4h]
        push ecx
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 5b8h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        imul eax, dword ptr [ebp - 290h], 0
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 5b8h]
        ; Exact mapped bytes E8 0E 0D 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0d
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 5bch], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 5bch]
        ; Exact mapped bytes E8 51 98 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x98
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes 66 8B 82 98 00 00 00: mov ax, word ptr [edx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        movzx edx, ax
        push edx
        mov eax, dword ptr [ebp - 2a0h]
        movzx ecx, word ptr [eax + 9ch]
        push ecx
        push 588a7c34h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 5c0h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        add ecx, dword ptr [ebp - 290h]
        push ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 5c0h]
        ; Exact mapped bytes E8 55 0C 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0c
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 5c4h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 5c4h]
        ; Exact mapped bytes E8 98 97 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x97
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, 0ffh
        mov eax, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes 66 23 90 98 00 00 00: and dx, word ptr [eax + 0x98]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, dx
        push ecx
        push 588a7c3ch
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 5c8h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        mov edx, dword ptr [ebp - 290h]
        lea eax, [ecx + edx*2]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 5c8h]
        ; Exact mapped bytes E8 AF 0B 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x0b
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 5cch], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 5cch]
        ; Exact mapped bytes E8 F3 96 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2a0h]
        movzx edx, word ptr [ecx + 0a4h]
        push edx
        push 588a7c40h
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 5d0h], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 28ch]
        imul ecx, dword ptr [ebp - 290h], 3
        add eax, ecx
        push eax
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 5d0h]
        ; Exact mapped bytes E8 11 0B 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x0b
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 5d4h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 5d4h]
        ; Exact mapped bytes E8 54 96 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], 124h
        mov dword ptr [ebp - 28ch], 28h
        mov dword ptr [ebp - 290h], 0bh
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 45 75 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x75
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 250h]
        ; Exact mapped bytes 75 30: jne 0x58544bab
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 1a0h]
        mov dword ptr [ebp - 5d8h], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 25ch]
        xor eax, 55h
        push eax
        mov ecx, dword ptr [ebp - 5d8h]
        ; Exact mapped bytes E8 88 FC 27 00: call 0x587c4830
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 5F: jmp 0x58544c0a
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 288h]
        movzx edx, word ptr [ecx + 2b0h]
        test edx, edx
        ; Exact mapped bytes 7E 2E: jle 0x58544bea
        __asm _emit 0x7e
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 1a0h]
        mov dword ptr [ebp - 5dch], ecx
        mov edx, dword ptr [ebp - 288h]
        movzx eax, word ptr [edx + 2b0h]
        push eax
        mov ecx, dword ptr [ebp - 5dch]
        ; Exact mapped bytes E8 49 FC 27 00: call 0x587c4830
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xfc
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 20: jmp 0x58544c0a
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 1a0h]
        mov dword ptr [ebp - 5e0h], edx
        push 1
        mov ecx, dword ptr [ebp - 5e0h]
        ; Exact mapped bytes E8 27 FC 27 00: call 0x587c4830
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfc
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 288h]
        movzx ecx, byte ptr [eax + 2d8h]
        cmp ecx, 2
        ; Exact mapped bytes 75 0E: jne 0x58544c2a
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 C9 B4 FF FF: call 0x585400f0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0C: jmp 0x58544c36
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 BB 9E FF FF: call 0x5853eaf0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 09 14 00 00: jmp 0x58546044
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 64 74 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x74
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 29ch], eax
        mov eax, dword ptr [ebp - 29ch]
        movzx ecx, word ptr [eax + 6]
        push ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 29ch]
        mov edx, dword ptr [ecx + eax + 28h]
        push edx
        mov eax, dword ptr [ebp - 29ch]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 EB C7 FF FF: call 0x58541470
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 29ch]
        movzx edx, word ptr [ecx + eax + 20h]
        cmp edx, 2
        ; Exact mapped bytes 0F 85 FD 00 00 00: jne 0x58544d9f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 29ch]
        movzx edx, word ptr [ecx + eax + 20h]
        mov dword ptr [ebp - 674h], edx
        cmp dword ptr [ebp - 674h], 1
        ; Exact mapped bytes 74 05: je 0x58544cc9
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x58544d9d
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        push 0
        lea eax, [ebp - 184h]
        push eax
        ; Exact mapped bytes E8 34 81 30 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 0ch
        push 0
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 29ch]
        movzx eax, word ptr [edx + ecx + 20h]
        push eax
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 29ch]
        movzx ecx, word ptr [eax + edx + 20h]
        push ecx
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C EB 17 00: call 0x586c38a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xeb
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 5e8h], eax
        push 588a7c44h
        ; Exact mapped bytes E8 CC D2 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 5ech], eax
        mov edx, dword ptr [ebp - 5e8h]
        push edx
        mov eax, dword ptr [ebp - 5ech]
        push eax
        lea ecx, [ebp - 184h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 5f0h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, 1ach
        push edx
        mov ecx, dword ptr [ebp - 5f0h]
        ; Exact mapped bytes E8 38 09 27 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 5f4h], ecx
        lea edx, [ebp - 184h]
        push edx
        mov ecx, dword ptr [ebp - 5f4h]
        ; Exact mapped bytes E8 04 13 F4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x13
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 23: jmp 0x58544dc2
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 5f8h], ecx
        push 588a75dah
        mov ecx, dword ptr [ebp - 5f8h]
        ; Exact mapped bytes E8 DF 12 F4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x12
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 1ach]
        mov dword ptr [ebp - 5fch], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 96h
        push ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, 1c6h
        push eax
        mov ecx, dword ptr [ebp - 5fch]
        ; Exact mapped bytes E8 19 08 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x08
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 1ach]
        mov dword ptr [ebp - 600h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, 0a2h
        push edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1c6h
        push ecx
        mov ecx, dword ptr [ebp - 600h]
        ; Exact mapped bytes E8 D3 07 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x07
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 1ach]
        mov dword ptr [ebp - 604h], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, 0aeh
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, 1c6h
        push edx
        mov ecx, dword ptr [ebp - 604h]
        ; Exact mapped bytes E8 8F 07 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x07
        __asm _emit 0x27
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 F2 11 00 00: call 0x58546090
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 29ch]
        movzx ecx, word ptr [eax + 0ach]
        mov dword ptr [ebp - 608h], ecx
        push 588a7c6ch
        ; Exact mapped bytes E8 35 D1 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 60ch], eax
        mov edx, dword ptr [ebp - 608h]
        push edx
        mov eax, dword ptr [ebp - 60ch]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 2ch
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 610h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 610h]
        ; Exact mapped bytes E8 81 92 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 29ch]
        movzx eax, word ptr [ecx + 1eh]
        cdq
        mov ecx, 0ah
        idiv ecx
        push edx
        mov edx, dword ptr [ebp - 29ch]
        movzx eax, word ptr [edx + 1eh]
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        push 588a7c90h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        imul ecx, eax, 2dh
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 614h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 614h]
        ; Exact mapped bytes E8 19 92 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 58 6F F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x6f
        __asm _emit 0xf4
        __asm _emit 0xff
        push eax
        push 588a7c98h
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        imul edx, ecx, 2eh
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 618h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 618h]
        ; Exact mapped bytes E8 C5 91 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], 0f5h
        mov dword ptr [ebp - 28ch], 28h
        mov dword ptr [ebp - 290h], 0ch
        mov eax, dword ptr [ebp - 29ch]
        movzx ecx, word ptr [eax + 0aeh]
        mov dword ptr [ebp - 2e8h], ecx
        mov eax, dword ptr [ebp - 2e8h]
        cdq
        mov ecx, 64h
        idiv ecx
        push edx
        mov eax, dword ptr [ebp - 2e8h]
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        push 588a7c9ch
        ; Exact mapped bytes E8 CC CF FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 61ch], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        imul eax, dword ptr [ebp - 290h], 0
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 61ch]
        ; Exact mapped bytes E8 99 05 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 620h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 620h]
        ; Exact mapped bytes E8 DC 90 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 1a0h]
        mov dword ptr [ebp - 624h], eax
        push 1
        mov ecx, dword ptr [ebp - 624h]
        ; Exact mapped bytes E8 5D F7 27 00: call 0x587c4830
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf7
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [ecx + 2f8h]
        ; Exact mapped bytes E8 CB 6F F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x6f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 250h]
        ; Exact mapped bytes 75 30: jne 0x58545125
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 1a0h]
        mov dword ptr [ebp - 628h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 25ch]
        xor ecx, 55h
        push ecx
        mov ecx, dword ptr [ebp - 628h]
        ; Exact mapped bytes E8 0E F7 27 00: call 0x587c4830
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xf7
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 56: jmp 0x5854517b
        __asm _emit 0xeb
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 7A 6F F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x6f
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, byte ptr [eax]
        cmp eax, 0ch
        ; Exact mapped bytes 75 3D: jne 0x5854517b
        __asm _emit 0x75
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 288h]
        movzx edx, word ptr [ecx + 2b2h]
        test edx, edx
        ; Exact mapped bytes 7E 2C: jle 0x5854517b
        __asm _emit 0x7e
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 1a0h]
        mov dword ptr [ebp - 62ch], ecx
        mov edx, dword ptr [ebp - 288h]
        movzx eax, word ptr [edx + 2b2h]
        push eax
        mov ecx, dword ptr [ebp - 62ch]
        ; Exact mapped bytes E8 B6 F6 27 00: call 0x587c4830
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf6
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 29ch]
        movzx edx, word ptr [ecx + 0aah]
        push edx
        push 588a7cbch
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 630h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        mov eax, dword ptr [ebp - 290h]
        lea ecx, [edx + eax*2]
        push ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, 0f5h
        push eax
        mov ecx, dword ptr [ebp - 630h]
        ; Exact mapped bytes E8 35 04 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 634h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 634h]
        ; Exact mapped bytes E8 79 8F F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], 1d0h
        mov dword ptr [ebp - 28ch], 28h
        mov dword ptr [ebp - 290h], 0ch
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 638h], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 28ch]
        imul ecx, dword ptr [ebp - 290h], 0
        add eax, ecx
        push eax
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 638h]
        ; Exact mapped bytes E8 9C 03 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 63ch], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 28ch]
        add eax, dword ptr [ebp - 290h]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 294h]
        lea ecx, [edx + eax + 0fh]
        push ecx
        mov ecx, dword ptr [ebp - 63ch]
        ; Exact mapped bytes E8 4C 03 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 640h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        add ecx, dword ptr [ebp - 290h]
        push ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 294h]
        lea edx, [eax + ecx + 46h]
        push edx
        mov ecx, dword ptr [ebp - 640h]
        ; Exact mapped bytes E8 FC 02 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 7
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 644h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        mov eax, dword ptr [ebp - 290h]
        lea ecx, [edx + eax*2]
        push ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 294h]
        lea edx, [eax + ecx + 0fh]
        push edx
        mov ecx, dword ptr [ebp - 644h]
        ; Exact mapped bytes E8 A9 02 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, 4
        shl eax, 3
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 648h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        mov edx, dword ptr [ebp - 290h]
        lea eax, [ecx + edx*2]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 294h]
        lea ecx, [edx + eax + 46h]
        push ecx
        mov ecx, dword ptr [ebp - 648h]
        ; Exact mapped bytes E8 56 02 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 29ch]
        movzx edx, word ptr [ecx + eax + 20h]
        cmp edx, 2
        ; Exact mapped bytes 0F 85 F8 00 00 00: jne 0x585454df
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 29ch]
        movzx edx, word ptr [ecx + eax + 20h]
        test edx, edx
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x585454df
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 64ch], edx
        push 588a75dbh
        mov ecx, dword ptr [ebp - 64ch]
        ; Exact mapped bytes E8 63 8D F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 650h], eax
        push 588a75dfh
        mov ecx, dword ptr [ebp - 650h]
        ; Exact mapped bytes E8 38 8D F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 6
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 654h], ecx
        push 588a75e3h
        mov ecx, dword ptr [ebp - 654h]
        ; Exact mapped bytes E8 0D 8D F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 7
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 658h], edx
        push 588a75eah
        mov ecx, dword ptr [ebp - 658h]
        ; Exact mapped bytes E8 E2 8C F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x8c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, 4
        shl eax, 3
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 65ch], edx
        push 588a75ebh
        mov ecx, dword ptr [ebp - 65ch]
        ; Exact mapped bytes E8 B7 8C F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x8c
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 00 02 00 00: jmp 0x585456df
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 29ch]
        movzx eax, word ptr [edx + ecx + 9eh]
        push eax
        push 588a7cc0h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 660h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 660h]
        ; Exact mapped bytes E8 58 8C F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 29ch]
        movzx eax, word ptr [edx + ecx + 0a2h]
        push eax
        push 588a7cc4h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 5
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 664h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 664h]
        ; Exact mapped bytes E8 FF 8B F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x8b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 29ch]
        movzx ecx, word ptr [eax + edx + 0a6h]
        push ecx
        push 588a7cc8h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        imul ecx, eax, 6
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 668h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 668h]
        ; Exact mapped bytes E8 A6 8B F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x8b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes 66 8B 82 98 00 00 00: mov ax, word ptr [edx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 3F: and ax, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        movzx ecx, ax
        mov dword ptr [ebp - 66ch], ecx
        push 588a7ccch
        ; Exact mapped bytes E8 E2 C9 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 670h], eax
        mov edx, dword ptr [ebp - 66ch]
        push edx
        mov eax, dword ptr [ebp - 670h]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 7
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 700h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 700h]
        ; Exact mapped bytes E8 2E 8B F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x8b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes 66 8B 91 98 00 00 00: mov dx, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
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
        movzx eax, dx
        mov dword ptr [ebp - 678h], eax
        push 588a7ce8h
        ; Exact mapped bytes E8 66 C9 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 67ch], eax
        mov ecx, dword ptr [ebp - 678h]
        push ecx
        mov edx, dword ptr [ebp - 67ch]
        push edx
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        shl ecx, 3
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 680h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 680h]
        ; Exact mapped bytes E8 B2 8A F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x8a
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 294h], 124h
        mov dword ptr [ebp - 28ch], 28h
        mov dword ptr [ebp - 290h], 0bh
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 E8 93 FF FF: call 0x5853eaf0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 36 09 00 00: jmp 0x58546044
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 91 69 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x69
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2a4h], eax
        mov eax, dword ptr [ebp - 2a4h]
        movzx ecx, word ptr [eax + 6]
        push ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 2a4h]
        mov edx, dword ptr [ecx + eax + 28h]
        push edx
        mov eax, dword ptr [ebp - 2a4h]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 18 BD FF FF: call 0x58541470
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 1ach]
        mov dword ptr [ebp - 684h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 96h
        push ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, 1c6h
        push eax
        mov ecx, dword ptr [ebp - 684h]
        ; Exact mapped bytes E8 83 FE 26 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x26
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 1ach]
        mov dword ptr [ebp - 688h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, 0a2h
        push edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1c6h
        push ecx
        mov ecx, dword ptr [ebp - 688h]
        ; Exact mapped bytes E8 3D FE 26 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xfe
        __asm _emit 0x26
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 1ach]
        mov dword ptr [ebp - 68ch], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, 0aeh
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, 1c6h
        push edx
        mov ecx, dword ptr [ebp - 68ch]
        ; Exact mapped bytes E8 F9 FD 26 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0x26
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 5C 08 00 00: call 0x58546090
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2a4h]
        mov eax, dword ptr [eax + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov eax, edx
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 690h], eax
        mov edx, dword ptr [ebp - 2a4h]
        mov eax, dword ptr [edx + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov dword ptr [ebp - 694h], eax
        push 588a7d04h
        ; Exact mapped bytes E8 77 C7 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xc7
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 698h], eax
        mov edx, dword ptr [ebp - 690h]
        push edx
        mov eax, dword ptr [ebp - 694h]
        push eax
        mov ecx, dword ptr [ebp - 698h]
        push ecx
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        imul ecx, eax, 2ch
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 69ch], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 69ch]
        ; Exact mapped bytes E8 BC 88 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2a4h]
        movzx eax, word ptr [edx + 1eh]
        cdq
        mov ecx, 0ah
        idiv ecx
        push edx
        mov edx, dword ptr [ebp - 2a4h]
        movzx eax, word ptr [edx + 1eh]
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        push 588a7d24h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        imul ecx, eax, 2dh
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 6a0h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 6a0h]
        ; Exact mapped bytes E8 54 88 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 93 65 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x65
        __asm _emit 0xf4
        __asm _emit 0xff
        push eax
        push 588a7d2ch
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        imul edx, ecx, 2eh
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 6a4h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 6a4h]
        ; Exact mapped bytes E8 00 88 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2a4h]
        movzx ecx, word ptr [eax + 4]
        add ecx, 3
        push ecx
        ; Exact mapped bytes 8B 0D 30 07 96 58: mov ecx, dword ptr [0x58960730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 F1 F3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf1
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov dword ptr [edx + 9ch], eax
        mov eax, dword ptr [ebp - 2a4h]
        movzx ecx, word ptr [eax + 4]
        add ecx, 4
        push ecx
        ; Exact mapped bytes 8B 0D 30 07 96 58: mov ecx, dword ptr [0x58960730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 F1 F3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf1
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov dword ptr [edx + 0a0h], eax
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 1a0h]
        mov dword ptr [ebp - 6a8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 6a8h]
        ; Exact mapped bytes E8 37 EE 27 00: call 0x587c4830
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xee
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 A5 66 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x66
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 250h]
        ; Exact mapped bytes 75 2E: jne 0x58545a49
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 1a0h]
        mov dword ptr [ebp - 6ach], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 25ch]
        xor eax, 55h
        push eax
        mov ecx, dword ptr [ebp - 6ach]
        ; Exact mapped bytes E8 E8 ED 27 00: call 0x587c4830
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 294h], 114h
        mov dword ptr [ebp - 28ch], 27h
        mov dword ptr [ebp - 290h], 0ch
        mov ecx, dword ptr [ebp - 2a4h]
        movzx edx, word ptr [ecx + 0a8h]
        push edx
        push 588a7d30h
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 6b0h], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 28ch]
        imul ecx, dword ptr [ebp - 290h], 0
        add eax, ecx
        push eax
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 6b0h]
        ; Exact mapped bytes E8 47 FB 26 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xfb
        __asm _emit 0x26
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 6b4h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 6b4h]
        ; Exact mapped bytes E8 8A 86 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2a4h]
        movzx ecx, word ptr [eax + 0a4h]
        push ecx
        push 588a7d34h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 6b8h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        add ecx, dword ptr [ebp - 290h]
        push ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 6b8h]
        ; Exact mapped bytes E8 AB FA 26 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfa
        __asm _emit 0x26
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 6bch], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 6bch]
        ; Exact mapped bytes E8 EE 85 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2a4h]
        movzx eax, word ptr [edx + 0a6h]
        push eax
        push 588a7d38h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 6c0h], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 28ch]
        mov ecx, dword ptr [ebp - 290h]
        lea edx, [eax + ecx*2]
        push edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 294h]
        push ecx
        mov ecx, dword ptr [ebp - 6c0h]
        ; Exact mapped bytes E8 0D FA 26 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xfa
        __asm _emit 0x26
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 6c4h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 6c4h]
        ; Exact mapped bytes E8 51 85 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], 1d8h
        mov dword ptr [ebp - 28ch], 27h
        mov dword ptr [ebp - 290h], 0ch
        mov eax, dword ptr [ebp - 2a4h]
        movzx ecx, word ptr [eax + 0aah]
        push ecx
        push 588a7d3ch
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 6c8h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        imul eax, dword ptr [ebp - 290h], 0
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 6c8h]
        ; Exact mapped bytes E8 51 F9 26 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf9
        __asm _emit 0x26
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 6cch], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 6cch]
        ; Exact mapped bytes E8 94 84 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2a4h]
        movzx eax, word ptr [edx + 0aeh]
        push eax
        push 588a7d40h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 6d0h], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 28ch]
        add eax, dword ptr [ebp - 290h]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 6d0h]
        ; Exact mapped bytes E8 B5 F8 26 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf8
        __asm _emit 0x26
        __asm _emit 0x00
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 6d4h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 6d4h]
        ; Exact mapped bytes E8 F8 83 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 2a4h]
        movzx ecx, word ptr [eax + edx + 9ah]
        push ecx
        push 588a7d44h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        imul ecx, eax, 6
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 6d8h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        imul eax, dword ptr [ebp - 290h], 3
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 6d8h]
        ; Exact mapped bytes E8 0D F8 26 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x26
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 6
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 6dch], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 6dch]
        ; Exact mapped bytes E8 50 83 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2a4h]
        movzx eax, word ptr [edx + 0b0h]
        imul ecx, eax, 28h
        mov dword ptr [ebp - 2ech], ecx
        mov eax, dword ptr [ebp - 2ech]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push edx
        mov eax, dword ptr [ebp - 2ech]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        push 588a7d48h
        ; Exact mapped bytes E8 72 C1 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc1
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        imul ecx, eax, 7
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 6e0h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 28ch]
        mov eax, dword ptr [ebp - 290h]
        lea ecx, [edx + eax*4]
        push ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 6e0h]
        ; Exact mapped bytes E8 3F F7 26 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf7
        __asm _emit 0x26
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 7
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 6e4h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 6e4h]
        ; Exact mapped bytes E8 82 82 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x82
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 2a4h]
        movzx edx, word ptr [ecx + eax + 9ah]
        mov dword ptr [ebp - 6e8h], edx
        cmp dword ptr [ebp - 6e8h], 0
        ; Exact mapped bytes 74 6A: je 0x58545f9d
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 2a4h]
        movzx ecx, word ptr [eax + 98h]
        mov dword ptr [ebp - 2f0h], ecx
        cmp dword ptr [ebp - 2f0h], 3
        ; Exact mapped bytes 74 0B: je 0x58545f5a
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 2f0h], 4
        ; Exact mapped bytes 74 22: je 0x58545f7a
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes EB 3E: jmp 0x58545f98
        __asm _emit 0xeb
        __asm _emit 0x3e
        push 588a7d68h
        ; Exact mapped bytes E8 8C C0 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 1E: jmp 0x58545f98
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 588a7d88h
        ; Exact mapped bytes E8 6C C0 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x58546038
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a7da8h
        ; Exact mapped bytes E8 49 C0 FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov edx, 4
        imul eax, edx, 5
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 6ech], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 28ch]
        mov edx, dword ptr [ebp - 290h]
        lea eax, [ecx + edx*2]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 6ech]
        ; Exact mapped bytes E8 16 F6 26 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf6
        __asm _emit 0x26
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 6f0h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 6f0h]
        ; Exact mapped bytes E8 59 81 F8 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x81
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 AD 8A FF FF: call 0x5853eaf0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 01 B0 2E 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xb0
        __asm _emit 0x2e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
