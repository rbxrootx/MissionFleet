// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052967F .. +0x232 bytes.
extern "C" __declspec(naked) void FUN_0052967f_0052967F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp + 8], 20h
        ; Exact mapped bytes 0F 85 05 02 00 00: jne 0x529897
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 7F 5A 01 00: call 0x53f119
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 94 39 01 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 261h
        push 5c8f88h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A5 1A FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 D2 01 00 00: je 0x529897
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 40h], 2
        ; Exact mapped bytes 0F 84 C5 01 00 00: je 0x529897
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 40h], 5
        ; Exact mapped bytes 0F 84 B8 01 00 00: je 0x529897
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 17 57 FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x57
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x5297c4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C6 EF FF FF: call 0x5286c4
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x5297b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 2C 56 01 00: call 0x53ed3e
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 7E: je 0x529799
        __asm _emit 0x74
        __asm _emit 0x7e
        mov edx, dword ptr [ebp - 24h]
        xor eax, eax
        cmp dword ptr [edx + 40h], 6
        sete al
        add eax, 2
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E9 ED FF FF: call 0x528522
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 0B: jne 0x52974f
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 10h]
        sub eax, 1
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 06: jmp 0x529755
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        cdq
        idiv dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 6C EC FF FF: call 0x5283de
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A1 59 FC FF: call 0x4ef122
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x59
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 0ffffh
        or eax, 280000h
        push eax
        push 111h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 40 24 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        cmp dword ptr [ebp - 0ch], 0
        sete al
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E5 55 01 00: call 0x53ed94
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x5297bf
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D5 55 01 00: call 0x53ed94
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x5298ab
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F4 EE FF FF: call 0x5286c4
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x529887
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        xor edx, edx
        cmp dword ptr [ecx + 40h], 6
        sete dl
        add edx, 2
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 2C ED FF FF: call 0x528522
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 0B: jne 0x52980c
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 18h]
        sub edx, 1
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB 06: jmp 0x529812
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        cdq
        idiv dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], edx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A9 EB FF FF: call 0x5283de
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 1D FA FF FF: call 0x52925e
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B5 55 FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x55
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 800h
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x52985e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B6 FB FF FF: call 0x529414
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B5 58 FC FF: call 0x4ef122
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x58
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 0ffffh
        or eax, 280000h
        push eax
        push 111h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 23 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x529895
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 FF 54 01 00: call 0x53ed94
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x5298ab
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E7 42 01 00: call 0x53db92
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
