// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004287F7 .. +0x255 bytes.
extern "C" __declspec(naked) void FUN_004287f7_004287F7() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 4401e0h
        push 423118h
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
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], esp
        xor ebx, ebx
        ; Exact mapped bytes 39 1D 08 00 45 00: cmp dword ptr [0x450008], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0x00
        push 1
        pop edi
        ; Exact mapped bytes 75 40: jne 0x42886a
        __asm _emit 0x75
        __asm _emit 0x40
        push edi
        mov eax, 43ff8ch
        push eax
        push edi
        push eax
        push ebx
        push ebx
        ; Exact mapped bytes FF 15 A8 C1 43 00: call dword ptr [0x43c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x428847
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 89 3D 08 00 45 00: mov dword ptr [0x450008], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x42886a
        __asm _emit 0xeb
        __asm _emit 0x23
        push edi
        mov eax, 43ff88h
        push eax
        push edi
        push eax
        push ebx
        push ebx
        ; Exact mapped bytes FF 15 44 C2 43 00: call dword ptr [0x43c244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 00 02 00 00: je 0x428a60
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 08 00 45 00 02 00 00 00: mov dword ptr [0x450008], 2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 14h]
        cmp esi, ebx
        ; Exact mapped bytes 7E 10: jle 0x428881
        __asm _emit 0x7e
        __asm _emit 0x10
        push esi
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 FA 01 00 00: call 0x428a74
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov esi, eax
        mov dword ptr [ebp + 14h], esi
        cmp dword ptr [ebp + 1ch], ebx
        ; Exact mapped bytes 7E 10: jle 0x428896
        __asm _emit 0x7e
        __asm _emit 0x10
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 E3 01 00 00: call 0x428a74
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov dword ptr [ebp + 1ch], eax
        ; Exact mapped bytes A1 08 00 45 00: mov eax, dword ptr [0x450008]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 1B: jne 0x4288bb
        __asm _emit 0x75
        __asm _emit 0x1b
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push esi
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 44 C2 43 00: call dword ptr [0x43c244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes E9 A7 01 00 00: jmp 0x428a62
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 0F 85 9D 01 00 00: jne 0x428a60
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 20h], ebx
        ; Exact mapped bytes 75 08: jne 0x4288d0
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes A1 5C FF 44 00: mov eax, dword ptr [0x44ff5c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp + 20h], eax
        cmp esi, ebx
        ; Exact mapped bytes 74 09: je 0x4288dd
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 1ch], ebx
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x428975
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 75 08: jne 0x4288ea
        __asm _emit 0x75
        __asm _emit 0x08
        push 2
        pop eax
        ; Exact mapped bytes E9 78 01 00 00: jmp 0x428a62
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 1ch], edi
        ; Exact mapped bytes 7E 07: jle 0x4288f6
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, edi
        ; Exact mapped bytes E9 6C 01 00 00: jmp 0x428a62
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, edi
        ; Exact mapped bytes 7F 41: jg 0x42893b
        __asm _emit 0x7f
        __asm _emit 0x41
        lea eax, [ebp - 3ch]
        push eax
        push dword ptr [ebp + 20h]
        ; Exact mapped bytes FF 15 C8 C0 43 00: call dword ptr [0x43c0c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 51 01 00 00: je 0x428a60
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, ebx
        ; Exact mapped bytes 7E 2C: jle 0x42893f
        __asm _emit 0x7e
        __asm _emit 0x2c
        cmp dword ptr [ebp - 3ch], 2
        ; Exact mapped bytes 72 22: jb 0x42893b
        __asm _emit 0x72
        __asm _emit 0x22
        lea eax, [ebp - 36h]
        cmp byte ptr [ebp - 36h], bl
        ; Exact mapped bytes 74 1A: je 0x42893b
        __asm _emit 0x74
        __asm _emit 0x1a
        mov dl, byte ptr [eax + 1]
        cmp dl, bl
        ; Exact mapped bytes 74 13: je 0x42893b
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 10h]
        mov cl, byte ptr [ecx]
        cmp cl, byte ptr [eax]
        ; Exact mapped bytes 72 04: jb 0x428935
        __asm _emit 0x72
        __asm _emit 0x04
        cmp cl, dl
        ; Exact mapped bytes 76 AD: jbe 0x4288e2
        __asm _emit 0x76
        __asm _emit 0xad
        inc eax
        inc eax
        cmp byte ptr [eax], bl
        ; Exact mapped bytes 75 E6: jne 0x428921
        __asm _emit 0x75
        __asm _emit 0xe6
        push 3
        ; Exact mapped bytes EB A5: jmp 0x4288e4
        __asm _emit 0xeb
        __asm _emit 0xa5
        cmp dword ptr [ebp + 1ch], ebx
        ; Exact mapped bytes 7E 31: jle 0x428975
        __asm _emit 0x7e
        __asm _emit 0x31
        cmp dword ptr [ebp - 3ch], 2
        ; Exact mapped bytes 72 A5: jb 0x4288ef
        __asm _emit 0x72
        __asm _emit 0xa5
        lea eax, [ebp - 36h]
        cmp byte ptr [ebp - 36h], bl
        ; Exact mapped bytes 74 9D: je 0x4288ef
        __asm _emit 0x74
        __asm _emit 0x9d
        mov dl, byte ptr [eax + 1]
        cmp dl, bl
        ; Exact mapped bytes 74 96: je 0x4288ef
        __asm _emit 0x74
        __asm _emit 0x96
        mov ecx, dword ptr [ebp + 18h]
        mov cl, byte ptr [ecx]
        cmp cl, byte ptr [eax]
        ; Exact mapped bytes 72 08: jb 0x42896a
        __asm _emit 0x72
        __asm _emit 0x08
        cmp cl, dl
        ; Exact mapped bytes 0F 86 78 FF FF FF: jbe 0x4288e2
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        inc eax
        inc eax
        cmp byte ptr [eax], bl
        ; Exact mapped bytes 75 E2: jne 0x428952
        __asm _emit 0x75
        __asm _emit 0xe2
        ; Exact mapped bytes E9 7A FF FF FF: jmp 0x4288ef
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        push ebx
        push esi
        push dword ptr [ebp + 10h]
        push 9
        push dword ptr [ebp + 20h]
        ; Exact mapped bytes FF 15 90 C2 43 00: call dword ptr [0x43c290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp eax, ebx
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x428a60
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], ebx
        add eax, eax
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 60 65 FF FF: call 0x41ef00
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], esp
        mov eax, esp
        mov dword ptr [ebp - 24h], eax
        or dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB 16: jmp 0x4289c4
        __asm _emit 0xeb
        __asm _emit 0x16
        push 1
        pop eax
        ret
        mov esp, dword ptr [ebp - 18h]
        xor ebx, ebx
        mov dword ptr [ebp - 24h], ebx
        or dword ptr [ebp - 4], 0ffffffffh
        mov esi, dword ptr [ebp + 14h]
        push 1
        pop edi
        cmp dword ptr [ebp - 24h], ebx
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x428a60
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 1ch]
        push dword ptr [ebp - 24h]
        push esi
        push dword ptr [ebp + 10h]
        push edi
        push dword ptr [ebp + 20h]
        ; Exact mapped bytes 8B 35 90 C2 43 00: mov esi, dword ptr [0x43c290]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 79: je 0x428a60
        __asm _emit 0x74
        __asm _emit 0x79
        push ebx
        push ebx
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push 9
        push dword ptr [ebp + 20h]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov esi, eax
        mov dword ptr [ebp - 20h], esi
        cmp esi, ebx
        ; Exact mapped bytes 74 61: je 0x428a60
        __asm _emit 0x74
        __asm _emit 0x61
        mov dword ptr [ebp - 4], edi
        lea eax, [esi + esi]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 F1 64 FF FF: call 0x41ef00
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], esp
        mov edi, esp
        mov dword ptr [ebp - 28h], edi
        or dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB 12: jmp 0x428a2f
        __asm _emit 0xeb
        __asm _emit 0x12
        push 1
        pop eax
        ret
        mov esp, dword ptr [ebp - 18h]
        xor ebx, ebx
        xor edi, edi
        or dword ptr [ebp - 4], 0ffffffffh
        mov esi, dword ptr [ebp - 20h]
        cmp edi, ebx
        ; Exact mapped bytes 74 2D: je 0x428a60
        __asm _emit 0x74
        __asm _emit 0x2d
        push esi
        push edi
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push 1
        push dword ptr [ebp + 20h]
        ; Exact mapped bytes FF 15 90 C2 43 00: call dword ptr [0x43c290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x428a60
        __asm _emit 0x74
        __asm _emit 0x16
        push esi
        push edi
    }
}
