// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005719B3 .. +0x2C bytes.
extern "C" __declspec(naked) void _GiveFeedback_COleDropSource__UAEJK_Z_005719B3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 4dh
        push 67c7a0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 96 88 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 30h]
        neg eax
        sbb eax, eax
        and eax, 40102h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
