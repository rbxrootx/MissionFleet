// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58791B40 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_58791b40_58791B40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 60h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 F8 FF FF: call 0x58791360
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf8
        __asm _emit 0xff
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
