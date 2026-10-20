// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10013680 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_10013680_10013680() {
    __asm {
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 1016d28bh
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [esp + 14h]
        push esi
        mov esi, ecx
        test ebx, ebx
        ; Exact mapped bytes 75 0C: jne 0x100136ad
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 8]
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x100136ad
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [esi + 4], ebx
        ; Exact mapped bytes EB 76: jmp 0x10013723
        __asm _emit 0xeb
        __asm _emit 0x76
        mov edx, dword ptr [esi + 8]
        xor eax, eax
        test edx, edx
        ; Exact mapped bytes 74 78: je 0x1001372e
        __asm _emit 0x74
        __asm _emit 0x78
        mov ecx, dword ptr [esi + 10h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 70: je 0x1001372e
        __asm _emit 0x74
        __asm _emit 0x70
        inc eax
        add ecx, 4
        cmp eax, edx
        ; Exact mapped bytes 75 F3: jne 0x100136b9
        __asm _emit 0x75
        __asm _emit 0xf3
        cmp ebx, 1
        ; Exact mapped bytes 75 07: jne 0x100136d2
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 2E 01 00 00: call 0x10013800
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10h]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x100136e9
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 A5 90 15 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x90
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 10h], 0
        push 198h
        ; Exact mapped bytes E8 AD 90 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x90
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        test eax, eax
        mov dword ptr [esp + 10h], 0
        ; Exact mapped bytes 74 10: je 0x10013716
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        push 1017f3d0h
        mov ecx, eax
        ; Exact mapped bytes E8 AC C3 0E 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc3
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10013718
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esp + 10h], 0ffffffffh
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes 8B 0D EC 56 1C 10: mov ecx, dword ptr [0x101c56ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 02 D3 01 00: call 0x10030a30
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 8]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
