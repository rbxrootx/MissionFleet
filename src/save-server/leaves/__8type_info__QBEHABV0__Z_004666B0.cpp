// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004666B0 .. +0x28 bytes.
extern "C" __declspec(naked) void __8type_info__QBEHABV0__Z_004666B0() {
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
        ; Exact mapped bytes E8 E6 BA 00 00: call 0x4721b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        neg eax
        sbb eax, eax
        inc eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
