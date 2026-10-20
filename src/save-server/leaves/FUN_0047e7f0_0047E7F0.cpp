// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047E7F0 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_0047e7f0_0047E7F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes A1 C4 75 68 00: mov eax, dword ptr [0x6875c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 41 6F FE FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        xor ecx, ecx
        cmp eax, 3
        sete cl
        ; Exact mapped bytes 89 0D C0 75 68 00: mov dword ptr [0x6875c0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C8 75 68 00: mov edx, dword ptr [0x6875c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 24 6F FE FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        xor ecx, ecx
        cmp eax, 3
        sete cl
        ; Exact mapped bytes 89 0D B8 75 68 00: mov dword ptr [0x6875b8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 B4 75 68 00 00 00 00 00: mov dword ptr [0x6875b4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C0 75 68 00 00: cmp dword ptr [0x6875c0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x47e849
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 2
        ; Exact mapped bytes EB 12: jmp 0x47e85b
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 8B 15 C4 75 68 00: mov edx, dword ptr [0x6875c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 3B 0A 00 00: call 0x47f290
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes A3 BC 75 68 00: mov dword ptr [0x6875bc], eax
        __asm _emit 0xa3
        __asm _emit 0xbc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push 1
        push 47e8b0h
        ; Exact mapped bytes FF 15 2C B8 68 00: call dword ptr [0x68b82c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D CC 75 68 00: mov ecx, dword ptr [0x6875cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        and ecx, 100h
        test ecx, ecx
        ; Exact mapped bytes 74 1C: je 0x47e89c
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 15 CC 75 68 00: mov edx, dword ptr [0x6875cc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        and edx, 200h
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x47e89c
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes A1 CC 75 68 00: mov eax, dword ptr [0x6875cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 7
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x47e8a6
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 CC 75 68 00 00 00 00 00: mov dword ptr [0x6875cc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
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
