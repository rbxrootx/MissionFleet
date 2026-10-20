// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BE420 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_587be420_587BE420() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 80 44 89 58: call dword ptr [0x58894480]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        or edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 68h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 2
        ; Exact mapped bytes 75 10: jne 0x587be45b
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], 4
        xor eax, eax
        ; Exact mapped bytes EB 21: jmp 0x587be47a
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes EB 1F: jmp 0x587be47a
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 3
        ; Exact mapped bytes 75 10: jne 0x587be474
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], 6
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x587be47a
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB 06: jmp 0x587be47a
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 34h]
    }
}
