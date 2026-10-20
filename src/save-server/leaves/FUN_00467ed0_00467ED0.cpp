// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00467ED0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_00467ed0_00467ED0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes A1 60 DA 67 00: mov eax, dword ptr [0x67da60]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 74 09: je 0x467eeb
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 89 0D 60 DA 67 00: mov dword ptr [0x67da60], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
