// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58734E90 .. +0x1A0 bytes.
extern "C" __declspec(naked) void FUN_58734e90_58734E90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 7B 01 00 00: je 0x5873502e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 70h]
        test ecx, ecx
        ; Exact mapped bytes 74 67: je 0x58734f25
        __asm _emit 0x74
        __asm _emit 0x67
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58734ed0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 54h
        ; Exact mapped bytes E8 65 33 D5 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x33
        __asm _emit 0xd5
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 73 32: jae 0x58734f12
        __asm _emit 0x73
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 74 25: je 0x58734f10
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        add edx, 54h
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 10 2B D5 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x2b
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 31 A9 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xa9
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B5: jmp 0x58734ec7
        __asm _emit 0xeb
        __asm _emit 0xb5
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [edx + 68h], ecx
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 70h], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58734f37
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 54h
        ; Exact mapped bytes E8 FE 32 D5 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x32
        __asm _emit 0xd5
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 73 5D: jae 0x58734fa4
        __asm _emit 0x73
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 4]
        add ecx, 54h
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B4 2A D5 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x2a
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 5D FA D4 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xfa
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 74 31: je 0x58734fa2
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 4]
        add edx, 54h
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8A 2A D5 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x2a
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 33 FA D4 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 10: jne 0x58734fa2
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 6ch], edx
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 70h], 1
        ; Exact mapped bytes EB 8A: jmp 0x58734f2e
        __asm _emit 0xeb
        __asm _emit 0x8a
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x58734fc5
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x58734fc5
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x5873502e
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x58734fe8
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x58734fce
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 20 06 D6 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x5873500c
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x5873502e
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x5873502c
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FC 05 D6 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x58734fce
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
