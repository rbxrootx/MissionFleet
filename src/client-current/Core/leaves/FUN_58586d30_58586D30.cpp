// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58586D30 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_58586d30_58586D30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 75 23: jne 0x58586d69
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        add ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c0h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 52: jmp 0x58586dbb
        __asm _emit 0xeb
        __asm _emit 0x52
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 16: jne 0x58586d85
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 36: jmp 0x58586dbb
        __asm _emit 0xeb
        __asm _emit 0x36
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 16: jne 0x58586da1
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 1A: jmp 0x58586dbb
        __asm _emit 0xeb
        __asm _emit 0x1a
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x58586dbb
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
