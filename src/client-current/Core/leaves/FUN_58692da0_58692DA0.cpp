// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58692DA0 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58692da0_58692DA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1F C1 FE FF: call 0x5867eee0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
