// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005298F9 .. +0x3A bytes.
extern "C" __declspec(naked) void _OnSetFont_CCheckListBox__IAEJIJ_Z_005298F9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A 7F FC FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EE 54 FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 50h
        cmp eax, 50h
        ; Exact mapped bytes 75 13: jne 0x52992b
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 F8 FF FF: call 0x529157
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E3 56 01 00: call 0x53f00e
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
