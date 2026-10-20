// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446210 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_00446210_00446210() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x44622f
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [ebp - 4], 6850f8h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
