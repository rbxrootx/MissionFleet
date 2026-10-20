// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C46A0 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_004c46a0_004C46A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
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
        ; Exact mapped bytes 74 1E: je 0x4c46d8
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
        ; Exact mapped bytes E8 24 0B FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x4c46df
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 30 00 00 00: call 0x4c4720
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0C: je 0x4c4708
        __asm _emit 0x74
        __asm _emit 0x0c
        push 13h
        ; Exact mapped bytes E8 8D 0B FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB 0B: jmp 0x4c4713
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
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
