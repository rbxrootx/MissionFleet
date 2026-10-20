// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00528200 .. +0x113 bytes.
extern "C" __declspec(naked) void FUN_00528200_00528200() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57dd42h
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
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F7 A4 01 00: call 0x542720
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 8
        ; Exact mapped bytes E8 F7 D3 00 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax], 585e4ch
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 2D EB 00 00: call 0x536d79
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x528264
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes E8 C9 F5 01 00: call 0x547827
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 74 2A: je 0x52828e
        __asm _emit 0x74
        __asm _emit 0x2a
        push 7914h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 EB EC 00 00: call 0x536f5c
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x528286
        __asm _emit 0x75
        __asm _emit 0x11
        push 2eh
        push 5c8f88h
        ; Exact mapped bytes E8 7F C7 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x528286
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x528264
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes EB 28: jmp 0x5282b6
        __asm _emit 0xeb
        __asm _emit 0x28
        push 7913h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 C1 EC 00 00: call 0x536f5c
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5282b0
        __asm _emit 0x75
        __asm _emit 0x11
        push 30h
        push 5c8f88h
        ; Exact mapped bytes E8 55 C7 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5282b0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x52828e
        __asm _emit 0x75
        __asm _emit 0xd8
        lea eax, [ebp - 2ch]
        push eax
        push 18h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 08 E5 00 00: call 0x5367cc
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        cdq
        mov ecx, 3
        idiv ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [edx + 8], eax
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + 0ch], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 AE BA FD FF: call 0x503d94
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [edx + 4], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 A0 EA 00 00: call 0x536d98
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
