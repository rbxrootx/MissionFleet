// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C9F80 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_004c9f80_004C9F80() {
    __asm {
        push esi
        push 5e04c0h
        ; Exact mapped bytes FF 15 18 24 5E 00: call dword ptr [0x5e2418]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push 5e04c0h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push 5e04c0h
        ; Exact mapped bytes FF 05 E4 04 5E 00: inc dword ptr [0x5e04e4]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D E4 04 5E 00 01: cmp dword ptr [0x5e04e4], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 18: jne 0x4c9fc9
        __asm _emit 0x75
        __asm _emit 0x18
        mov esi, dword ptr [esp + 8]
        push 0
        push 1
        push esi
        ; Exact mapped bytes E8 D1 2F 00 00: call 0x4ccf90
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E8 49 0B 00 00: call 0x4cab10
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 04: jmp 0x4c9fcd
        __asm _emit 0xeb
        __asm _emit 0x04
        mov esi, dword ptr [esp + 8]
        ; Exact mapped bytes E8 2E 02 00 00: call 0x4ca200
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x4c9fdc
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 D4 00 00 00: call 0x4ca0b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 E0 04 5E 00: mov eax, dword ptr [0x5e04e0]
        __asm _emit 0xa1
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
