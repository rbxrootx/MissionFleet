// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A0F30 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_584a0f30_584A0F30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 70 63 FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
