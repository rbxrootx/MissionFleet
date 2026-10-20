// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58534AD0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58534ad0_58534AD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 5ch], 2
        ; Exact mapped bytes 75 09: jne 0x58534aeb
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x58534af2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
