// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004027D0 .. +0x1DA bytes.
extern "C" __declspec(naked) void FUN_004027d0_004027D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 5ch]
        mov ecx, 17h
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
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 0c0000000h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CF 25 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 0F 84 20 01 00 00: je 0x40294e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 14h], 0
        mov esi, esp
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 C0 B7 68 00: call dword ptr [0x68b7c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9D 25 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov esi, esp
        push 0
        lea eax, [ebp - 8]
        push eax
        push 3ch
        mov ecx, dword ptr [ebp - 4]
        add ecx, 108h
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 75 25 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 30 01 00 00: mov cx, word ptr [eax + 0x130]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x402924
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 32 01 00 00: mov ax, word ptr [edx + 0x132]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x402924
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 0D 84 80 65 00: movsx ecx, word ptr [0x658084]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x65
        __asm _emit 0x00
        add ecx, 1eh
        push ecx
        push 658010h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 13ch]
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 0D 98 0C 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 144h], edx
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        push ecx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FE 24 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 13ch]
        shl ecx, 2
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 144h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CE 24 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x402939
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 8], 0
        push 0
        push 0
        push 633084h
        ; Exact mapped bytes E8 A8 41 0F 00: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x41
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A4 24 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 44: jmp 0x402992
        __asm _emit 0xeb
        __asm _emit 0x44
        mov esi, esp
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 93 24 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 633064h
        ; Exact mapped bytes E8 A3 DC 09 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        push 10000h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        cmp esi, esp
        ; Exact mapped bytes E8 5E 24 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 5ch
        cmp ebp, esp
        ; Exact mapped bytes E8 4C 24 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
