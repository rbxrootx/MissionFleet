// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58784AB0 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_58784ab0_58784AB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 52 37 D0 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x37
        __asm _emit 0xd0
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
