// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005250D4 .. +0x49 bytes.
extern "C" __declspec(naked) void _GetPageIndex_CPropertySheet__QAEHPAVCPropertyPage___Z_005250D4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5250ef
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FA FE FF FF: call 0x524ff1
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 18: jge 0x525114
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 03 ED 00 00: call 0x533e0b
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x525112
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 05: jmp 0x525117
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB D2: jmp 0x5250e6
        __asm _emit 0xeb
        __asm _emit 0xd2
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
