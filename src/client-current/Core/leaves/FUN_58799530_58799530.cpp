// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58799530 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_58799530_58799530() {
    __asm {
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 44 24 0C: movsd xmm0, qword ptr [esp + 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        lea eax, [esp]
        push eax
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 06 8B 0C 00: call 0x58862050
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes DD 5C 24 0C: fstp qword ptr [esp + 0xc]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes F2 0F 10 44 24 0C: movsd xmm0, qword ptr [esp + 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        add esp, 0ch
        ; Exact mapped bytes 66 0F 2E 05 B0 51 89 58: ucomisd xmm0, qword ptr [0x588951b0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        lahf
        test ah, 44h
        ; Exact mapped bytes 7A 06: jp 0x5879956b
        __asm _emit 0x7a
        __asm _emit 0x06
        mov al, 1
        add esp, 8
        ret
        xor al, al
        add esp, 8
        ret
    }
}
