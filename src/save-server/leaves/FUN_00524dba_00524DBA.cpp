// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00524DBA .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_00524dba_00524DBA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 09: jne 0x524dcd
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 0D: jmp 0x524dda
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
