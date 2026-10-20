// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055EA6F .. +0x14F bytes.
extern "C" __declspec(naked) void FUN_0055ea6f_0055EA6F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 1c1h
        push 5cff18h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 D2 C6 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xc6
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4ch], 4
        ; Exact mapped bytes 74 19: je 0x55eab0
        __asm _emit 0x74
        __asm _emit 0x19
        push 4
        push 4
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 50 74: call dword ptr [eax + 0x74]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4ch], 4
        push 1cbh
        push 5cff18h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 54h]
        push eax
        ; Exact mapped bytes E8 9A C6 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc6
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 2D 03 F9 FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 58h], eax
        push 0
        push 2000000h
        push 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 E1 03 F9 FF: call 0x4eeecc
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0xf9
        __asm _emit 0xff
        push 58e460h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes E8 8A D3 FE FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x55eb19
        __asm _emit 0x75
        __asm _emit 0x14
        push 1d2h
        push 5cff18h
        ; Exact mapped bytes E8 EC 5E FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55eb19
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x55eaff
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x55eb3a
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 74 2B: je 0x55eb83
        __asm _emit 0x74
        __asm _emit 0x2b
        push 1deh
        push 5cff18h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 EF C5 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ecx + 68h], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 74 2B: je 0x55ebb7
        __asm _emit 0x74
        __asm _emit 0x2b
        push 1e4h
        push 5cff18h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 BB C5 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ecx + 68h], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
