// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417473 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_00417473_00417473() {
    __asm {
        mov eax, 43aa64h
        ; Exact mapped bytes E8 8B 81 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ecx], 43e2fch
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 95 CF 01 00: call 0x434425
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
