// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58827580 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_58827580_58827580() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 2
        ; Exact mapped bytes 75 10: jne 0x588275a0
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], 4
        xor eax, eax
        ; Exact mapped bytes EB 21: jmp 0x588275bf
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes EB 1F: jmp 0x588275bf
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 50h], 3
        ; Exact mapped bytes 75 10: jne 0x588275b9
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 6
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x588275bf
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB 06: jmp 0x588275bf
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 34h]
    }
}
