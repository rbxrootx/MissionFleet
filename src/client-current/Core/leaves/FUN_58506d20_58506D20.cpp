// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506D20 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_58506d20_58506D20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD FB FF FF: call 0x58506910
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 588a3b84h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
