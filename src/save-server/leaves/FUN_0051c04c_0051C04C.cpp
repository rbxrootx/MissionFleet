// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051C04C .. +0x232 bytes.
extern "C" __declspec(naked) void FUN_0051c04c_0051C04C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp + 8], 20h
        ; Exact mapped bytes 0F 85 05 02 00 00: jne 0x51c264
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 12 2B 01 00: call 0x52eb79
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 27 0A 01 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 261h
        push 6769f8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 D8 E1 FB FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xe1
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 D2 01 00 00: je 0x51c264
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 40h], 2
        ; Exact mapped bytes 0F 84 C5 01 00 00: je 0x51c264
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 40h], 5
        ; Exact mapped bytes 0F 84 B8 01 00 00: je 0x51c264
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 DA A1 FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa1
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x51c191
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E9 EF FF FF: call 0x51b0b4
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x51c17e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 BF 26 01 00: call 0x52e79e
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 7E: je 0x51c166
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
        ; Exact mapped bytes E8 0C EE FF FF: call 0x51af12
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 0B: jne 0x51c11c
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 10h]
        sub eax, 1
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 06: jmp 0x51c122
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
        ; Exact mapped bytes E8 8F EC FF FF: call 0x51adce
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 64 A4 FB FF: call 0x4d65b2
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa4
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 0ffffh
        or eax, 280000h
        push eax
        push 111h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D3 F4 00 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        cmp dword ptr [ebp - 0ch], 0
        sete al
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 78 26 01 00: call 0x52e7f4
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x51c18c
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 68 26 01 00: call 0x52e7f4
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x51c278
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 17 EF FF FF: call 0x51b0b4
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x51c254
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
        ; Exact mapped bytes E8 4F ED FF FF: call 0x51af12
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 0B: jne 0x51c1d9
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 18h]
        sub edx, 1
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB 06: jmp 0x51c1df
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
        ; Exact mapped bytes E8 CC EB FF FF: call 0x51adce
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 1D FA FF FF: call 0x51bc2b
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 78 A0 FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa0
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 800h
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x51c22b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B6 FB FF FF: call 0x51bde1
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 78 A3 FB FF: call 0x4d65b2
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa3
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 0ffffh
        or eax, 280000h
        push eax
        push 111h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E7 F3 00 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x51c262
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 92 25 01 00: call 0x52e7f4
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x51c278
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 7A 13 01 00: call 0x52d5f2
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x13
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
