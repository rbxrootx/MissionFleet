// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425EA0 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_00425ea0_00425EA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 960h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 960h]
        mov ecx, 258h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 CC B5 FD FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xb5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        add eax, 8
        push eax
        lea ecx, [ebp - 918h]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 128h
        ; Exact mapped bytes E8 3E B4 FD FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 920h]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 128h
        ; Exact mapped bytes E8 5D BB FD FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xbb
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 13 BA FD FF: call 0x401924
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x425f21
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 78: jmp 0x425f99
        __asm _emit 0xeb
        __asm _emit 0x78
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 AE B1 FD FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ebp - 10h], eax
        push 900h
        push 0
        lea ecx, [ebp - 910h]
        push ecx
        ; Exact mapped bytes E8 7E F9 03 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 900h
        lea edx, [ebp - 910h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 3B B3 FD FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x425f97
        __asm _emit 0x74
        __asm _emit 0x30
        cmp dword ptr [ebp - 910h], 0
        ; Exact mapped bytes 75 23: jne 0x425f93
        __asm _emit 0x75
        __asm _emit 0x23
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        cmp eax, dword ptr [ebp - 90ch]
        ; Exact mapped bytes 75 13: jne 0x425f91
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 850h]
        mov dword ptr [ecx + 48h], edx
        mov eax, 1
        ; Exact mapped bytes EB 08: jmp 0x425f99
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB 04: jmp 0x425f97
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x425f99
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 960h
        cmp ebp, esp
        ; Exact mapped bytes E8 47 EE 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xee
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
