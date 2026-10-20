// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855BD20 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_5855bd20_5855BD20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 8], ecx
        lea edx, [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E2 C4 F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xc4
        __asm _emit 0xf2
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
