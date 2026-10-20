// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C3CB0 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_004c3cb0_004C3CB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes A1 B0 F0 5D 00: mov eax, dword ptr [0x5df0b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 11 57 FE FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        xor ecx, ecx
        cmp eax, 3
        sete cl
        ; Exact mapped bytes 89 0D AC F0 5D 00: mov dword ptr [0x5df0ac], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D AC F0 5D 00 00: cmp dword ptr [0x5df0ac], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x4c3ce2
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 2
        ; Exact mapped bytes EB 12: jmp 0x4c3cf4
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 8B 15 B0 F0 5D 00: mov edx, dword ptr [0x5df0b0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 72 06 00 00: call 0x4c4360
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes A3 A8 F0 5D 00: mov dword ptr [0x5df0a8], eax
        __asm _emit 0xa3
        __asm _emit 0xa8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push 1
        push 4c3d30h
        ; Exact mapped bytes FF 15 1C 22 5E 00: call dword ptr [0x5e221c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B8 F0 5D 00: mov ecx, dword ptr [0x5df0b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 75 0A: jne 0x4c3d20
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 B8 F0 5D 00 00 00 00 00: mov dword ptr [0x5df0b8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
