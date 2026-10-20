// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58855C49 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_58855c49() {
    __asm {
        ; Exact mapped bytes 8B 51 1C: mov edx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x1c
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 05: shr eax, 5
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes A8 01: test al, 1
        __asm _emit 0xa8
        __asm _emit 0x01
        ; Exact mapped bytes 74 09: je 0x58855c5e
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 81 CA 80 00 00 00: or edx, 0x80
        __asm _emit 0x81
        __asm _emit 0xca
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 51 1C: mov dword ptr [ecx + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x1c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 EE CA FF FF: call 0x58852753
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
