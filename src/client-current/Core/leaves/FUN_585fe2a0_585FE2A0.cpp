// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585FE2A0 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_585fe2a0_585FE2A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 6e4h
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 D8 FF FF: call 0x585fbb90
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        push 1c8h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 6e4h
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E 09 F8 FF: call 0x5857ec00
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x09
        __asm _emit 0xf8
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
