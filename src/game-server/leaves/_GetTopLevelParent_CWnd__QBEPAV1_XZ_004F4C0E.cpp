// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F4C0E .. +0x5C bytes.
extern "C" __declspec(naked) void _GetTopLevelParent_CWnd__QBEPAV1_XZ_004F4C0E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2D 6F 04 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4f4c27
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3F: jmp 0x4f4c66
        __asm _emit 0xeb
        __asm _emit 0x3f
        push 869h
        push 5c5574h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 26 65 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 5D FF FF FF: call 0x4f4ba9
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 08: je 0x4f4c5d
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB E6: jmp 0x4f4c43
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 19 CD FF FF: call 0x4f197f
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
