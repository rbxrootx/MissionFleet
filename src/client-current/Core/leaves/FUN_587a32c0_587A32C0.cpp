// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A32C0 .. +0x31F bytes.
extern "C" __declspec(naked) void FUN_587a32c0_587A32C0() {
    __asm {
        sub esp, 1ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 18h], eax
        mov ecx, dword ptr [esp + 30h]
        push ebx
        push esi
        mov esi, dword ptr [esp + 28h]
        cmp ecx, 6
        ; Exact mapped bytes 0F 87 BC 02 00 00: ja 0x587a359d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 8D E0 35 7A 58: jmp dword ptr [ecx*4 + 0x587a35e0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0x35
        __asm _emit 0x7a
        __asm _emit 0x58
        mov ebx, dword ptr [esp + 34h]
        lea eax, [ebx - 1]
        cmp eax, 0fh
        ; Exact mapped bytes 0F 87 B0 02 00 00: ja 0x587a35a8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [eax + 587a3604h]
        ; Exact mapped bytes FF 24 85 FC 35 7A 58: jmp dword ptr [eax*4 + 0x587a35fc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x35
        __asm _emit 0x7a
        __asm _emit 0x58
        mov ebx, dword ptr [esp + 34h]
        cmp ebx, 8
        ; Exact mapped bytes 74 09: je 0x587a3318
        __asm _emit 0x74
        __asm _emit 0x09
        cmp ebx, 10h
        ; Exact mapped bytes 0F 85 9B 02 00 00: jne 0x587a35b3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 157h], 3
        ; Exact mapped bytes EB 5B: jmp 0x587a337c
        __asm _emit 0xeb
        __asm _emit 0x5b
        mov ebx, dword ptr [esp + 34h]
        lea eax, [ebx - 1]
        cmp eax, 7
        ; Exact mapped bytes 0F 87 8D 02 00 00: ja 0x587a35be
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [eax + 587a361ch]
        ; Exact mapped bytes FF 24 85 14 36 7A 58: jmp dword ptr [eax*4 + 0x587a3614]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x36
        __asm _emit 0x7a
        __asm _emit 0x58
        mov byte ptr [esi + 157h], 1
        ; Exact mapped bytes EB 34: jmp 0x587a337c
        __asm _emit 0xeb
        __asm _emit 0x34
        mov ebx, dword ptr [esp + 34h]
        cmp ebx, 8
        ; Exact mapped bytes 74 09: je 0x587a335a
        __asm _emit 0x74
        __asm _emit 0x09
        cmp ebx, 10h
        ; Exact mapped bytes 0F 85 6F 02 00 00: jne 0x587a35c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 157h], 2
        ; Exact mapped bytes EB 19: jmp 0x587a337c
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ebx, dword ptr [esp + 34h]
        cmp ebx, 8
        ; Exact mapped bytes 74 09: je 0x587a3375
        __asm _emit 0x74
        __asm _emit 0x09
        cmp ebx, 10h
        ; Exact mapped bytes 0F 85 5F 02 00 00: jne 0x587a35d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 157h], 4
        cmp dword ptr [esp + 3ch], 0
        ; Exact mapped bytes 74 1A: je 0x587a339d
        __asm _emit 0x74
        __asm _emit 0x1a
        push 588b8b3ch
        push esi
        ; Exact mapped bytes E8 A2 C0 FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 40h]
        add esp, 8
        mov dword ptr [esp + 3ch], 0
        test byte ptr [esi + 284h], 4
        ; Exact mapped bytes 74 1E: je 0x587a33c4
        __asm _emit 0x74
        __asm _emit 0x1e
        test dword ptr [esi + 74h], 1000h
        ; Exact mapped bytes 75 15: jne 0x587a33c4
        __asm _emit 0x75
        __asm _emit 0x15
        cmp ecx, 2
        ; Exact mapped bytes 74 05: je 0x587a33b9
        __asm _emit 0x74
        __asm _emit 0x05
        cmp ecx, 6
        ; Exact mapped bytes 75 0B: jne 0x587a33c4
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [esp + 40h]
        cmp eax, 40h
        ; Exact mapped bytes 74 20: je 0x587a33e2
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes EB 04: jmp 0x587a33c8
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, dword ptr [esp + 40h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x587a33e2
        __asm _emit 0x74
        __asm _emit 0x16
        push 588b8b60h
        push esi
        ; Exact mapped bytes E8 59 C0 FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [esp + 40h], 0
        mov eax, dword ptr [esp + 44h]
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x587a3406
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp eax, 1
        ; Exact mapped bytes 74 17: je 0x587a3406
        __asm _emit 0x74
        __asm _emit 0x17
        push 588b8b80h
        push esi
        ; Exact mapped bytes E8 36 C0 FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        add esp, 8
        mov dword ptr [esp + 44h], eax
        movzx ecx, byte ptr [esi + 157h]
        mov edx, dword ptr [esp + 38h]
        mov byte ptr [esi + 150h], al
        mov eax, dword ptr [esp + 40h]
        mov byte ptr [esi + 288h], al
        mov eax, dword ptr [esp + 3ch]
        mov byte ptr [esi + 2a4h], al
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [esi + 104h], eax
        mov eax, dword ptr [esp + 30h]
        mov dword ptr [esi + 108h], eax
        movzx eax, bl
        imul ecx, eax
        mov byte ptr [esi + 154h], bl
        mov byte ptr [esi + 153h], dl
        mov byte ptr [esi + 156h], cl
        cmp cl, 8
        movzx eax, cl
        mov ecx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 72 08: jb 0x587a346b
        __asm _emit 0x72
        __asm _emit 0x08
        shr eax, 3
        imul eax, ecx
        ; Exact mapped bytes EB 09: jmp 0x587a3474
        __asm _emit 0xeb
        __asm _emit 0x09
        imul eax, ecx
        add eax, 7
        shr eax, 3
        mov dword ptr [esi + 114h], eax
        mov al, byte ptr [esi + 157h]
        mov byte ptr [esi + 158h], al
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 10h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 11h], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 12h], al
        mov dword ptr [esi + 110h], ecx
        mov byte ptr [esp + 13h], cl
        mov ecx, dword ptr [esp + 30h]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 14h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 15h], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 16h], al
        mov eax, dword ptr [esp + 3ch]
        mov byte ptr [esp + 1ah], al
        mov eax, dword ptr [esp + 40h]
        push 0dh
        mov byte ptr [esp + 1fh], al
        mov eax, dword ptr [esp + 48h]
        push 49484452h
        push esi
        mov byte ptr [esi + 155h], bl
        mov byte ptr [esp + 23h], cl
        mov byte ptr [esp + 24h], bl
        mov byte ptr [esp + 25h], dl
        mov byte ptr [esp + 28h], al
        ; Exact mapped bytes E8 5F 08 00 00: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 0dh
        lea eax, [esp + 20h]
        push eax
        push esi
        ; Exact mapped bytes E8 B2 33 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        push 0dh
        lea eax, [esp + 2ch]
        push eax
        push esi
        ; Exact mapped bytes E8 95 C0 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 30h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 31h], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 32h], al
        lea eax, [esp + 30h]
        push 4
        push eax
        push esi
        mov dword ptr [esi + 2dch], 82h
        mov byte ptr [esp + 3fh], cl
        ; Exact mapped bytes E8 69 33 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        cmp byte ptr [esi + 152h], 0
        ; Exact mapped bytes 75 22: jne 0x587a3585
        __asm _emit 0x75
        __asm _emit 0x22
        cmp byte ptr [esi + 153h], 3
        ; Exact mapped bytes 74 12: je 0x587a357e
        __asm _emit 0x74
        __asm _emit 0x12
        cmp byte ptr [esi + 154h], 8
        ; Exact mapped bytes 72 09: jb 0x587a357e
        __asm _emit 0x72
        __asm _emit 0x09
        mov byte ptr [esi + 152h], 0f8h
        ; Exact mapped bytes EB 07: jmp 0x587a3585
        __asm _emit 0xeb
        __asm _emit 0x07
        mov byte ptr [esi + 152h], 8
        mov ecx, dword ptr [esp + 20h]
        mov dword ptr [esi + 74h], 1
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 B7 DA 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xda
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 1ch
        ret
        push 588b8b18h
        push esi
        ; Exact mapped bytes E8 D8 B8 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b8a58h
        push esi
        ; Exact mapped bytes E8 CD B8 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b8a80h
        push esi
        ; Exact mapped bytes E8 C2 B8 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b8aa0h
        push esi
        ; Exact mapped bytes E8 B7 B8 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b8ac8h
        push esi
        ; Exact mapped bytes E8 AC B8 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b8af4h
        push esi
        ; Exact mapped bytes E8 A1 B8 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
