// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BFFB0 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_004bffb0_004BFFB0() {
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
        ; Exact mapped bytes 74 1E: je 0x4bffe8
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
        ; Exact mapped bytes E8 14 52 FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x4bffef
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 66 8B 45 0C: mov ax, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 33 00 00 00: call 0x4c0030
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0C: je 0x4c0015
        __asm _emit 0x74
        __asm _emit 0x0c
        push 13h
        ; Exact mapped bytes E8 80 52 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB 0B: jmp 0x4c0020
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
