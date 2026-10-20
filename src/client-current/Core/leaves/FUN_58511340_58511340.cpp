// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58511340 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58511340_58511340() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 76 09: jbe 0x5851135b
        __asm _emit 0x76
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x58511362
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
