// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5854DAE0 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_5854dae0_5854DAE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2D 00 00 00: call 0x5854db20
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 74 14: je 0x5854db0c
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D E9 2D 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes FF 15 68 44 89 58: call dword ptr [0x58894468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
