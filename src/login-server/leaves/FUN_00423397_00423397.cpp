// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00423397 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_00423397_00423397() {
    __asm {
        push 140h
        push 0
        ; Exact mapped bytes FF 35 68 10 45 00: push dword ptr [0x451068]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 28 C1 43 00: call dword ptr [0x43c128]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes A3 60 10 45 00: mov dword ptr [0x451060], eax
        __asm _emit 0xa3
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 75 01: jne 0x4233b4
        __asm _emit 0x75
        __asm _emit 0x01
        ret
        mov ecx, dword ptr [esp + 4]
        ; Exact mapped bytes 83 25 58 10 45 00 00: and dword ptr [0x451058], 0
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 25 5C 10 45 00 00: and dword ptr [0x45105c], 0
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0x5c
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes A3 54 10 45 00: mov dword ptr [0x451054], eax
        __asm _emit 0xa3
        __asm _emit 0x54
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D 64 10 45 00: mov dword ptr [0x451064], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 4C 10 45 00 10 00 00 00: mov dword ptr [0x45104c], 0x10
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop eax
        ret
    }
}
