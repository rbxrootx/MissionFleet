// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005588DC .. +0x5D bytes.
extern "C" __declspec(naked) void _CanPasteLink_COleClientItem__SGHXZ_005588DC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes A1 1C EC 5D 00: mov eax, dword ptr [0x5dec1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 34 28 5E 00: call dword ptr [0x5e2834]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 3B: jne 0x55892b
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 28 EC 5D 00: mov ecx, dword ptr [0x5dec28]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 34 28 5E 00: call dword ptr [0x5e2834]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x55892b
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 15 2C EC 5D 00: mov edx, dword ptr [0x5dec2c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 34 28 5E 00: call dword ptr [0x5e2834]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x55892b
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes A1 10 EC 5D 00: mov eax, dword ptr [0x5dec10]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 34 28 5E 00: call dword ptr [0x5e2834]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x55892b
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 07: jmp 0x558932
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
