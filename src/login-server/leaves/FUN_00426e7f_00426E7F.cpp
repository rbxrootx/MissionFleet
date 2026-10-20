// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426E7F .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_00426e7f_00426E7F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        wait
        ; Exact mapped bytes D9 7D FC: fnstcw word ptr [ebp - 4]
        __asm _emit 0xd9
        __asm _emit 0x7d
        __asm _emit 0xfc
        push dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3A 00 00 00: call 0x426eca
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov eax, dword ptr [ebp + 0ch]
        not eax
        and esi, eax
        mov eax, dword ptr [ebp + 8]
        and eax, dword ptr [ebp + 0ch]
        or esi, eax
        push esi
        ; Exact mapped bytes E8 B5 00 00 00: call 0x426f5c
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp + 0ch], eax
        pop ecx
        ; Exact mapped bytes D9 6D 0C: fldcw word ptr [ebp + 0xc]
        __asm _emit 0xd9
        __asm _emit 0x6d
        __asm _emit 0x0c
        mov eax, esi
        pop esi
        leave
        ret
    }
}
