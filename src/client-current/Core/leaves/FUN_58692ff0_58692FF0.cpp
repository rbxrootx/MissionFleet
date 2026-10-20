// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58692FF0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58692ff0_58692FF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [ebp - 8], edx
        push 0
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
