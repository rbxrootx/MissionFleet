// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F6E70 .. +0x52 bytes.
extern "C" __declspec(naked) void _HideApplication_CWinApp__QAEXXZ_004F6E70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 26h
        push 6725c8h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 D6 33 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 28 F9 FD FF: call 0x4d67bf
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes E8 F0 52 03 00: call 0x52c194
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        push 13h
        push 0
        push 0
        push 0
        push 0
        push 686998h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes E8 62 F8 FD FF: call 0x4d6720
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
