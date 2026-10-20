// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AC4A0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_586ac4a0_586AC4A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 75 09: jne 0x586ac4bb
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x586ac4c2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
