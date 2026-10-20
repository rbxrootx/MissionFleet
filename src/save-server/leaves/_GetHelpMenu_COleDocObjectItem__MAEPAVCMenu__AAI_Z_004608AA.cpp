// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004608AA .. +0x45 bytes.
extern "C" __declspec(naked) void _GetHelpMenu_COleDocObjectItem__MAEPAVCMenu__AAI_Z_004608AA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 67 24 07 00: call 0x4d2d25
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 44h]
        push edx
        ; Exact mapped bytes E8 4C BC 07 00: call 0x4dc519
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 10: je 0x4608e6
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 78 6E 0D 00: call 0x537756
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x6e
        __asm _emit 0x0d
        __asm _emit 0x00
        sub eax, 1
        mov ecx, dword ptr [ebp + 8]
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
