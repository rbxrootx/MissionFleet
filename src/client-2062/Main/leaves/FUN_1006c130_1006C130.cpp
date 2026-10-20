// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006C130 .. +0x323 bytes.
extern "C" __declspec(naked) void FUN_1006c130_1006C130() {
    __asm {
        sub esp, 208h
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 214h]
        push esi
        mov esi, dword ptr [esp + 21ch]
        mov eax, ebp
        mov edx, ebp
        push edi
        shr eax, 10h
        and edx, 0ffffh
        cmp eax, 3
        mov edi, ecx
        lea ebx, [esi + 30h]
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes 0F 85 CD 00 00 00: jne 0x1006c234
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 21714h]
        test eax, eax
        ; Exact mapped bytes 0F 85 D1 02 00 00: jne 0x1006c446
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ebx, ebx
        mov eax, dword ptr [ecx + 4]
        mov bl, byte ptr [eax + 330h]
        cmp edx, ebx
        ; Exact mapped bytes 0F 85 B8 02 00 00: jne 0x1006c446
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 6C 00 FC FF: call 0x1002c200
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 74 5B: je 0x1006c1f5
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, ebx
        ; Exact mapped bytes E8 2F 24 08 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x1006c1f5
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ebx + 4]
        mov ebp, dword ptr [eax + 4]
        sub ebp, ecx
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ebx + 8]
        sub ecx, eax
        mov eax, 38e38e39h
        imul ecx, ecx
        shl ecx, 2
        imul ecx
        mov ecx, ebp
        imul ecx, ebp
        sar edx, 1
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        add edx, ecx
        cmp edx, 9c400h
        ; Exact mapped bytes 7D 0B: jge 0x1006c1ee
        __asm _emit 0x7d
        __asm _emit 0x0b
        lea eax, [esi + 30h]
        mov ecx, ebx
        push eax
        ; Exact mapped bytes E8 D2 35 08 00: call 0x100ef7c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 21ch]
        lea eax, [esi + 30h]
        lea edx, [esp + 18h]
        push eax
        push esi
        push 101ab790h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 20b98h]
        add esp, 10h
        lea eax, [esp + 18h]
        push 83add7h
        push eax
        ; Exact mapped bytes E8 6E D0 09 00: call 0x10109290
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd0
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, dword ptr [edi + 20b98h]
        mov dword ptr [edi + 6ch], 83add7h
        ; Exact mapped bytes E9 FE 01 00 00: jmp 0x1006c432
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 BF 00 00 00: jne 0x1006c2fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add ecx, 78h
        push ecx
        push esi
        ; Exact mapped bytes FF 15 84 50 17 10: call dword ptr [0x10175084]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes 75 4E: jne 0x1006c2a4
        __asm _emit 0x75
        __asm _emit 0x4e
        cmp eax, 800h
        ; Exact mapped bytes 75 16: jne 0x1006c273
        __asm _emit 0x75
        __asm _emit 0x16
        push ebx
        lea edx, [esp + 1ch]
        push 101ab784h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact mapped bytes EB 62: jmp 0x1006c2d5
        __asm _emit 0xeb
        __asm _emit 0x62
        lea eax, [esi + 18h]
        push eax
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x1006c28f
        __asm _emit 0x74
        __asm _emit 0x0e
        push ebx
        push esi
        lea ecx, [esp + 20h]
        push 101ab770h
        push ecx
        ; Exact mapped bytes EB 3D: jmp 0x1006c2cc
        __asm _emit 0xeb
        __asm _emit 0x3d
        lea edx, [esp + 18h]
        push 101ab758h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 8
        ; Exact mapped bytes EB 31: jmp 0x1006c2d5
        __asm _emit 0xeb
        __asm _emit 0x31
        cmp eax, 800h
        push ebx
        ; Exact mapped bytes 75 15: jne 0x1006c2c1
        __asm _emit 0x75
        __asm _emit 0x15
        lea ecx, [esp + 1ch]
        push 101ab750h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact mapped bytes EB 14: jmp 0x1006c2d5
        __asm _emit 0xeb
        __asm _emit 0x14
        push esi
        lea edx, [esp + 20h]
        push 101ab738h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 10h
        mov ecx, dword ptr [edi + 20b98h]
        lea eax, [esp + 18h]
        push 0ccccffh
        push eax
        ; Exact mapped bytes E8 A6 CF 09 00: call 0x10109290
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xcf
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, dword ptr [edi + 20b98h]
        mov dword ptr [edi + 6ch], 0ccccffh
        ; Exact mapped bytes E9 36 01 00 00: jmp 0x1006c432
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 41 01 00 00: jne 0x1006c446
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov dword ptr [esp + 18h], 0
        ; Exact mapped bytes E8 E7 FE FB FF: call 0x1002c200
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x1006c325
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 1
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 74 26: je 0x1006c350
        __asm _emit 0x74
        __asm _emit 0x26
        push 101ab734h
        push esi
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x1006c350
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x1006c350
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [edi + 21714h]
        test eax, eax
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x1006c446
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 10h], 800h
        ; Exact mapped bytes 75 23: jne 0x1006c37d
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [edi + 20b98h]
        push 0a0bec8h
        push ebx
        ; Exact mapped bytes E8 25 CF 09 00: call 0x10109290
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xcf
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, dword ptr [edi + 20b98h]
        mov dword ptr [edi + 6ch], 0a0bec8h
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x1006c432
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 36ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 BB 00 00 00: jne 0x1006c446
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        ; Exact mapped bytes E8 69 FE FB FF: call 0x1002c200
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 74 5B: je 0x1006c3f8
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, ebx
        ; Exact mapped bytes E8 2C 22 08 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x22
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x1006c3f8
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ebx + 4]
        mov ebp, dword ptr [eax + 4]
        sub ebp, ecx
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ebx + 8]
        sub ecx, eax
        mov eax, 38e38e39h
        imul ecx, ecx
        shl ecx, 2
        imul ecx
        mov ecx, ebp
        imul ecx, ebp
        sar edx, 1
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        add edx, ecx
        cmp edx, 9c400h
        ; Exact mapped bytes 7D 0B: jge 0x1006c3f1
        __asm _emit 0x7d
        __asm _emit 0x0b
        lea eax, [esi + 30h]
        mov ecx, ebx
        push eax
        ; Exact mapped bytes E8 CF 33 08 00: call 0x100ef7c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x33
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 21ch]
        lea eax, [esi + 30h]
        lea edx, [esp + 18h]
        push eax
        push esi
        push 101ab72ch
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 20b98h]
        add esp, 10h
        lea eax, [esp + 18h]
        push 0ffffh
        push eax
        ; Exact mapped bytes E8 6B CE 09 00: call 0x10109290
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, dword ptr [edi + 20b98h]
        mov dword ptr [edi + 6ch], 0ffffh
        mov dword ptr [edi + 70h], 0
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ebp
        ; Exact mapped bytes E8 6A 03 05 00: call 0x100bc7b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 208h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
