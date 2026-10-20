// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00466710 .. +0x2C bytes.
extern "C" __declspec(naked) void _before_type_info__QBEHABV1__Z_00466710() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 9
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 9
        push ecx
        ; Exact mapped bytes E8 86 BA 00 00: call 0x4721b0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        xor edx, edx
        test eax, eax
        setg dl
        mov eax, edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
