// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004F430 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_1004f430_1004F430() {
    __asm {
        xor eax, eax
        push esi
        mov dword ptr [ecx + 0bch], eax
        mov dword ptr [ecx + 0c8h], eax
        mov dword ptr [ecx + 0c0h], eax
        push edi
        lea eax, [ecx + 0ach]
        mov edx, 4
        mov esi, dword ptr [eax]
        mov edi, dword ptr [ecx + 8ch]
        add eax, 4
        dec edx
        mov dword ptr [esi + 50h], edi
        ; Exact mapped bytes 75 EF: jne 0x1004f451
        __asm _emit 0x75
        __asm _emit 0xef
        pop edi
        pop esi
        ret
    }
}
