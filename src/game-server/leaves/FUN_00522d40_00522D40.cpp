// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00522D40 .. +0x120 bytes.
extern "C" __declspec(naked) void FUN_00522d40_00522D40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 54h], ecx
        push 0
        push 3ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 FD D0 FA FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xd0
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x522d71
        __asm _emit 0x75
        __asm _emit 0x14
        push 108h
        push 5c7638h
        ; Exact mapped bytes E8 94 1C 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x522d71
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x522d4c
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 41: je 0x522dbe
        __asm _emit 0x74
        __asm _emit 0x41
        push 10ch
        push 5c7638h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 D0 83 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x522dad
        __asm _emit 0x75
        __asm _emit 0x14
        push 10dh
        push 5c7638h
        ; Exact mapped bytes E8 58 1C 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x522dad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x522d90
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 0B: jmp 0x522dc9
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 0
        ; Exact mapped bytes FF 15 6C 27 5E 00: call dword ptr [0x5e276c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov esi, dword ptr [ebp + 8]
        mov ecx, 0fh
        lea edi, [ebp - 3ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push 5ah
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes FF 15 E4 1F 5E 00: call dword ptr [0x5e1fe4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4ch]
        cdq
        mov ecx, 2d0h
        idiv ecx
        mov dword ptr [ebp - 4ch], eax
        push 1
        lea edx, [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes FF 15 10 1F 5E 00: call dword ptr [0x5e1f10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], 0
        mov dword ptr [ebp - 44h], 0
        push 1
        lea ecx, [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes FF 15 10 1F 5E 00: call dword ptr [0x5e1f10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        sub eax, dword ptr [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 BF DB F8 FF: call 0x4b09f0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xdb
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        neg eax
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 0C: jne 0x522e4b
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        push 0
        ; Exact mapped bytes FF 15 64 27 5E 00: call dword ptr [0x5e2764]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 FF 3D 01 00: call 0x536c56
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
