// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856F060 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_5856f060_5856F060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5856f07b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 7D 28: jge 0x5856f0a9
        __asm _emit 0x7d
        __asm _emit 0x28
        mov ecx, dword ptr [ebp + 8]
        push ecx
        imul edx, dword ptr [ebp - 4], 18h
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 130h]
        push ecx
        ; Exact mapped bytes E8 47 1B 2E 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1b
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5856f0a7
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x5856f0ab
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB C9: jmp 0x5856f072
        __asm _emit 0xeb
        __asm _emit 0xc9
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
