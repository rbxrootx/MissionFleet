// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58562A30 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_58562a30_58562A30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], 8
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 7D 0C: jge 0x58562a56
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 70h], 1
        ; Exact mapped bytes EB 34: jmp 0x58562a8a
        __asm _emit 0xeb
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 34h], 64h
        ; Exact mapped bytes 7E 0C: jle 0x58562a6b
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 70h], 4
        ; Exact mapped bytes EB 1F: jmp 0x58562a8a
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 70h], 1
        ; Exact mapped bytes 75 0C: jne 0x58562a80
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 70h], 2
        ; Exact mapped bytes EB 0A: jmp 0x58562a8a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 70h], 1
        mov esp, ebp
        pop ebp
        ret
    }
}
