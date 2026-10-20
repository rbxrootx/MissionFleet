// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043EE10 .. +0x2F6 bytes.
extern "C" __declspec(naked) void FUN_0043ee10_0043EE10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 94h
        mov dword ptr [ebp - 74h], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 8]
        sub edx, dword ptr [ebp - 18h]
        sar edx, 2
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x43ef3f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 40: jne 0x43ee9a
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 10: je 0x43ee7f
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 78h], edx
        ; Exact mapped bytes EB 07: jmp 0x43ee86
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 4
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [edx + 4], ecx
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x43ef3a
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 4
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 12: je 0x43eecd
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 7ch], edx
        ; Exact mapped bytes EB 07: jmp 0x43eed4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 4
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx + 4]
        sub edx, 4
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 8
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 34h], edx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 7E 1C: jle 0x43ef2c
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        sub edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 3C 6D 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 06: jmp 0x43ef32
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes E9 B0 01 00 00: jmp 0x43f0ef
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], 1
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sar edx, 2
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 48h]
        cmp eax, dword ptr [ebp - 6ch]
        ; Exact mapped bytes 73 0B: jae 0x43ef6a
        __asm _emit 0x73
        __asm _emit 0x0b
        lea ecx, [ebp - 6ch]
        mov dword ptr [ebp - 84h], ecx
        ; Exact mapped bytes EB 09: jmp 0x43ef73
        __asm _emit 0xeb
        __asm _emit 0x09
        lea edx, [ebp - 48h]
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ebp - 48h]
        add edx, dword ptr [ecx]
        mov dword ptr [ebp - 40h], edx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 46: je 0x43efd3
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 40h]
        shl eax, 2
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 80h
        ; Exact mapped bytes 76 14: jbe 0x43efb3
        __asm _emit 0x76
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        ; Exact mapped bytes E8 B8 D4 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xd4
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 12: jmp 0x43efc5
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 54h]
        push edx
        ; Exact mapped bytes E8 04 50 FF FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x43efdd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 75 0B: jne 0x43f001
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 90h], edx
        ; Exact mapped bytes EB 25: jmp 0x43f026
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 4ch]
        push edx
        ; Exact mapped bytes E8 4B 6C 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        sub ecx, dword ptr [ebp - 58h]
        add eax, ecx
        mov dword ptr [ebp - 90h], eax
        mov edx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 5ch], ecx
        ; Exact mapped bytes EB 12: jmp 0x43f04f
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 60h]
        sub edx, 1
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 5ch]
        add eax, 4
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 76 0A: jbe 0x43f05f
        __asm _emit 0x76
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB DE: jmp 0x43f03d
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 44h], eax
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 4A: jne 0x43f0b5
        __asm _emit 0x75
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 64h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0B: jne 0x43f087
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 94h], edx
        ; Exact mapped bytes EB 25: jmp 0x43f0ac
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 64h]
        sub eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        ; Exact mapped bytes E8 C5 6B 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 64h]
        sub ecx, dword ptr [ebp + 8]
        add eax, ecx
        mov dword ptr [ebp - 94h], eax
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx]
        sar edx, 2
        push edx
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        add ecx, 8
        ; Exact mapped bytes E8 6B E1 FF FF: call 0x43d240
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ebp - 4ch]
        lea ecx, [eax + edx*4]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 11 11 00 00: call 0x440200
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 70h]
        lea eax, [ecx + eax*4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
