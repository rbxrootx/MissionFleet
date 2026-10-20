// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416C6D .. +0x37 bytes.
extern "C" __declspec(naked) void _CreateContainer_COccManager__UAEPAVCOleControlContainer__PAVCWnd___Z_00416C6D() {
    __asm {
        mov eax, 43a9c5h
        ; Exact mapped bytes E8 91 89 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push 54h
        ; Exact mapped bytes E8 6D 6C 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov ecx, eax
        mov dword ptr [ebp - 10h], ecx
        xor eax, eax
        cmp ecx, eax
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 74 08: je 0x416c96
        __asm _emit 0x74
        __asm _emit 0x08
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 97 12 00 00: call 0x417f2d
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
