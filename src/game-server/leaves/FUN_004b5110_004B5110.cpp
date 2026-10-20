// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B5110 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_004b5110_004B5110() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes A1 80 19 5D 00: mov eax, dword ptr [0x5d1980]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x19
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 18 24 5E 00: call dword ptr [0x5e2418]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 70 19 5D 00: mov ecx, dword ptr [0x5d1970]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x19
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 18 24 5E 00: call dword ptr [0x5e2418]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 60 19 5D 00: mov edx, dword ptr [0x5d1960]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x19
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 18 24 5E 00: call dword ptr [0x5e2418]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 19 5D 00: mov eax, dword ptr [0x5d1940]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x19
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 18 24 5E 00: call dword ptr [0x5e2418]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        pop ebp
        ret
    }
}
