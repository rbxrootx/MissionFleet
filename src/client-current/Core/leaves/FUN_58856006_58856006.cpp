// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58856006 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_58856006_58856006() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 12 00 00 00: call 0x58856028
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 04: je 0x58856021
        __asm _emit 0x74
        __asm _emit 0x04
        inc dword ptr [eax]
        ; Exact mapped bytes EB 03: jmp 0x58856024
        __asm _emit 0xeb
        __asm _emit 0x03
        or dword ptr [eax], 0ffffffffh
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
