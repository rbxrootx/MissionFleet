// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58649DD0 .. +0x9C5 bytes.
extern "C" __declspec(naked) void FUN_58649dd0_58649DD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1dch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 0c8h], ecx
        mov eax, dword ptr [ebp - 0c8h]
        movzx ecx, byte ptr [eax + 309h]
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 A5 06 00 00: jne 0x5864a4a5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 4B: jne 0x58649e51
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes E8 E5 D3 E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xd3
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        push 0
        push 0
        push 0
        push 24ch
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 49 EF E8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E D1 E8 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xd1
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 33 09 00 00: jmp 0x5864a784
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 0F 84 42 02 00 00: je 0x5864a0a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B8 06 96 58 00: cmp dword ptr [0x589606b8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 59 01 00 00: je 0x58649fc4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        sub edx, 1
        push edx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 A9 E7 FF: call 0x584c4810
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xa9
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 64: je 0x58649ee8
        __asm _emit 0x74
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 0e0h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        sub eax, 1
        push eax
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 38 E7 FF: call 0x584bd710
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x38
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        mov ecx, dword ptr [ebp - 1c4h]
        push ecx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 6D C0 E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc0
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0c8h]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 0e4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 FE BF E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xbf
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x58649fbf
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c8h]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 0f0h], edx
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 0e8h], ecx
        push 5ah
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 07 AC E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xac
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        mov edx, dword ptr [ebp - 0ech]
        push edx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 FF BF E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xbf
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 0fch], ecx
        mov edx, dword ptr [ebp - 0c8h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 0f4h], eax
        push 59h
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 BE AB E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xab
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 0f8h]
        push ecx
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 B6 BF E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xbf
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0c8h]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 100h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 14 B6 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xb6
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c8h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 104h], edx
        push 101h
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 F2 B5 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xb5
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x5864a09b
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 110h], ecx
        mov edx, dword ptr [ebp - 0c8h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 108h], eax
        push 5ah
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 2B AB E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xab
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        mov ecx, dword ptr [ebp - 10ch]
        push ecx
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 23 BF E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xbf
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0c8h]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp - 0c8h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 114h], edx
        push 59h
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 E2 AA E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xaa
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        mov eax, dword ptr [ebp - 118h]
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 DA BE E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xbe
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0c8h]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 120h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 38 B5 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xb5
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 124h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 16 B5 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xb5
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x5864a177
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0c8h]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 130h], eax
        mov ecx, dword ptr [ebp - 0c8h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 128h], edx
        push 5ah
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 4F AA E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xaa
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        mov eax, dword ptr [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 47 BE E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xbe
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0c8h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 13ch], edx
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 134h], ecx
        push 59h
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 06 AA E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xaa
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        mov edx, dword ptr [ebp - 138h]
        push edx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 FE BD E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xbd
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 140h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 5C B4 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xb4
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0c8h]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 144h], eax
        push 101h
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 3A B4 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xb4
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0c8h]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 148h], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 0ch
        push eax
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 05 BF E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xbf
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0c8h]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 14ch], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 2dh
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 E1 BE E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xbe
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0c8h]
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx + 5ah]
        mov byte ptr [ecx + 328h], al
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 4ah]
        mov dword ptr [ebp - 150h], edx
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 48h]
        mov dword ptr [ebp - 154h], ecx
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 46h]
        mov dword ptr [ebp - 158h], eax
        push 588af324h
        ; Exact mapped bytes E8 EE 7D ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x7d
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 15ch], eax
        mov ecx, dword ptr [ebp - 150h]
        push ecx
        mov edx, dword ptr [ebp - 154h]
        push edx
        mov eax, dword ptr [ebp - 158h]
        push eax
        mov ecx, dword ptr [ebp - 15ch]
        push ecx
        lea edx, [ebp - 44h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [ebp - 160h], ecx
        lea edx, [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 4B BE E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xbe
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 58h]
        mov dword ptr [ebp - 164h], ecx
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 56h]
        mov dword ptr [ebp - 168h], eax
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 54h]
        mov dword ptr [ebp - 16ch], edx
        push 588af340h
        ; Exact mapped bytes E8 6A 7D ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x7d
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 170h], eax
        mov eax, dword ptr [ebp - 164h]
        push eax
        mov ecx, dword ptr [ebp - 168h]
        push ecx
        mov edx, dword ptr [ebp - 16ch]
        push edx
        mov eax, dword ptr [ebp - 170h]
        push eax
        lea ecx, [ebp - 44h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        mov edx, dword ptr [ebp - 0c8h]
        mov eax, dword ptr [edx + 0d0h]
        mov dword ptr [ebp - 174h], eax
        lea ecx, [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 C7 BD E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xbd
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0c8h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [edx + 1e4h], ecx
        mov edx, dword ptr [ebp - 0c8h]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 178h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 50h]
        push edx
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 81 0E 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0e
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [eax + 178h]
        mov dword ptr [ebp - 17ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 0ch
        push edx
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 6D BD E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xbd
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax + 5ah]
        test ecx, ecx
        ; Exact mapped bytes 74 2F: je 0x5864a36e
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 0c8h]
        mov byte ptr [edx + 309h], 5
        mov eax, dword ptr [ebp + 8]
        add eax, 5ch
        push eax
        mov ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx + 5ah]
        push edx
        push 0
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 2A F3 FF: call 0x5857cdc0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x2a
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 32 01 00 00: jmp 0x5864a4a0
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c8h]
        mov byte ptr [eax + 309h], 0
        mov dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5864a396
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0cch]
        add ecx, 1
        mov dword ptr [ebp - 0cch], ecx
        cmp dword ptr [ebp - 0cch], 5
        ; Exact mapped bytes 0F 84 FD 00 00 00: je 0x5864a4a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5864a3be
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0d0h]
        add edx, 1
        mov dword ptr [ebp - 0d0h], edx
        cmp dword ptr [ebp - 0d0h], 2
        ; Exact mapped bytes 7D 32: jge 0x5864a3f9
        __asm _emit 0x7d
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 0cch]
        mov ecx, dword ptr [ebp - 0c8h]
        lea edx, [ecx + eax*8 + 150h]
        mov eax, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 180h], ecx
        push 0
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 EA BA E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xba
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B6: jmp 0x5864a3af
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov edx, dword ptr [ebp - 0cch]
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [eax + edx*4 + 17ch]
        mov dword ptr [ebp - 184h], ecx
        push 588af286h
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 7E BC E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xbc
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0cch]
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [eax + edx*4 + 19ch]
        mov dword ptr [ebp - 188h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 65 B1 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xb1
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0cch]
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [eax + edx*4 + 1b0h]
        mov dword ptr [ebp - 18ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 3C B1 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xb1
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0cch]
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [eax + edx*4 + 1b0h]
        mov dword ptr [ebp - 190h], ecx
        push 0
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 A6 53 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x53
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E7 FE FF FF: jmp 0x5864a387
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DF 02 00 00: jmp 0x5864a784
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0c8h]
        movzx eax, byte ptr [edx + 309h]
        cmp eax, 6
        ; Exact mapped bytes 0F 85 C9 02 00 00: jne 0x5864a784
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 24h
        push ecx
        push 588af35ch
        ; Exact mapped bytes E8 24 7B ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x7b
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 0c4h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push -1
        lea eax, [ebp - 0c4h]
        push eax
        push 0
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A 27 FD FF: call 0x5861cc30
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x27
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0c8h]
        add ecx, 24ch
        mov dword ptr [ebp - 1b8h], ecx
        lea edx, [ebp - 0d4h]
        push edx
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 65 DB E3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xdb
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 15: jmp 0x5864a533
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        lea eax, [ebp - 1d8h]
        push eax
        lea ecx, [ebp - 0d4h]
        ; Exact mapped bytes E8 4E D5 E3 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xd5
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0c8h]
        add ecx, 24ch
        mov dword ptr [ebp - 198h], ecx
        lea edx, [ebp - 1dch]
        push edx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 39 DC E3 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xdc
        __asm _emit 0xe3
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0d4h]
        ; Exact mapped bytes E8 6D D4 E3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xd4
        __asm _emit 0xe3
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 5D: je 0x5864a5c7
        __asm _emit 0x74
        __asm _emit 0x5d
        lea ecx, [ebp - 0d4h]
        ; Exact mapped bytes E8 CB D4 E3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xd4
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 2dh
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 39: jne 0x5864a5c2
        __asm _emit 0x75
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 0c8h]
        add eax, 24ch
        mov dword ptr [ebp - 1a0h], eax
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 19ch], ecx
        mov edx, dword ptr [ebp - 19ch]
        push edx
        lea eax, [ebp - 1cch]
        push eax
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 F1 F9 E6 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf9
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x5864a5c7
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x5864a51e
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0c8h]
        add ecx, 190h
        mov dword ptr [ebp - 1a4h], ecx
        lea edx, [ebp - 0d8h]
        push edx
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 95 DA E3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xda
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 15: jmp 0x5864a603
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        lea eax, [ebp - 1d0h]
        push eax
        lea ecx, [ebp - 0d8h]
        ; Exact mapped bytes E8 0E C6 FF FF: call 0x58646c10
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0c8h]
        add ecx, 190h
        mov dword ptr [ebp - 1a8h], ecx
        lea edx, [ebp - 1d4h]
        push edx
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 69 DB E3 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xdb
        __asm _emit 0xe3
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0d8h]
        ; Exact mapped bytes E8 9D D3 E3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xd3
        __asm _emit 0xe3
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x5864a661
        __asm _emit 0x74
        __asm _emit 0x27
        lea ecx, [ebp - 0d8h]
        ; Exact mapped bytes E8 FB D3 E3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd3
        __asm _emit 0xe3
        __asm _emit 0xff
        add eax, 2dh
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 2dh
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x5864a65f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 25 01 00 00: jmp 0x5864a784
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 8D: jmp 0x5864a5ee
        __asm _emit 0xeb
        __asm _emit 0x8d
        mov edx, dword ptr [ebp - 0c8h]
        add edx, 190h
        mov dword ptr [ebp - 1ach], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 5E 08 00 00: call 0x5864aee0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 2
        ; Exact mapped bytes 0F 85 D6 00 00 00: jne 0x5864a777
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c8h]
        mov edx, dword ptr [ecx + 240h]
        mov dword ptr [ebp - 1b0h], edx
        push 0add783h
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 2dh
        push eax
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 54 5E 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x5e
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c8h]
        mov edx, dword ptr [ecx + 244h]
        mov dword ptr [ebp - 1b4h], edx
        push 0ffffffh
        push -1
        push 588af287h
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 2B 5E 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x5e
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [eax + 248h]
        mov dword ptr [ebp - 1c8h], ecx
        push 0ffffffh
        push -1
        push 588af2d1h
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 02 5E 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [eax + edx + 20ch]
        mov dword ptr [ebp - 1c0h], ecx
        mov ecx, dword ptr [ebp - 0c8h]
        add ecx, 24ch
        ; Exact mapped bytes E8 F7 DA E3 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xda
        __asm _emit 0xe3
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 0c8h]
        add ecx, 190h
        ; Exact mapped bytes E8 E4 07 00 00: call 0x5864af40
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, eax
        mov dword ptr [ebp - 1bch], esi
        mov edx, dword ptr [ebp - 1bch]
        push edx
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 1A 0A 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x0a
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 0c8h]
        mov byte ptr [eax + 309h], 0
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 C1 68 1E 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x1e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
