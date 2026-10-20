// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00513D09 .. +0x42 bytes.
extern "C" __declspec(naked) void _OnSetCursor_CSplitterWnd__IAEHPAVCWnd__II_Z_00513D09() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 1B: jne 0x513d31
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 13: jne 0x513d31
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 75 07: jne 0x513d31
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 14: jmp 0x513d45
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5F 9B 02 00: call 0x53d8a4
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
