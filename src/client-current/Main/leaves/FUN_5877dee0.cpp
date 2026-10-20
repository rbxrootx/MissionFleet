// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877DEE0 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_5877dee0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 58h]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x5877def6
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes E8 E1 C6 FF FF: call 0x5877a5d0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 58h], 0
        mov ecx, esi
        ; Exact mapped bytes E8 23 4D 18 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x4d
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, esi
        pop esi
        ; Exact mapped bytes E9 6B 4D 18 00: jmp 0x58902c70
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x4d
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
