// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004293F0 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_004293f0_004293F0() {
    __asm {
        push esi
        push 4513e0h
        ; Exact mapped bytes FF 15 C4 C1 43 00: call dword ptr [0x43c1c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push 4513e0h
        ; Exact mapped bytes FF 15 7C C1 43 00: call dword ptr [0x43c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push 4513e0h
        ; Exact mapped bytes FF 05 04 14 45 00: inc dword ptr [0x451404]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 04 14 45 00 01: cmp dword ptr [0x451404], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 18: jne 0x429439
        __asm _emit 0x75
        __asm _emit 0x18
        mov esi, dword ptr [esp + 8]
        push 0
        push 1
        push esi
        ; Exact mapped bytes E8 C1 2E 00 00: call 0x42c2f0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E8 89 0A 00 00: call 0x429ec0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 04: jmp 0x42943d
        __asm _emit 0xeb
        __asm _emit 0x04
        mov esi, dword ptr [esp + 8]
        ; Exact mapped bytes E8 2E 02 00 00: call 0x429670
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x42944c
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 D4 00 00 00: call 0x429520
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 00 14 45 00: mov eax, dword ptr [0x451400]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
