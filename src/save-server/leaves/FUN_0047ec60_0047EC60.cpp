// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047EC60 .. +0x11F bytes.
extern "C" __declspec(naked) void FUN_0047ec60_0047EC60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A1 05 00 00: call 0x47f210
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        push 78h
        lea ecx, [ebp - 78h]
        push ecx
        ; Exact mapped bytes 8B 15 C0 75 68 00: mov edx, dword ptr [0x6875c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        neg edx
        sbb edx, edx
        and edx, 0fffff002h
        add edx, 1001h
        push edx
        mov eax, dword ptr [ebp - 7ch]
        push eax
        ; Exact mapped bytes FF 15 D4 75 68 00: call dword ptr [0x6875d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x47ecb4
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes C7 05 CC 75 68 00 00 00 00 00: mov dword ptr [0x6875cc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x47ed79
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 78h]
        push ecx
        ; Exact mapped bytes 8B 15 C4 75 68 00: mov edx, dword ptr [0x6875c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 7C 75 FF FF: call 0x476240
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 3E: jne 0x47ed09
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes 83 3D C0 75 68 00 00: cmp dword ptr [0x6875c0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 12: jne 0x47ece6
        __asm _emit 0x75
        __asm _emit 0x12
        push 1
        mov eax, dword ptr [ebp - 7ch]
        push eax
        ; Exact mapped bytes E8 C1 02 00 00: call 0x47efa0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x47ed07
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 0D D0 75 68 00: mov dword ptr [0x6875d0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 D0 75 68 00: mov edx, dword ptr [0x6875d0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 B4 75 68 00: mov dword ptr [0x6875b4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 CC 75 68 00: mov eax, dword ptr [0x6875cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        or al, 4
        ; Exact mapped bytes A3 CC 75 68 00: mov dword ptr [0x6875cc], eax
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 63: jmp 0x47ed6c
        __asm _emit 0xeb
        __asm _emit 0x63
        ; Exact mapped bytes 83 3D C0 75 68 00 00: cmp dword ptr [0x6875c0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 5A: jne 0x47ed6c
        __asm _emit 0x75
        __asm _emit 0x5a
        ; Exact mapped bytes 83 3D BC 75 68 00 00: cmp dword ptr [0x6875bc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 51: je 0x47ed6c
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D BC 75 68 00: mov ecx, dword ptr [0x6875bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        lea edx, [ebp - 78h]
        push edx
        ; Exact mapped bytes A1 C4 75 68 00: mov eax, dword ptr [0x6875c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 5F 30 00 00: call 0x481d90
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x47ed6c
        __asm _emit 0x75
        __asm _emit 0x34
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        push ecx
        ; Exact mapped bytes E8 5D 02 00 00: call 0x47efa0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x47ed6c
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 15 D0 75 68 00: mov dword ptr [0x6875d0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 75 68 00: mov eax, dword ptr [0x6875d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 B4 75 68 00: mov dword ptr [0x6875b4], eax
        __asm _emit 0xa3
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D CC 75 68 00: mov ecx, dword ptr [0x6875cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        or ecx, 4
        ; Exact mapped bytes 89 0D CC 75 68 00: mov dword ptr [0x6875cc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 CC 75 68 00: mov eax, dword ptr [0x6875cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 4
        neg eax
        sbb eax, eax
        inc eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
