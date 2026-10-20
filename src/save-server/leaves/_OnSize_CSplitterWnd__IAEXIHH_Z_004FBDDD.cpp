// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FBDDD .. +0x41 bytes.
extern "C" __declspec(naked) void _OnSize_CSplitterWnd__IAEXIHH_Z_004FBDDD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 74 1A: je 0x4fbe04
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7E 14: jle 0x4fbe04
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7E 0E: jle 0x4fbe04
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2B 15 03 00: call 0x52d343
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
