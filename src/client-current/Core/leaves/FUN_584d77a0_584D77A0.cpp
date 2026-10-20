// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D77A0 .. +0xC5D bytes.
extern "C" __declspec(naked) void FUN_584d77a0_584D77A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0bch
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 7ch], 1
        ; Exact mapped bytes 0F 85 97 0A 00 00: jne 0x584d8252
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 75 05: jne 0x584d77cc
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 81 0A 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 1
        ; Exact mapped bytes 75 23: jne 0x584d77fb
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D C9 02 00: call 0x585040f0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 52 0A 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 2
        ; Exact mapped bytes 75 2E: jne 0x584d7835
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE FA FF FF: call 0x584d72d0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x584d7824
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F F6 10 00: call 0x585e6e80
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf6
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0C: jmp 0x584d7830
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 0C 11 00: call 0x585e84e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x0c
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 18 0A 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 3
        ; Exact mapped bytes 75 45: jne 0x584d7886
        __asm _emit 0x75
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 F8 FF FF: call 0x584d7110
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 F8 FF FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 40000h
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB 6D 0A 00: call 0x5857e660
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x6d
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 8F 0F 00: call 0x585d0820
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x8f
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C7 09 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 4
        ; Exact mapped bytes 75 05: jne 0x584d7897
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 B6 09 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 5
        ; Exact mapped bytes 75 05: jne 0x584d78a8
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 A5 09 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 6
        ; Exact mapped bytes 74 10: je 0x584d78c4
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 0ah
        ; Exact mapped bytes 0F 85 A4 00 00 00: jne 0x584d7968
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 0ah
        ; Exact mapped bytes 75 4A: jne 0x584d791a
        __asm _emit 0x75
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 F6 FF FF: call 0x584d6f90
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 75 16: jne 0x584d78f8
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 15 4C 06 96 58: mov edx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 20: jmp 0x584d7918
        __asm _emit 0xeb
        __asm _emit 0x20
        push 6
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 14 00 00: call 0x584d8d50
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 4C 06 96 58: mov eax, dword ptr [0x5896064c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 49: jmp 0x584d7963
        __asm _emit 0xeb
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B D0 FA FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd0
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B4 D0 FA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd0
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E D0 FA FF: call 0x584849a0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd0
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        push 0
        push -1
        mov eax, dword ptr [ebp - 3ch]
        push eax
        push 0
        push 0
        movzx ecx, word ptr [ebp - 0eh]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E 60 0A 00: call 0x5857da00
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x60
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E5 08 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 7
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x584d7a10
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D F0 FA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F6 DA FC FF: call 0x584a5480
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 17: jle 0x584d79a5
        __asm _emit 0x7e
        __asm _emit 0x17
        push 40000000h
        push 40h
        push 9
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE F7 10 00: call 0x585e7170
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xf7
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2B: jmp 0x584d79d0
        __asm _emit 0xeb
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 F0 FA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf0
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C9 DA FC FF: call 0x584a5480
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7D 15: jge 0x584d79d0
        __asm _emit 0x7d
        __asm _emit 0x15
        push 40000000h
        push 20h
        push 8
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 F7 10 00: call 0x585e7170
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf7
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 F7 FF FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 3
        ; Exact mapped bytes 75 13: jne 0x584d79fa
        __asm _emit 0x75
        __asm _emit 0x13
        push 1f4h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 0B 11 00: call 0x585e8560
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x0b
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 11: jmp 0x584d7a0b
        __asm _emit 0xeb
        __asm _emit 0x11
        push 5f5h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 0B 11 00: call 0x585e8560
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x0b
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 3D 08 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 8
        ; Exact mapped bytes 75 05: jne 0x584d7a21
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 2C 08 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 9
        ; Exact mapped bytes 75 05: jne 0x584d7a32
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 1B 08 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 0bh
        ; Exact mapped bytes 75 1C: jne 0x584d7a5a
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 C6 02 00: call 0x585040f0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C 07 05 00: call 0x585281c0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F3 07 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 64h
        ; Exact mapped bytes 75 2E: jne 0x584d7a94
        __asm _emit 0x75
        __asm _emit 0x2e
        push 1
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D 72 0A 00: call 0x5857ed00
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x72
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 CF FA FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xcf
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 B9 07 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 79h
        ; Exact mapped bytes 75 3C: jne 0x584d7adc
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 CE FA FF: call 0x584849a0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xce
        __asm _emit 0xfa
        __asm _emit 0xff
        movzx ecx, ax
        shl ecx, 10h
        or ecx, 0ffffh
        mov dword ptr [ebp - 40h], ecx
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 40h]
        push edx
        push -1
        push 80011035h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA 4E 35 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x4e
        __asm _emit 0x35
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 71 07 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 12ch
        ; Exact mapped bytes 75 26: jne 0x584d7b11
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 E7 19 FE FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x19
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 44h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 58 0A 00: call 0x5857d320
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 3C 07 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 12dh
        ; Exact mapped bytes 75 1F: jne 0x584d7b3f
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 F6 FF FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BE F5 FF FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 87 FA 1B 00: call 0x586975c0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfa
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 0E 07 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 12eh
        ; Exact mapped bytes 75 11: jne 0x584d7b5f
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 48 14 00: call 0x5861c3b0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 EE 06 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 12fh
        ; Exact mapped bytes 75 1F: jne 0x584d7b8d
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 F4 FF FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F0 F4 FF FF: call 0x584d7070
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 09 21 17 00: call 0x58649c90
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x21
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C0 06 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 130h
        ; Exact mapped bytes 75 1F: jne 0x584d7bbb
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 F4 FF FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 42 CB FE FF: call 0x584c46f0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xcb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4B A5 17 00: call 0x58652100
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa5
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 92 06 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 131h
        ; Exact mapped bytes 74 0F: je 0x584d7bd9
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 132h
        ; Exact mapped bytes 75 05: jne 0x584d7bde
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 6F 06 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 133h
        ; Exact mapped bytes 75 1F: jne 0x584d7c0c
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 F5 FF FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 91 F4 FF FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EA 94 23 00: call 0x587110f0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x94
        __asm _emit 0x23
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 41 06 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 136h
        ; Exact mapped bytes 7C 54: jl 0x584d7c6f
        __asm _emit 0x7c
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 13fh
        ; Exact mapped bytes 7F 45: jg 0x584d7c6f
        __asm _emit 0x7f
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B F3 FF FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 4ch], edx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 F3 FF FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DB F3 FF FF: call 0x584d7030
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        push 0
        push 0f231h
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 B4: call dword ptr [ebp - 0x4c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb4
        nop
        ; Exact mapped bytes E9 DE 05 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 142h
        ; Exact mapped bytes 75 44: jne 0x584d7cc2
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes 83 3D 34 05 96 58 00: cmp dword ptr [0x58960534], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 76 1C: jbe 0x584d7ca3
        __asm _emit 0x76
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E F3 FF FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 57 CA FE FF: call 0x584c46f0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xca
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F0 A3 17 00: call 0x58652090
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xa3
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1A: jmp 0x584d7cbd
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 F3 FF FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BB F3 FF FF: call 0x584d7070
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 64 1F 17 00: call 0x58649c20
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x1f
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8B 05 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 143h
        ; Exact mapped bytes 75 1F: jne 0x584d7cf0
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 F2 FF FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8D F3 FF FF: call 0x584d7070
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 26 F5 16 00: call 0x58647210
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf5
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 5D 05 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 144h
        ; Exact mapped bytes 75 11: jne 0x584d7d10
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 D7 0D 00: call 0x585b5460
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xd7
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 3D 05 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 15eh
        ; Exact mapped bytes 0F 85 EA 00 00 00: jne 0x584d7e0d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 2C 06 96 58: cmp edx, dword ptr [0x5896062c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 05: jne 0x584d7d36
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 C1 06 00 00: jmp 0x584d83f7
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 9ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 0C 06 96 58: cmp ecx, dword ptr [0x5896060c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 0C: jne 0x584d7d85
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C D6 0D 00: call 0x585b53b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xd6
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 17 FE FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x584d7dc1
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 17 FE FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BA 14 FE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 75 13: jne 0x584d7dc1
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 17 FE FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 40 4D 26 00: call 0x5873cb00
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x4d
        __asm _emit 0x26
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 60 0C 00: call 0x5859de00
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 9ch], 0
        ; Exact mapped bytes 74 27: je 0x584d7e08
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 58h], ecx
        push 0
        mov edx, dword ptr [ebp - 58h]
        push edx
        ; Exact mapped bytes E8 3C 92 35 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x92
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 9ch], 0
        ; Exact mapped bytes E9 40 04 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 190h
        ; Exact mapped bytes 0F 85 D8 00 00 00: jne 0x584d7ef8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 5ch], eax
        push 0
        push 0eeach
        push 0
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 A4: call dword ptr [ebp - 0x5c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa4
        nop
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 15eh
        ; Exact mapped bytes 75 3F: jne 0x584d7e97
        __asm _emit 0x75
        __asm _emit 0x3f
        push 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD 68 0A 00: call 0x5857e720
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x68
        __asm _emit 0x0a
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 8F FD FF: call 0x584b0dd0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        push 589604e0h
        push 1
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C 65 0A 00: call 0x5857e3d0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x65
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 29: jmp 0x584d7ec0
        __asm _emit 0xeb
        __asm _emit 0x29
        push 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 68 0A 00: call 0x5857e720
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x0a
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 8F FD FF: call 0x584b0dd0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 9ch], 0
        ; Exact mapped bytes 74 27: je 0x584d7ef3
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 60h], eax
        push 0
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        ; Exact mapped bytes E8 51 91 35 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x91
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 9ch], 0
        ; Exact mapped bytes E9 55 03 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 19bh
        ; Exact mapped bytes 75 1F: jne 0x584d7f26
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E F2 FF FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 37 F2 FF FF: call 0x584d7150
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 30 55 1C 00: call 0x5869d450
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 27 03 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 1f4h
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x584d7fde
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 64h], eax
        push 0
        push 0eeach
        push 0
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 9C: call dword ptr [ebp - 0x64]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x9c
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 F0 FF FF: call 0x584d6fb0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 DB AA 04 00: call 0x58522a70
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 28h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 9ch], 0
        ; Exact mapped bytes 74 27: je 0x584d7fd9
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 74h], eax
        push 0
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        ; Exact mapped bytes E8 6B 90 35 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x90
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 9ch], 0
        ; Exact mapped bytes E9 6F 02 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 258h
        ; Exact mapped bytes 75 42: jne 0x584d802f
        __asm _emit 0x75
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 C9 FA FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc9
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 61 CA FA FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xca
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        shr ecx, 0ah
        and ecx, 3fffffh
        mov dword ptr [ebp - 78h], ecx
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 78h]
        push edx
        push 0
        push 8001d002h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 49 35 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x49
        __asm _emit 0x35
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 1E 02 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 259h
        ; Exact mapped bytes 75 11: jne 0x584d804f
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D 70 06 96 58: mov ecx, dword ptr [0x58960670]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 13 01 00: call 0x584e93f0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 FE 01 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 2bch
        ; Exact mapped bytes 75 67: jne 0x584d80c5
        __asm _emit 0x75
        __asm _emit 0x67
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 F0 FF FF: call 0x584d70d0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 60 EF FF FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 F0 FF FF: call 0x584d70d0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4B EF FF FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax*4 + 589605ach]
        mov dword ptr [ebp - 80h], edx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        push 8001f002h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 48 35 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x48
        __asm _emit 0x35
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 F0 FF FF: call 0x584d70d0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 71 84 19 00: call 0x58670530
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 88 01 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 4a3h
        ; Exact mapped bytes 0F 85 B7 00 00 00: jne 0x584d818f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD EE FF FF: call 0x584d6f90
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 3
        ; Exact mapped bytes 74 4A: je 0x584d8135
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A EE FF FF: call 0x584d6f90
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 75 16: jne 0x584d8113
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 15 4C 06 96 58: mov edx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 20: jmp 0x584d8133
        __asm _emit 0xeb
        __asm _emit 0x20
        push 0
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 0C 00 00: call 0x584d8d50
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 4C 06 96 58: mov eax, dword ptr [0x5896064c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 55: jmp 0x584d818a
        __asm _emit 0xeb
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 C8 FA FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xc8
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 99 C8 FA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xc8
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 84h], ecx
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 88h], edx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A C8 FA FF: call 0x584849a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc8
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        push 0
        push -1
        mov eax, dword ptr [ebp - 88h]
        push eax
        push 0
        push 0
        movzx ecx, word ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 58 0A 00: call 0x5857da00
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x58
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 BE 00 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 4a4h
        ; Exact mapped bytes 75 18: jne 0x584d81b6
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 EF FF FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 10 E7 06 00: call 0x585468c0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xe7
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x584d824d
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 4b0h
        ; Exact mapped bytes 75 5D: jne 0x584d8222
        __asm _emit 0x75
        __asm _emit 0x5d
        push 1ch
        push 0
        lea ecx, [ebp - 0bch]
        push ecx
        ; Exact mapped bytes E8 3B 4C 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0b8h], 10h
        ; Exact mapped bytes 8B 15 04 06 96 58: mov edx, dword ptr [0x58960604]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        add edx, 60h
        mov dword ptr [ebp - 8ch], edx
        ; Exact mapped bytes A1 04 06 96 58: mov eax, dword ptr [0x58960604]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 60h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 90h], edx
        sub esp, 1ch
        mov ecx, 7
        lea esi, [ebp - 0bch]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes FF 95 70 FF FF FF: call dword ptr [ebp - 0x90]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2B: jmp 0x584d824d
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 57bh
        ; Exact mapped bytes 75 1C: jne 0x584d824d
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 EE FF FF: call 0x584d70b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 A5 01 00 00: jmp 0x584d83f7
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 7ch], 3
        ; Exact mapped bytes 75 2F: jne 0x584d828a
        __asm _emit 0x75
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 1
        ; Exact mapped bytes 75 1E: jne 0x584d8285
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E BE 02 00: call 0x585040f0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 6D 01 00 00: jmp 0x584d83f7
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 2
        ; Exact mapped bytes 75 24: jne 0x584d82ba
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F BE 02 00: call 0x585040f0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 3D 01 00 00: jmp 0x584d83f7
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 1
        ; Exact mapped bytes 75 24: jne 0x584d82ea
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F BE 02 00: call 0x585040f0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 0D 01 00 00: jmp 0x584d83f7
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 12h
        ; Exact mapped bytes 75 1F: jne 0x584d8315
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 9ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x584d83f7
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 14h
        ; Exact mapped bytes 74 0C: je 0x584d832d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 28h
        ; Exact mapped bytes 75 7B: jne 0x584d83a8
        __asm _emit 0x75
        __asm _emit 0x7b
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 11 FE FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x11
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x584d83a6
        __asm _emit 0x74
        __asm _emit 0x6a
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 11 FE FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x11
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 12 0F FE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 50: jne 0x584d83a6
        __asm _emit 0x75
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF C6 FA FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xc6
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 98h], ecx
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 11 FE FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x11
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        push 0
        push 64h
        mov edx, dword ptr [ebp - 94h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 95 68 FF FF FF: call dword ptr [ebp - 0x98]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], 1
        ; Exact mapped bytes EB 4F: jmp 0x584d83f7
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 190h
        ; Exact mapped bytes 75 15: jne 0x584d83cc
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E C6 FA FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc6
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F7 B1 00 00: call 0x584e35c0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2B: jmp 0x584d83f7
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 192h
        ; Exact mapped bytes 75 1C: jne 0x584d83f7
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A C6 FA FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc6
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
