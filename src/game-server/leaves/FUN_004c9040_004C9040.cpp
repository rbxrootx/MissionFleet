// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C9040 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_004c9040_004C9040() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 83 3D F8 F0 5D 00 02: cmp dword ptr [0x5df0f8], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 75 0D: jne 0x4c905f
        __asm _emit 0x75
        __asm _emit 0x0d
        push 5df0e0h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 7A: jmp 0x4c90d9
        __asm _emit 0xeb
        __asm _emit 0x7a
        ; Exact mapped bytes 83 3D F8 F0 5D 00 00: cmp dword ptr [0x5df0f8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 4A: jne 0x4c90b2
        __asm _emit 0x75
        __asm _emit 0x4a
        push 1
        push 5df0f8h
        ; Exact mapped bytes FF 15 E4 21 5E 00: call dword ptr [0x5e21e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 24: jne 0x4c90a2
        __asm _emit 0x75
        __asm _emit 0x24
        push 5df0e0h
        ; Exact mapped bytes FF 15 18 24 5E 00: call dword ptr [0x5e2418]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push 4c90e0h
        ; Exact mapped bytes E8 4D F8 FD FF: call 0x4a88e0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes C7 05 F8 F0 5D 00 02 00 00 00: mov dword ptr [0x5df0f8], 2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x4c90b2
        __asm _emit 0xeb
        __asm _emit 0x10
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 75 0A: jne 0x4c90b2
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 F8 F0 5D 00 02 00 00 00: mov dword ptr [0x5df0f8], 2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D F8 F0 5D 00 01: cmp dword ptr [0x5df0f8], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 0A: jne 0x4c90c5
        __asm _emit 0x75
        __asm _emit 0x0a
        push 1
        ; Exact mapped bytes FF 15 F0 23 5E 00: call dword ptr [0x5e23f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB ED: jmp 0x4c90b2
        __asm _emit 0xeb
        __asm _emit 0xed
        ; Exact mapped bytes 83 3D F8 F0 5D 00 02: cmp dword ptr [0x5df0f8], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 75 0B: jne 0x4c90d9
        __asm _emit 0x75
        __asm _emit 0x0b
        push 5df0e0h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
