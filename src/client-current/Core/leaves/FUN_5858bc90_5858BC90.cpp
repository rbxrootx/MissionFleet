// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858BC90 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_5858bc90_5858BC90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 9ch]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 98h], ecx
        ; Exact mapped bytes 7E 1D: jle 0x5858bcc9
        __asm _emit 0x7e
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        imul eax, dword ptr [eax + 98h], 63h
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], eax
        ; Exact mapped bytes EB 13: jmp 0x5858bcdc
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 9ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 9ch]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 98h], ecx
        ; Exact mapped bytes 7D 1D: jge 0x5858bd0e
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        imul eax, dword ptr [eax + 98h], 65h
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], eax
        ; Exact mapped bytes EB 13: jmp 0x5858bd21
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 9ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
