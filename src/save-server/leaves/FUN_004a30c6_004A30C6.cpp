// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A30C6 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_004a30c6_004A30C6() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D E4 6C 68 00 00: cmp dword ptr [0x686ce4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x4a30f2
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 E4 6C 68 00: call dword ptr [0x686ce4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4a30f2
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 2F: jmp 0x4a3121
        __asm _emit 0xeb
        __asm _emit 0x2f
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 74 09: je 0x4a3101
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 83 3D DC 6C 68 00 00: cmp dword ptr [0x686cdc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x4a3105
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1C: jmp 0x4a3121
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, 686cd8h
        ; Exact mapped bytes E8 2F 57 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x57
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 1
        pop ebp
        ret
    }
}
