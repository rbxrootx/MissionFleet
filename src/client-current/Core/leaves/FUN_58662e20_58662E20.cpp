// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58662E20 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_58662e20_58662E20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 64h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58662e45
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 4
        ; Exact mapped bytes 7D 15: jge 0x58662e60
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0d0h]
        ; Exact mapped bytes E8 63 DA 15 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xda
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x58662e3c
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov esp, ebp
        pop ebp
        ret
    }
}
