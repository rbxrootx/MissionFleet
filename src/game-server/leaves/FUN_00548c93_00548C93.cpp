// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00548C93 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_00548c93_00548C93() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 48 EB 5D 00 00: cmp dword ptr [0x5deb48], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 16: je 0x548cb5
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes A1 48 EB 5D 00: mov eax, dword ptr [0x5deb48]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes A3 48 EB 5D 00: mov dword ptr [0x5deb48], eax
        __asm _emit 0xa3
        __asm _emit 0x48
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 48 EB 5D 00 00: cmp dword ptr [0x5deb48], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 20: jne 0x548cd5
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 83 3D 4C EB 5D 00 00: cmp dword ptr [0x5deb4c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x548cd5
        __asm _emit 0x74
        __asm _emit 0x17
        push 0
        ; Exact mapped bytes 8B 0D 4C EB 5D 00: mov ecx, dword ptr [0x5deb4c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 75 01 00 00: call 0x548e40
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 4C EB 5D 00 00 00 00 00: mov dword ptr [0x5deb4c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebp
        ret
    }
}
