// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043D2D0 .. +0x2F2 bytes.
extern "C" __declspec(naked) void FUN_0043d2d0_0043D2D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bdb5h
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
        sub esp, 5ch
        mov dword ptr [ebp - 60h], ecx
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 60h]
        add edx, 8
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 0
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 59 02 00 00: je 0x43d57d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        shl ecx, 2
        mov dword ptr [ebp - 5ch], ecx
        cmp dword ptr [ebp - 5ch], 80h
        ; Exact mapped bytes 76 14: jbe 0x43d34a
        __asm _emit 0x76
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 5ch]
        push edx
        ; Exact mapped bytes E8 21 F1 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf1
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes E9 2B 02 00 00: jmp 0x43d575
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        sub eax, 1
        shr eax, 3
        lea ecx, [eax*4 + 685054h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 84 16 01 00 00: je 0x43d480
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 685094h
        ; Exact mapped bytes FF 15 28 BA 68 00: call dword ptr [0x68ba28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x43d480
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 28 0A 67 00: mov eax, dword ptr [0x670a28]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 8B 0D 98 50 68 00: mov ecx, dword ptr [0x685098]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 28h], 11h
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x43d3a9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 30h]
        add edx, 1
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 30h]
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 73 64: jae 0x43d415
        __asm _emit 0x73
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 2ch]
        shr ecx, 1
        cmp dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes 72 09: jb 0x43d3c4
        __asm _emit 0x72
        __asm _emit 0x09
        ; Exact mapped bytes 83 3D 94 50 68 00 00: cmp dword ptr [0x685094], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2A: je 0x43d3ee
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 28h]
        imul edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        imul eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        imul ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        imul edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB 25: jmp 0x43d413
        __asm _emit 0xeb
        __asm _emit 0x25
        push 1
        push 685094h
        ; Exact mapped bytes FF 15 28 BA 68 00: call dword ptr [0x68ba28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x43d413
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes A3 98 50 68 00: mov dword ptr [0x685098], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 28 0A 67 00 E8 03 00 00: mov dword ptr [0x670a28], 0x3e8
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 6D: jmp 0x43d480
        __asm _emit 0xeb
        __asm _emit 0x6d
        ; Exact mapped bytes EB 8B: jmp 0x43d3a0
        __asm _emit 0xeb
        __asm _emit 0x8b
        ; Exact mapped bytes C7 05 28 0A 67 00 1E 00 00 00: mov dword ptr [0x670a28], 0x1e
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x43d431
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 1
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        add edx, 6
        mov dword ptr [ebp - 34h], edx
        cmp dword ptr [ebp - 34h], 1bh
        ; Exact mapped bytes 7E 07: jle 0x43d447
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 1bh
        push 1
        push 685094h
        ; Exact mapped bytes FF 15 28 BA 68 00: call dword ptr [0x68ba28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x43d45a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 26: jmp 0x43d480
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp dword ptr [ebp - 34h], 14h
        ; Exact mapped bytes 7F 0A: jg 0x43d46a
        __asm _emit 0x7f
        __asm _emit 0x0a
        push 0
        ; Exact mapped bytes FF 15 AC B7 68 00: call dword ptr [0x68b7ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x43d47e
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 34h]
        sub ecx, 14h
        mov eax, 1
        shl eax, cl
        push eax
        ; Exact mapped bytes FF 15 AC B7 68 00: call dword ptr [0x68b7ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB A8: jmp 0x43d428
        __asm _emit 0xeb
        __asm _emit 0xa8
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0F: je 0x43d4a1
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x43d54c
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 54h], eax
        mov dword ptr [ebp - 44h], 14h
        mov ecx, dword ptr [ebp - 54h]
        add ecx, 7
        and ecx, 0fffffff8h
        mov dword ptr [ebp - 54h], ecx
        lea edx, [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 99 83 FF FF: call 0x435860
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 44h], 1
        ; Exact mapped bytes 75 08: jne 0x43d4db
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 71: jmp 0x43d54c
        __asm _emit 0xeb
        __asm _emit 0x71
        mov edx, dword ptr [ebp - 54h]
        sub edx, 1
        shr edx, 3
        lea eax, [edx*4 + 685054h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        add edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [eax], ecx
        mov dword ptr [ebp - 48h], 1
        ; Exact mapped bytes EB 09: jmp 0x43d517
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 48h]
        add edx, 1
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 38h]
        add ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 44h]
        sub edx, 1
        cmp edx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 75 0B: jne 0x43d53c
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [eax], 0
        ; Exact mapped bytes EB 0A: jmp 0x43d546
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB C8: jmp 0x43d50e
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 10: je 0x43d56f
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [ebp - 58h], 685094h
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 68h], edx
        ; Exact mapped bytes EB 07: jmp 0x43d584
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [eax + ecx*4]
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [eax + 8], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
