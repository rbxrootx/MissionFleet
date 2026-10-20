// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58844C58 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_58844c58_58844C58() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        and dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 08: jmp 0x58844c6b
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        inc eax
        inc eax
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 33: jge 0x58844ca6
        __asm _emit 0x7d
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 8]
        inc eax
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 28: jge 0x58844ca4
        __asm _emit 0x7d
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 8]
        mov al, byte ptr [eax]
        mov byte ptr [ebp - 1], al
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 8]
        mov cl, byte ptr [ecx + 1]
        mov byte ptr [eax], cl
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 8]
        mov cl, byte ptr [ebp - 1]
        mov byte ptr [eax + 1], cl
        ; Exact mapped bytes EB BD: jmp 0x58844c63
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov esp, ebp
        pop ebp
        ret
    }
}
