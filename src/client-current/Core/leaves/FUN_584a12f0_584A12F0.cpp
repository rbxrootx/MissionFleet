// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A12F0 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_584a12f0_584A12F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 B0 5F FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 85 61 FE FF: call 0x58487490
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
