// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00569003 .. +0x2C bytes.
extern "C" __declspec(naked) void _GiveFeedback_COleDropSource__UAEJK_Z_00569003() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 4dh
        push 5cffc8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 46 21 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x21
        __asm _emit 0xf9
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
