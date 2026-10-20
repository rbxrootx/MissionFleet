// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AA1C0 .. +0x45 bytes.
extern "C" __declspec(naked) void __endthreadex_004AA1C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 70 12 5D 00 00: cmp dword ptr [0x5d1270], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x4aa1d3
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes FF 15 70 12 5D 00: call dword ptr [0x5d1270]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 C8 8C 00 00: call 0x4b2ea0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0A: jne 0x4aa1eb
        __asm _emit 0x75
        __asm _emit 0x0a
        push 10h
        ; Exact mapped bytes E8 58 2B 00 00: call 0x4acd40
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 4C 8D 00 00: call 0x4b2f40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 AC 22 5E 00: call dword ptr [0x5e22ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
