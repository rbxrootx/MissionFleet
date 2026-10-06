// Reconstructed from the installed Main.dll Ghidra listing.
// Ghidra extent: 0x588D9D20 .. 0x588D9D5E (62 bytes).
// ECX is the receiver; the current value is the single stack argument.
extern "C" __declspec(naked) void FUN_588d9d20() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [ecx + 0xD98]
        xor esi, 0xAAAAAAAA
        // Preserve the target's `3B C6` encoding (cmp eax, esi).
        __asm _emit 0x3B
        __asm _emit 0xC6
        jge short progress_full
        test esi, esi
        je short progress_zero
        imul eax, eax, 0x64
        cdq
        idiv esi
        pop esi
        mov dword ptr [ecx + 0x1444], eax
        ret 4
    progress_zero:
        // Preserve the target's `33 C0` encoding (xor eax, eax).
        __asm _emit 0x33
        __asm _emit 0xC0
        mov dword ptr [ecx + 0x1444], eax
        pop esi
        ret 4
    progress_full:
        mov eax, 100
        pop esi
        ret 4
    }
}
