// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006B140 .. +0x3C6 bytes.
extern "C" __declspec(naked) void FUN_1006b140_1006B140() {
    __asm {
        push -1
        push 1016f5cbh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 10h
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov eax, dword ptr [ebx + 10474h]
        mov dword ptr [esp + 10h], ebx
        cmp eax, 1
        ; Exact mapped bytes 75 2C: jne 0x1006b198
        __asm _emit 0x75
        __asm _emit 0x2c
        test byte ptr [ebx + 1047ch], 0fh
        ; Exact mapped bytes 75 23: jne 0x1006b198
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebx + 1050ch]
        mov edi, dword ptr [ebx + 10504h]
        imul ecx, dword ptr [ebx + 10508h]
        mov edx, ecx
        xor eax, eax
        shr ecx, 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [eax + 0ch]
        test esi, esi
        ; Exact mapped bytes 74 4F: je 0x1006b1f3
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, esi
        ; Exact mapped bytes E8 15 34 08 00: call 0x100ee5c0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 3A: jne 0x1006b1ec
        __asm _emit 0x75
        __asm _emit 0x3a
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        mov eax, dword ptr [esi + 5c50h]
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x1006b1ec
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, esi
        ; Exact mapped bytes E8 CF 5B 08 00: call 0x100f0da0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x5b
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x1006b1ec
        __asm _emit 0x74
        __asm _emit 0x17
        push 0
        push 0
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 1F F2 FF FF: call 0x1006a400
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        inc dword ptr [eax + 20c08h]
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 B1: jne 0x1006b1a4
        __asm _emit 0x75
        __asm _emit 0xb1
        mov ecx, dword ptr [ebx + 104e0h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov ecx, ebx
        ; Exact mapped bytes E8 4B 49 00 00: call 0x1006fb50
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebx + 20bc4h]
        test al, al
        ; Exact mapped bytes 74 07: je 0x1006b216
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, ebx
        ; Exact mapped bytes E8 FA 40 00 00: call 0x1006f310
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 21710h]
        test eax, eax
        ; Exact mapped bytes 7E 0B: jle 0x1006b22b
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov ecx, dword ptr [ebx + 21a4ch]
        ; Exact mapped bytes E8 B5 86 FB FF: call 0x100238e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x86
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes F6 05 40 56 1C 10 01: test byte ptr [0x101c5640], 1
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x01
        ; Exact mapped bytes 74 09: je 0x1006b23d
        __asm _emit 0x74
        __asm _emit 0x09
        push 1
        mov ecx, ebx
        ; Exact mapped bytes E8 F3 43 00 00: call 0x1006f630
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 104cch]
        mov dword ptr [esp + 14h], 0
        inc ecx
        mov dword ptr [ebx + 104cch], ecx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [eax + 0ch]
        test esi, esi
        ; Exact mapped bytes 0F 84 6F 01 00 00: je 0x1006b3d1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebx + 168h]
        push ebp
        mov dword ptr [esp + 10h], ecx
        mov ecx, esi
        ; Exact mapped bytes E8 4C 33 08 00: call 0x100ee5c0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x33
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 46 01 00 00: jne 0x1006b3c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 B9 3C 00 00: call 0x1006ef40
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        ; Exact mapped bytes 8B 15 1C 57 1C 10: mov edx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        push ecx
        mov ecx, esi
        mov edi, dword ptr [edx + 2a8h]
        ; Exact mapped bytes E8 5E 5D 08 00: call 0x100f1000
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x5d
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [esp + 24h]
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 01 40 05 00: call 0x100bf2b0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        ; Exact mapped bytes 8B 3D F4 56 1C 10: mov edi, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 4]
        mov dword ptr [esp + 1ch], ecx
        mov ecx, dword ptr [edi + 10504h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 21 01 00 00: je 0x1006b3ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 51eb851fh
        mov ebx, dword ptr [edi + 10508h]
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov ebp, edx
        cmp ebp, ebx
        ; Exact mapped bytes 0F 8D FC 00 00 00: jge 0x1006b3ea
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 8E F4 00 00 00: jle 0x1006b3ea
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2fa0be83h
        imul dword ptr [esp + 1ch]
        mov eax, edx
        sar eax, 4
        mov edx, eax
        shr edx, 1fh
        add eax, edx
        mov edx, dword ptr [edi + 1050ch]
        cmp eax, edx
        ; Exact mapped bytes 0F 8D D1 00 00 00: jge 0x1006b3ea
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E C9 00 00 00: jle 0x1006b3ea
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, ebx
        add eax, ebp
        xor edx, edx
        mov dl, byte ptr [ecx + eax]
        mov eax, edx
        test eax, eax
        ; Exact mapped bytes 0F 84 B5 00 00 00: je 0x1006b3ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [esi + 5c5ch], 0
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 65: jne 0x1006b3ad
        __asm _emit 0x75
        __asm _emit 0x65
        mov ecx, eax
        push 68h
        mov dword ptr [ecx], 1
        ; Exact mapped bytes E8 49 14 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr [esp + 28h], ecx
        ; Exact mapped bytes 74 34: je 0x1006b39c
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [esp + 14h]
        cmp dword ptr [edx + 21714h], ecx
        ; Exact mapped bytes 75 0D: jne 0x1006b381
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [edx + 21a34h], ecx
        ; Exact mapped bytes 75 05: jne 0x1006b381
        __asm _emit 0x75
        __asm _emit 0x05
        mov ecx, 1
        push 2ee0h
        push 300h
        push 400h
        push edx
        push esi
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 B6 EE 08 00: call 0x100fa250
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xee
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1006b39e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [esp + 28h], 0ffffffffh
        mov dword ptr [eax + 60h], edx
        mov ebx, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 10h]
        inc ecx
        add eax, 4
        mov dword ptr [esp + 18h], ecx
        mov dword ptr [esp + 10h], eax
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 0F 85 9D FE FF FF: jne 0x1006b26d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        mov ecx, ebx
        ; Exact mapped bytes E8 C8 3D 09 00: call 0x100ff1a0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        ret
        mov ebx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [eax], 0
        mov eax, dword ptr [ebx + 21a34h]
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x1006b41a
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 B0 31 08 00: call 0x100ee5c0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x31
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x1006b41a
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [esi + 5c5ch], eax
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [edx + 0ch]
        test edi, edi
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x1006b4e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 21a34h]
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x1006b460
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dl, byte ptr [edi + 330h]
        mov ecx, dword ptr [eax + 4]
        cmp dl, byte ptr [ecx + 330h]
        ; Exact mapped bytes 75 0B: jne 0x1006b456
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, edi
        ; Exact mapped bytes E8 7E 31 08 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x31
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x1006b460
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebx + 21a34h]
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x1006b4ca
        __asm _emit 0x74
        __asm _emit 0x6a
        mov ecx, dword ptr [edi + 0e74h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 81 5A 03 00 00: mov ax, word ptr [ecx + 0x35a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x5a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [eax + eax*2]
        lea ecx, [eax + eax*4]
        mov eax, 51eb851fh
        shl ecx, 3
        imul ecx
        mov ecx, dword ptr [edi + 4]
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esi + 4]
        mov ebp, edx
        mov edx, dword ptr [esi + 8]
        sub ecx, eax
        mov eax, dword ptr [edi + 8]
        sub eax, edx
        lea eax, [eax + eax*2]
        lea edx, [eax + eax*4]
        mov eax, 51eb851fh
        shl edx, 3
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, edx
        imul eax, edx
        mov edx, ecx
        imul edx, ecx
        mov ecx, ebp
        add eax, edx
        imul ecx, ebp
        cmp ecx, eax
        ; Exact mapped bytes 7D 0D: jge 0x1006b4d7
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 0F 85 56 FF FF FF: jne 0x1006b42b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x1006b4e9
        __asm _emit 0xeb
        __asm _emit 0x12
        test edi, edi
        mov dword ptr [esi + 5c5ch], 1
        ; Exact mapped bytes 0F 85 C8 FE FF FF: jne 0x1006b3b1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 5c5ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 BA FE FF FF: je 0x1006b3b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 5c5ch], 0
        ; Exact mapped bytes E9 AB FE FF FF: jmp 0x1006b3b1
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
