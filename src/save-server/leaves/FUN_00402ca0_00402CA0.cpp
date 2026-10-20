// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00402CA0 .. +0x27F bytes.
extern "C" __declspec(naked) void FUN_00402ca0_00402CA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b0h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0b0h]
        mov ecx, 2ch
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 E4 FF FF: call 0x401154
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 74 08: je 0x402ceb
        __asm _emit 0x74
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 1E 02 00 00: jmp 0x402f09
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 ED 20 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        div dword ptr [ecx + 13ch]
        mov dword ptr [ebp - 8], edx
        mov esi, esp
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 64h]
        push eax
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C8 20 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0ffffffffh
        mov dword ptr [ebp - 14h], 0ffffffffh
        mov dword ptr [ebp - 10h], 0ffffffffh
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 144h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 20h], 0
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 40000000h
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        push eax
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 65 20 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], -1
        ; Exact mapped bytes 0F 84 6E 01 00 00: je 0x402f06
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 134h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 134h], edx
        mov esi, esp
        push 0
        lea ecx, [ebp - 68h]
        push ecx
        push 3ch
        mov edx, dword ptr [ebp - 4]
        add edx, 108h
        push edx
        mov eax, dword ptr [ebp - 6ch]
        push eax
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1E 20 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 2
        push 0
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 05 20 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], eax
        mov esi, esp
        push 0
        lea edx, [ebp - 68h]
        push edx
        push 5ch
        lea eax, [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E3 1F 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 21: je 0x402e34
        __asm _emit 0x74
        __asm _emit 0x21
        mov esi, esp
        push 0
        lea edx, [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 6ch]
        push edx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BC 1F 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 144h]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + edx*4], -1
        ; Exact mapped bytes 74 49: je 0x402e8f
        __asm _emit 0x74
        __asm _emit 0x49
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 144h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        add eax, 54h
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 80 1F 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 68h]
        push edx
        push 4
        lea eax, [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 61 1F 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 144h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [eax + ecx*4], edx
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax*4 + 3ch]
        push ecx
        mov edx, dword ptr [ebp - 6ch]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2D 1F 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 68h]
        push eax
        push 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 144h]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [edx + eax*4]
        push ecx
        mov edx, dword ptr [ebp - 6ch]
        push edx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 02 1F 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 6ch]
        push eax
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 EF 1E 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x1e
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 70h]
        ; Exact mapped bytes EB 03: jmp 0x402f09
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        add esp, 0b0h
        cmp ebp, esp
        ; Exact mapped bytes E8 D7 1E 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x1e
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
