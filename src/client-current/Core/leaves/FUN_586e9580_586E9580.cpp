// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E9580 .. +0x25B bytes.
extern "C" __declspec(naked) void FUN_586e9580_586E9580() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 264h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 260h], ecx
        mov dword ptr [ebp - 250h], 0
        mov dword ptr [ebp - 254h], 0
        lea eax, [ebp - 244h]
        push eax
        push 588b30c0h
        ; Exact mapped bytes E8 92 AA 0C 00: call 0x587b4050
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xaa
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 258h], eax
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x586e965f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 244h]
        and edx, 10h
        ; Exact mapped bytes 75 64: jne 0x586e9640
        __asm _emit 0x75
        __asm _emit 0x64
        push 588b30c8h
        lea eax, [ebp - 218h]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x586e95fe
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 250h], 1
        ; Exact mapped bytes EB 20: jmp 0x586e961e
        __asm _emit 0xeb
        __asm _emit 0x20
        push 588b30d4h
        lea ecx, [ebp - 218h]
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x586e961e
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 254h], 1
        push 588b30e0h
        lea edx, [ebp - 218h]
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x586e9640
        __asm _emit 0x75
        __asm _emit 0x0c
        push 588b30ech
        ; Exact mapped bytes FF 15 04 43 89 58: call dword ptr [0x58894304]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        lea eax, [ebp - 244h]
        push eax
        mov ecx, dword ptr [ebp - 258h]
        push ecx
        ; Exact mapped bytes FF 15 38 41 89 58: call dword ptr [0x58894138]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x586e965a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x586e965f
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x586e95c4
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 250h], 0
        ; Exact mapped bytes 0F 84 63 01 00 00: je 0x586e97cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 254h], 0
        ; Exact mapped bytes 0F 84 56 01 00 00: je 0x586e97cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        lea edx, [ebp - 264h]
        push edx
        push 588b30f8h
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C CF DD FF: call 0x584c65b0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xcf
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        cmp dword ptr [ebp - 24ch], 0
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x586e97cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 248h], 0
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x586e96e3
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 24ch]
        add ecx, dword ptr [ebp - 248h]
        movzx edx, byte ptr [ecx]
        cmp edx, 3ah
        ; Exact mapped bytes 75 04: jne 0x586e96d2
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 13: jmp 0x586e96e3
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes EB 0F: jmp 0x586e96e1
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 248h]
        add eax, 1
        mov dword ptr [ebp - 248h], eax
        ; Exact mapped bytes EB CE: jmp 0x586e96b1
        __asm _emit 0xeb
        __asm _emit 0xce
        mov ecx, dword ptr [ebp - 248h]
        add ecx, 2
        mov dword ptr [ebp - 248h], ecx
        mov edx, dword ptr [ebp - 24ch]
        add edx, dword ptr [ebp - 248h]
        push edx
        ; Exact mapped bytes E8 94 E5 16 00: call 0x58857c98
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe5
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 25ch], eax
        mov eax, dword ptr [ebp - 25ch]
        ; Exact mapped bytes 3B 05 30 D2 8F 58: cmp eax, dword ptr [0x588fd230]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 0F 86 B0 00 00 00: jbe 0x586e97cf
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b3104h
        ; Exact mapped bytes FF 15 04 43 89 58: call dword ptr [0x58894304]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 588b3110h
        push 588b3124h
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
        push 588b312ch
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 67 87 17 00: call 0x58861ebc
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x87
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 8
        push 588b3138h
        push 588b3144h
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
        push 0
        push 588b314ch
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 2C 41 89 58: call dword ptr [0x5889412c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push 588b3160h
        ; Exact mapped bytes FF 15 04 43 89 58: call dword ptr [0x58894304]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 588b316ch
        push 588b3178h
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
        push 0
        push 588b3180h
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 2C 41 89 58: call dword ptr [0x5889412c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 260h]
        mov dword ptr [ecx + 144h], 1
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 77 78 14 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        mov esp, ebp
    }
}
