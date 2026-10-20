// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D4B50 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_585d4b50_585D4B50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 243ech], 2
        ; Exact mapped bytes 75 09: jne 0x585d4b6e
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x585d4b75
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
