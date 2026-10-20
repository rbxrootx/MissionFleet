// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00404D30 .. +0x1CE bytes.
extern "C" __declspec(naked) void FUN_00404d30_00404D30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b4h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0b4h]
        mov ecx, 2dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 64h], 0
        mov dword ptr [ebp - 68h], 0ffffffffh
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 77 00 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        div dword ptr [ecx + 13ch]
        mov dword ptr [ebp - 6ch], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 144h]
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 70h], edx
        cmp dword ptr [ebp - 70h], -1
        ; Exact mapped bytes 0F 84 42 01 00 00: je 0x404ee5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 1
        push 0c0000000h
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
        ; Exact mapped bytes E8 25 00 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        cmp dword ptr [ebp - 74h], -1
        ; Exact mapped bytes 74 77: je 0x404e4b
        __asm _emit 0x74
        __asm _emit 0x77
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 7E 71: jle 0x404e4b
        __asm _emit 0x7e
        __asm _emit 0x71
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FB FF 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 64h]
        push eax
        push 5ch
        lea ecx, [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DC FF 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        push -1
        lea ecx, [ebp - 60h]
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
        ; Exact mapped bytes E8 BA FF 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 08: jne 0x404e43
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 68h], edx
        ; Exact mapped bytes EB 08: jmp 0x404e4b
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 89: jmp 0x404dd4
        __asm _emit 0xeb
        __asm _emit 0x89
        mov dword ptr [ebp - 14h], 0ffffffffh
        mov dword ptr [ebp - 10h], 0ffffffffh
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7C FF 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 64h]
        push eax
        push 5ch
        lea ecx, [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5D FF 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 42 FF 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 64h]
        push edx
        push 5ch
        lea eax, [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 23 FF 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 74h]
        push edx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 10 FF 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 70h]
        ; Exact mapped bytes EB 03: jmp 0x404ee8
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        add esp, 0b4h
        cmp ebp, esp
        ; Exact mapped bytes E8 F8 FE 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfe
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
