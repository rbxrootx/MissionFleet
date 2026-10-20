// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BB940 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_004bb940_004BB940() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 14 F0 5D 00 00: cmp dword ptr [0x5df014], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1A: jne 0x4bb967
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp + 8], 61h
        ; Exact mapped bytes 7C 0F: jl 0x4bb962
        __asm _emit 0x7c
        __asm _emit 0x0f
        cmp dword ptr [ebp + 8], 7ah
        ; Exact mapped bytes 7F 09: jg 0x4bb962
        __asm _emit 0x7f
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        sub eax, 20h
        mov dword ptr [ebp + 8], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 68: jmp 0x4bb9cf
        __asm _emit 0xeb
        __asm _emit 0x68
        push 5df110h
        ; Exact mapped bytes FF 15 E8 23 5E 00: call dword ptr [0x5e23e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 0C F1 5D 00 00: cmp dword ptr [0x5df10c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1E: je 0x4bb999
        __asm _emit 0x74
        __asm _emit 0x1e
        push 5df110h
        ; Exact mapped bytes FF 15 E4 23 5E 00: call dword ptr [0x5e23e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push 13h
        ; Exact mapped bytes E8 63 98 FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x4bb9a0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 37 00 00 00: call 0x4bb9e0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0C: je 0x4bb9c1
        __asm _emit 0x74
        __asm _emit 0x0c
        push 13h
        ; Exact mapped bytes E8 D4 98 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB 0B: jmp 0x4bb9cc
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 5df110h
        ; Exact mapped bytes FF 15 E4 23 5E 00: call dword ptr [0x5e23e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
