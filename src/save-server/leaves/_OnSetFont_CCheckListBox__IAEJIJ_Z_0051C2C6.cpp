// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051C2C6 .. +0x3A bytes.
extern "C" __declspec(naked) void _OnSetFont_CCheckListBox__IAEJIJ_Z_0051C2C6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD 34 FB FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x34
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 9F FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x9f
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 50h
        cmp eax, 50h
        ; Exact mapped bytes 75 13: jne 0x51c2f8
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 F8 FF FF: call 0x51bb24
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 27 01 00: call 0x52ea6e
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x27
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
