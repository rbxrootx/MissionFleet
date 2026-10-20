// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041DA80 .. +0x180 bytes.
extern "C" __declspec(naked) void FUN_0041da80_0041DA80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 78h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 78h]
        mov ecx, 1eh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov esi, esp
        push 0
        push 80h
        push 2
        push 0
        push 0
        push 40000000h
        push 633f9ch
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2D 73 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40cc0h]
        ; Exact mapped bytes E8 15 3A FE FF: call 0x4014ec
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40cc0h]
        ; Exact mapped bytes E8 01 3A FE FF: call 0x4014ec
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 0F 84 F5 00 00 00: je 0x41dbed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x41db0a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40cc0h]
        ; Exact mapped bytes E8 99 3A FE FF: call 0x4015b4
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 7D 4D: jge 0x41db6d
        __asm _emit 0x7d
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 04 3B FE FF: call 0x40162c
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], ecx
        push 0eh
        mov edx, dword ptr [ebp - 2ch]
        push edx
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 C4 77 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        push 0
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 26h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 90 72 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CC 3C FE FF: call 0x401834
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 94: jmp 0x41db01
        __asm _emit 0xeb
        __asm _emit 0x94
        mov esi, esp
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 70 72 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        cmp dword ptr [ecx + 40cc8h], 0
        ; Exact mapped bytes 74 4C: je 0x41dbdb
        __asm _emit 0x74
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40cc8h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 1A: je 0x41dbc4
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 30h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 31 72 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x41dbcb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        mov dword ptr [ecx + 40cc8h], 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 92 34 FE FF: call 0x401078
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x41dbef
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 78h
        cmp ebp, esp
        ; Exact mapped bytes E8 F4 71 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
