// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ACE10 .. +0x28 bytes.
extern "C" __declspec(naked) void __8type_info__QBEHABV0__Z_004ACE10() {
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
        ; Exact mapped bytes E8 06 D1 00 00: call 0x4b9f30
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xd1
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
