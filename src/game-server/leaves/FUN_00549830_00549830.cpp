// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00549830 .. +0xED bytes.
extern "C" __declspec(naked) void FUN_00549830_00549830() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 11ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 DE 6B F6 FF: call 0x4b0420
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x6b
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, eax
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x549906
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 F9 2E F5 FF: call 0x49c770
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x2e
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 11ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 80000000h
        ; Exact mapped bytes FF 15 18 1E 5E 00: call dword ptr [0x5e1e18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x549899
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 6D: jmp 0x549906
        __asm _emit 0xeb
        __asm _emit 0x6d
        mov dword ptr [ebp - 0ch], 105h
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        lea eax, [ebp - 118h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 11ch]
        push ecx
        ; Exact mapped bytes FF 15 1C 1E 5E 00: call dword ptr [0x5e1e1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5498cc
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 1
        mov edx, dword ptr [ebp - 11ch]
        push edx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 02: je 0x5498e1
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 25: jmp 0x549906
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        push eax
        push 80000000h
        ; Exact mapped bytes FF 15 14 1E 5E 00: call dword ptr [0x5e1e14]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        push 5ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 95 FD EE FF: call 0x439690
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 54 FF FF FF: jmp 0x54985a
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 71 13 F6 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x13
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
