// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419C30 .. +0x1E5 bytes.
extern "C" __declspec(naked) void FUN_00419c30_00419C30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 9d0h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 9d0h]
        mov ecx, 274h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 974h], 0
        ; Exact mapped bytes EB 0F: jmp 0x419c75
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 974h]
        add eax, 1
        mov dword ptr [ebp - 974h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 110h]
        mov eax, dword ptr [ebp - 974h]
        cmp eax, dword ptr [edx + 13ch]
        ; Exact mapped bytes 0F 8D 6C 01 00 00: jge 0x419dfc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 110h]
        mov eax, dword ptr [edx + 144h]
        mov ecx, dword ptr [ebp - 974h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 42 01 00 00: je 0x419df7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 900h
        push 0
        lea eax, [ebp - 964h]
        push eax
        ; Exact mapped bytes E8 F8 BB 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        lea ecx, [ebp - 96ch]
        push ecx
        ; Exact mapped bytes E8 E5 BB 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 900h
        lea edx, [ebp - 964h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 A2 75 FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5D: je 0x419d5d
        __asm _emit 0x74
        __asm _emit 0x5d
        cmp dword ptr [ebp - 964h], 0
        ; Exact mapped bytes 75 54: jne 0x419d5d
        __asm _emit 0x75
        __asm _emit 0x54
        cmp dword ptr [ebp - 960h], 0
        ; Exact mapped bytes 74 3A: je 0x419d4c
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 968h], edx
        lea eax, [ebp - 96ch]
        push eax
        lea ecx, [ebp - 960h]
        push ecx
        lea ecx, [ebp - 984h]
        ; Exact mapped bytes E8 FB 7A FE FF: call 0x40182f
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 990h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 128h
        ; Exact mapped bytes E8 F6 73 FE FF: call 0x401140
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 11: jmp 0x419d5d
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 8]
        push eax
        push 63418ch
        ; Exact mapped bytes E8 BB 68 08 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 8
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 80000000h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 11ch
        ; Exact mapped bytes E8 2B B0 10 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xb0
        __asm _emit 0x10
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 63 B0 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 978h], eax
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 978h]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3F B0 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 970h]
        push eax
        push 5ch
        lea ecx, [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 978h]
        push edx
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1A B0 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov esi, esp
        mov ecx, dword ptr [ebp - 978h]
        push ecx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FE AF 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xaf
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 B4 FE FF FF: jmp 0x419cab
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6A FE FF FF: jmp 0x419c66
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 9d0h
        cmp ebp, esp
        ; Exact mapped bytes E8 DF AF 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xaf
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
