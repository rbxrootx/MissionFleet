// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B84B0 .. +0xAA bytes.
extern "C" __declspec(naked) void __close_lk_004B84B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 02 92 00 00: call 0x4c16c0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp eax, -1
        ; Exact mapped bytes 74 3D: je 0x4b8503
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 74 06: je 0x4b84d2
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 1A: jne 0x4b84ec
        __asm _emit 0x75
        __asm _emit 0x1a
        push 1
        ; Exact mapped bytes E8 E7 91 00 00: call 0x4c16c0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        push 2
        ; Exact mapped bytes E8 DB 91 00 00: call 0x4c16c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp esi, eax
        ; Exact mapped bytes 74 17: je 0x4b8503
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 CB 91 00 00: call 0x4c16c0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4b850c
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4b8515
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 C2 90 00 00: call 0x4c15e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 5df120h]
        mov byte ptr [edx + ecx + 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 11: je 0x4b8553
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 85 8C FF FF: call 0x4b11d0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x4b8555
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
