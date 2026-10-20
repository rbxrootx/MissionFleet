// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861D6B0 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_5861d6b0_5861D6B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, 1d4ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 28 0D 00 00: mov word ptr [ecx + 0xd28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF F5 F5 FF: call 0x5857ccc0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf5
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
