// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411F40 .. +0x200 bytes.
extern "C" __declspec(naked) void FUN_00411f40_00411F40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a8h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0a8h]
        mov ecx, 2ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 18h], 0
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 1
        push 80000000h
        push 633f9ch
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4B 2E 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], -1
        ; Exact mapped bytes 74 71: je 0x41201f
        __asm _emit 0x74
        __asm _emit 0x71
        mov esi, esp
        push 0
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 C0 B7 68 00: call dword ptr [0x68b7c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2D 2E 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F BF 0D 84 03 67 00: movsx ecx, word ptr [0x670384]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x67
        __asm _emit 0x00
        add ecx, 0dh
        push ecx
        push 6702e8h
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 F4 A0 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa0
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 18h], eax
        mov esi, esp
        push 0
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E4 2D 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x2d
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D1 2D 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x2d
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA F5 FE FF: call 0x4015e1
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 8E E3 00 00 00: jle 0x412114
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x412114
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0eh
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 0ch]
        push ecx
        lea edx, [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 B1 32 05 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        push 28h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 18h]
        lea edx, [ecx + eax + 0eh]
        push edx
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 98 32 05 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        push 36h
        push 633e1ch
        ; Exact mapped bytes E8 9E E5 08 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xe5
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 2ah]
        sub ecx, 36h
        mov dword ptr [ebp - 5ch], ecx
        ; Exact mapped bytes 0F BF 15 84 03 67 00: movsx edx, word ptr [0x670384]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x67
        __asm _emit 0x00
        add edx, 28h
        push edx
        push 6702e8h
        mov eax, dword ptr [ebp - 5ch]
        add eax, 36h
        push eax
        ; Exact mapped bytes E8 34 A0 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xa0
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 58h], ecx
        push 0eh
        lea edx, [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        ; Exact mapped bytes E8 46 32 05 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        push 28h
        lea ecx, [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        add edx, 0eh
        push edx
        ; Exact mapped bytes E8 31 32 05 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 18h]
        lea eax, [edx + ecx + 36h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        add ecx, 36h
        push ecx
        ; Exact mapped bytes E8 13 32 05 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 36h]
        mov dword ptr [ebp - 0ch], ecx
        lea edx, [ebp - 58h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40cc0h]
        ; Exact mapped bytes E8 26 F6 FE FF: call 0x401735
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 1D FF FF FF: jmp 0x412031
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 12: je 0x41212c
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        ; Exact mapped bytes E8 80 A3 0B 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xa3
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        pop ebx
        add esp, 0a8h
        cmp ebp, esp
        ; Exact mapped bytes E8 B4 2C 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
