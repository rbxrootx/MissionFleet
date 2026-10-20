// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00506589 .. +0x1D2 bytes.
extern "C" __declspec(naked) void FUN_00506589_00506589() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d4b8h
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
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 64 B3 02 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x50667b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 75 7F: jne 0x506642
        __asm _emit 0x75
        __asm _emit 0x7f
        push 0bbh
        push 5c79a0h
        push 1ch
        ; Exact mapped bytes E8 8B 6A FE FF: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 14: je 0x5065f8
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0D 4B FE FF: call 0x4eb100
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5065ff
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 34h], edx
        push 1
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 40h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 34h]
        ; Exact mapped bytes E8 83 4B FE FF: call 0x4eb1ac
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes E8 CB D1 02 00: call 0x533803
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 30h], 1
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2E: je 0x506676
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 20 FC FF FF: call 0x506270
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes E8 A0 4F FE FF: call 0x4eb5ff
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x4f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 30h]
        add ecx, 1
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 30h], ecx
        ; Exact mapped bytes E9 CD 00 00 00: jmp 0x506748
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x50670d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0cbh
        push 5c79a0h
        push 14h
        ; Exact mapped bytes E8 C6 69 FE FF: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0D: je 0x5066b6
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 DF E2 FD FF: call 0x4e4990
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5066bd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 34h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        push 1
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes E8 60 E3 FD FF: call 0x4e4a47
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x5066ee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x5066e7
        __asm _emit 0x75
        __asm _emit 0xf3
        push 0
        push 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes E8 64 BF 02 00: call 0x532667
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 30h], 1
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 35: je 0x506748
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 55 FB FF FF: call 0x506270
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 30h]
        add ecx, 1
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 30h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes E8 4B E8 FD FF: call 0x4e4f93
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
