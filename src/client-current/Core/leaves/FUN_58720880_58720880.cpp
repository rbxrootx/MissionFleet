// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58720880 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_58720880_58720880() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 8], ecx
        movzx edx, word ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 21 A9 09 00: call 0x587bb1c0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xa9
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
