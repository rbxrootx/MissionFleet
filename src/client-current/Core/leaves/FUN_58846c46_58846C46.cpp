// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58846C46 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_58846c46_58846C46() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push 20h
        xor eax, eax
        mov edx, 80000000h
        pop esi
        mov ecx, edx
        and ecx, dword ptr [ebp + 8]
        neg ecx
        sbb ecx, ecx
        shr edx, 1
        neg ecx
        add eax, ecx
        sub esi, 1
        ; Exact mapped bytes 75 EC: jne 0x58846c54
        __asm _emit 0x75
        __asm _emit 0xec
        pop esi
        pop ebp
        ret
    }
}
