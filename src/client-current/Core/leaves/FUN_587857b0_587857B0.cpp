// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587857B0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_587857b0_587857B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 21 00 00 00: call 0x587857e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes E8 E3 FE FF FF: call 0x587856b0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
