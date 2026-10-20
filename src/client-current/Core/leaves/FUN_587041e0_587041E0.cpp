// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587041E0 .. +0x273 bytes.
extern "C" __declspec(naked) void FUN_587041e0_587041E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 D1 E9: shr cx, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe9
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 4B 02 00 00: je 0x5870444d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x5870429a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 11: ja 0x5870422e
        __asm _emit 0x77
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 3ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 25 02 00 00: jmp 0x58704453
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 07 07 D8 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x07
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 09: jne 0x5870424d
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        ; Exact mapped bytes E9 08 02 00 00: jmp 0x58704453
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x58704279
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 D0 06 D8 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x06
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 02: jne 0x58704279
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 21: jmp 0x5870429a
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 19: je 0x58704298
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0E: ja 0x58704298
        __asm _emit 0x77
        __asm _emit 0x0e
        mov dword ptr [ebp - 0ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 BB 01 00 00: jmp 0x58704453
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A4: jmp 0x5870423e
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 204h
        ; Exact mapped bytes 77 28: ja 0x587042d4
        __asm _emit 0x77
        __asm _emit 0x28
        cmp dword ptr [ebp - 10h], 204h
        ; Exact mapped bytes 0F 84 86 01 00 00: je 0x5870443f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 100h
        ; Exact mapped bytes 74 20: je 0x587042e2
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp - 10h], 201h
        ; Exact mapped bytes 0F 84 46 01 00 00: je 0x58704415
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 79 01 00 00: jmp 0x5870444d
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 20ah
        ; Exact mapped bytes 74 34: je 0x58704311
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes E9 6B 01 00 00: jmp 0x5870444d
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 1bh
        ; Exact mapped bytes 74 06: je 0x587042f7
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes EB 19: jmp 0x5870430c
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes EB 17: jmp 0x5870430c
        __asm _emit 0xeb
        __asm _emit 0x17
        ; Exact mapped bytes EB 15: jmp 0x5870430c
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        xor eax, eax
        ; Exact mapped bytes E9 47 01 00 00: jmp 0x58704453
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3C 01 00 00: jmp 0x5870444d
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        shr ecx, 10h
        and ecx, 0ffffh
        ; Exact mapped bytes 0F BF C1: movsx eax, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc1
        cdq
        mov ecx, 14h
        idiv ecx
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 55 FC: movsx edx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xfc
        test edx, edx
        ; Exact mapped bytes 0F 8E 92 00 00 00: jle 0x587043cd
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 88h]
        mov edx, 2
        shl edx, 0
        movzx eax, word ptr [ecx + edx + 8]
        xor eax, 55h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 84h]
        add edx, eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 88h]
        mov eax, 2
        shl eax, 1
        movzx ecx, word ptr [ecx + eax + 8]
        xor ecx, 55h
        add edx, ecx
        mov dword ptr [ebp - 1ch], edx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 88h]
        mov ecx, 2
        imul edx, ecx, 0bh
        movzx eax, word ptr [eax + edx + 14h]
        xor eax, 55h
        cmp dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 7D 31: jge 0x587043cb
        __asm _emit 0x7d
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 84h]
        add edx, 1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 84h], edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 84h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C6 6D 0B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x6d
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3D: jmp 0x5870440a
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 84h], 1
        ; Exact mapped bytes 7E 31: jle 0x5870440a
        __asm _emit 0x7e
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 84h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 84h], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 84h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 87 6D 0B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x6d
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9E 01 00 00: call 0x587045b0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 38: jmp 0x5870444d
        __asm _emit 0xeb
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 05 D8 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F7 14 D8 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x14
        __asm _emit 0xd8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x5870442f
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0E: jmp 0x5870443d
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 0E: jmp 0x5870444d
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + 34h]
    }
}
