// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58493420 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_58493420_58493420() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 2dah]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 22ch], ecx
        ; Exact mapped bytes 7E 1D: jle 0x58493459
        __asm _emit 0x7e
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        imul eax, dword ptr [eax + 22ch], 63h
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 22ch], eax
        ; Exact mapped bytes EB 13: jmp 0x5849346c
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 2dah]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 22ch], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 2dah]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 22ch], ecx
        ; Exact mapped bytes 7D 1D: jge 0x5849349e
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        imul eax, dword ptr [eax + 22ch], 65h
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 22ch], eax
        ; Exact mapped bytes EB 13: jmp 0x584934b1
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 2dah]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 22ch], ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
