// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00406AD0 .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_00406ad0_00406AD0() {
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
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 144h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x406bf3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 3
        push 80000000h
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
        ; Exact mapped bytes E8 93 E2 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xe2
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], -1
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x406bee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 74 6B: je 0x406bdb
        __asm _emit 0x74
        __asm _emit 0x6b
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 65 E2 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xe2
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 70h]
        push eax
        push 5ch
        lea ecx, [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 46 E2 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xe2
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        push -1
        lea ecx, [ebp - 6ch]
        push ecx
        push 1
        push 800h
        ; Exact mapped bytes FF 15 DC B7 68 00: call dword ptr [0x68b7dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 24 E2 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe2
        __asm _emit 0x05
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 02: jne 0x406bd3
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 08: jmp 0x406bdb
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 8F: jmp 0x406b6a
        __asm _emit 0xeb
        __asm _emit 0x8f
        mov esi, esp
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 02 E2 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe2
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 03: jmp 0x406bf6
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        add esp, 0b0h
        cmp ebp, esp
        ; Exact mapped bytes E8 EA E1 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe1
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
