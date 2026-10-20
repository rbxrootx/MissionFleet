// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58546500 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_58546500_58546500() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 300h], 0
        ; Exact mapped bytes 75 02: jne 0x58546517
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 2B: jmp 0x58546542
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58546529
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 3e8h
        ; Exact mapped bytes 7D 10: jge 0x58546542
        __asm _emit 0x7d
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 16 00 00 00: call 0x58546550
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x58546540
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x58546542
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB DE: jmp 0x58546520
        __asm _emit 0xeb
        __asm _emit 0xde
        mov esp, ebp
        pop ebp
        ret
    }
}
