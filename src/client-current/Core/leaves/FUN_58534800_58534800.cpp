// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58534800 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_58534800_58534800() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 75 09: jne 0x58534825
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x5853482c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        movzx eax, byte ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
