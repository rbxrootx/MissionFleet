// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BB5B0 .. +0x270 bytes.
extern "C" __declspec(naked) void FUN_587bb5b0_587BB5B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x587bb5d0
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 40 02 00 00: jmp 0x587bb810
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 14h], ecx
        push 24h
        push 0
        lea edx, [ebp - 28h]
        push edx
        ; Exact mapped bytes E8 2A 18 09 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 28h], 24h
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes 83 3D 94 5F 96 58 00: cmp dword ptr [0x58965f94], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 45 01 00 00: je 0x587bb751
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 05 30 5F 96 58: movzx eax, byte ptr [0x58965f30]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x587bb6d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 2]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x587bb6d5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        or eax, 10h
        or eax, 100h
        or eax, 10000h
        or eax, 8000h
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 8B 0D 08 1A 8D 58: mov ecx, dword ptr [0x588d1a08]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x1a
        __asm _emit 0x8d
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 8B 15 0C 1A 8D 58: mov edx, dword ptr [0x588d1a0c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x1a
        __asm _emit 0x8d
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes A1 10 1A 8D 58: mov eax, dword ptr [0x588d1a10]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x1a
        __asm _emit 0x8d
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 8B 0D 14 1A 8D 58: mov ecx, dword ptr [0x588d1a14]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x1a
        __asm _emit 0x8d
        __asm _emit 0x58
        mov dword ptr [ebp - 8], ecx
        push 0
        mov edx, dword ptr [ebp - 2ch]
        add edx, 18h
        push edx
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes 8B 0D 94 5F 96 58: mov ecx, dword ptr [0x58965f94]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes A1 94 5F 96 58: mov eax, dword ptr [0x58965f94]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 7D 07: jge 0x587bb696
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 7A 01 00 00: jmp 0x587bb810
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 74 34: je 0x587bb6d3
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 2ch]
        add eax, 1ch
        push eax
        push 588d1a28h
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 7D 11: jge 0x587bb6d3
        __asm _emit 0x7d
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 1ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 3D 01 00 00: jmp 0x587bb810
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 7A: jmp 0x587bb74f
        __asm _emit 0xeb
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 1ch], 0
        mov eax, dword ptr [ebp + 10h]
        or eax, 40h
        or eax, 80h
        or eax, 100h
        or eax, 10000h
        or eax, 8000h
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 8B 0D 58 1A 8D 58: mov ecx, dword ptr [0x588d1a58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x1a
        __asm _emit 0x8d
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 8B 15 5C 1A 8D 58: mov edx, dword ptr [0x588d1a5c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x1a
        __asm _emit 0x8d
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes A1 60 1A 8D 58: mov eax, dword ptr [0x588d1a60]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x1a
        __asm _emit 0x8d
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 8B 0D 64 1A 8D 58: mov ecx, dword ptr [0x588d1a64]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x1a
        __asm _emit 0x8d
        __asm _emit 0x58
        mov dword ptr [ebp - 8], ecx
        push 0
        mov edx, dword ptr [ebp - 2ch]
        add edx, 18h
        push edx
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes 8B 0D 94 5F 96 58: mov ecx, dword ptr [0x58965f94]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes A1 94 5F 96 58: mov eax, dword ptr [0x58965f94]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 7D 07: jge 0x587bb74f
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x587bb810
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 5D: jmp 0x587bb7ae
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 1ch], 0
        mov eax, dword ptr [ebp + 10h]
        or eax, 40h
        or eax, 80h
        or eax, 100h
        or eax, 10000h
        or eax, 8000h
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 83 3D 98 5F 96 58 00: cmp dword ptr [0x58965f98], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 2D: je 0x587bb7ae
        __asm _emit 0x74
        __asm _emit 0x2d
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 18h
        push ecx
        lea edx, [ebp - 28h]
        push edx
        ; Exact mapped bytes A1 98 5F 96 58: mov eax, dword ptr [0x58965f98]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 8B 15 98 5F 96 58: mov edx, dword ptr [0x58965f98]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ecx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 7D 04: jge 0x587bb7ae
        __asm _emit 0x7d
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 62: jmp 0x587bb810
        __asm _emit 0xeb
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 74 57: je 0x587bb80e
        __asm _emit 0x74
        __asm _emit 0x57
        push 0
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 2ch]
        add edx, 10h
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [eax]
        push edx
        mov ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        test eax, eax
        ; Exact mapped bytes 7C 27: jl 0x587bb80e
        __asm _emit 0x7c
        __asm _emit 0x27
        push 0
        push 0
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 14h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [ecx + 4ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 36 58 07 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
