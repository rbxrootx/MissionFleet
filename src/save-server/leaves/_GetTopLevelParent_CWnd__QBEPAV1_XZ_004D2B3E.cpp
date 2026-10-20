// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D2B3E .. +0x5C bytes.
extern "C" __declspec(naked) void _GetTopLevelParent_CWnd__QBEPAV1_XZ_004D2B3E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5D 8A 05 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x8a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4d2b57
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3F: jmp 0x4d2b96
        __asm _emit 0xeb
        __asm _emit 0x3f
        push 869h
        push 671a64h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 F6 76 00 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 5D FF FF FF: call 0x4d2ad9
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 08: je 0x4d2b8d
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB E6: jmp 0x4d2b73
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 19 CD FF FF: call 0x4cf8af
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
