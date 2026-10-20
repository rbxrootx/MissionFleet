// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004180E0 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_004180e0_004180E0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        mov edx, dword ptr [ebp + 10h]
        xor eax, eax
        mov al, byte ptr [edx]
        cmp ecx, eax
        ; Exact mapped bytes 7F 19: jg 0x41810e
        __asm _emit 0x7f
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        cmp edx, ecx
        ; Exact mapped bytes 7C 07: jl 0x41810e
        __asm _emit 0x7c
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x418110
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop ebp
        ret
    }
}
