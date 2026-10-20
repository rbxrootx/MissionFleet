// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00524174 .. +0x3A bytes.
extern "C" __declspec(naked) void _EndDialog_CPropertyPage__QAEXH_Z_00524174() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B4 8E 01 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 584cf8h
        ; Exact mapped bytes E8 73 6F FD FF: call 0x4fb103
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x6f
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0C: je 0x5241a8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE 12 00 00: call 0x525456
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
