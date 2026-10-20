// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00406320 .. +0x22B bytes.
extern "C" __declspec(naked) void FUN_00406320_00406320() {
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
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        mov eax, ecx
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 13ch]
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
        ; Exact mapped bytes E8 70 EA 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xea
        __asm _emit 0x05
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
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 3
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
        ; Exact mapped bytes E8 14 EA 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], -1
        ; Exact mapped bytes 0F 84 49 01 00 00: je 0x406532
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 134h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 134h], edx
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
        ; Exact mapped bytes E8 D9 E9 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe9
        __asm _emit 0x05
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
        ; Exact mapped bytes E8 B7 E9 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 21: je 0x406460
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
        ; Exact mapped bytes E8 90 E9 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 144h]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + edx*4], -1
        ; Exact mapped bytes 74 49: je 0x4064bb
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
        ; Exact mapped bytes E8 54 E9 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe9
        __asm _emit 0x05
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
        ; Exact mapped bytes E8 35 E9 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe9
        __asm _emit 0x05
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
        ; Exact mapped bytes E8 01 E9 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xe9
        __asm _emit 0x05
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
        ; Exact mapped bytes E8 D6 E8 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xe8
        __asm _emit 0x05
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
        ; Exact mapped bytes E8 C3 E8 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 70h]
        ; Exact mapped bytes EB 03: jmp 0x406535
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        add esp, 0b0h
        cmp ebp, esp
        ; Exact mapped bytes E8 AB E8 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
