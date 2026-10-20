// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051A100 .. +0xDA bytes.
extern "C" __declspec(naked) void _OnHelp_CWnd__QAEXXZ_0051A100() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes FF 15 1C 27 5E 00: call dword ptr [0x5e271c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 2A: je 0x51a142
        __asm _emit 0x74
        __asm _emit 0x2a
        push 0
        push 0
        push 365h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x51a134
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x51a1d6
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 6C AA FD FF: call 0x4f4ba9
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB D0: jmp 0x51a112
        __asm _emit 0xeb
        __asm _emit 0xd0
        ; Exact mapped bytes FF 15 14 27 5E 00: call dword ptr [0x5e2714]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 27: je 0x51a178
        __asm _emit 0x74
        __asm _emit 0x27
        push 0
        push 0
        push 365h
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x51a16a
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 6C: jmp 0x51a1d6
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 36 AA FD FF: call 0x4f4ba9
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB D3: jmp 0x51a14b
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8E AA FD FF: call 0x4f4c0e
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C1 19 02 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 DC 26 5E 00: call dword ptr [0x5e26dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 27: je 0x51a1c2
        __asm _emit 0x74
        __asm _emit 0x27
        push 0
        push 0
        push 365h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x51a1b4
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 22: jmp 0x51a1d6
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 EC A9 FD FF: call 0x4f4ba9
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xa9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB D3: jmp 0x51a195
        __asm _emit 0xeb
        __asm _emit 0xd3
        push 0
        push 0e147h
        push 111h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 03 1A 02 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
