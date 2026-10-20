// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005169F4 .. +0x3A bytes.
extern "C" __declspec(naked) void _EndDialog_CPropertyPage__QAEXH_Z_005169F4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 94 60 01 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 6378c0h
        ; Exact mapped bytes E8 F3 37 FC FF: call 0x4da203
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x37
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0C: je 0x516a28
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE 12 00 00: call 0x517cd6
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
