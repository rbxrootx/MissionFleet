// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58791B90 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_58791b90_58791B90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 588b6adch
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58791bb4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 64h
        ; Exact mapped bytes 7D 13: jge 0x58791bcd
        __asm _emit 0x7d
        __asm _emit 0x13
        imul edx, dword ptr [ebp - 4], 18h
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 4]
        ; Exact mapped bytes E8 B6 00 00 00: call 0x58791c80
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DE: jmp 0x58791bab
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
