// Reconstructed from FUN_10105c00 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_10105c40();

extern "C" __declspec(naked) void FUN_10105c00() {
    __asm {
        push esi
        mov esi, ecx
        xor eax, eax
        ; Exact immediate encoding: mov dword ptr [esi], 101768dch
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xdc
        __asm _emit 0x68
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 10h], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 0ch], eax
        call FUN_10105c40
        mov eax, esi
        pop esi
        ret
    }
}
