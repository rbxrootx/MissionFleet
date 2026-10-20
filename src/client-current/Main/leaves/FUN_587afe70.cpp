// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AFE70 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_587afe70() {
    __asm {
        mov eax, dword ptr [ecx + 34h]
        mov dword ptr [ecx + 8], 8
        test eax, eax
        ; Exact mapped bytes 7D 08: jge 0x587afe86
        __asm _emit 0x7d
        __asm _emit 0x08
        mov dword ptr [ecx + 70h], 1
        ret
        cmp eax, 64h
        ; Exact mapped bytes 7E 08: jle 0x587afe93
        __asm _emit 0x7e
        __asm _emit 0x08
        mov dword ptr [ecx + 70h], 4
        ret
        mov eax, dword ptr [ecx + 70h]
        dec eax
        neg eax
        sbb eax, eax
        add eax, 2
        mov dword ptr [ecx + 70h], eax
        ret
    }
}
