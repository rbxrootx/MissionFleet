// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00469B20 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_00469b20_00469B20() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 35 00 00 00: call 0x469b60
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B0 D0 00 00: call 0x476be0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 30 72 68 00: mov dword ptr [0x687230], eax
        __asm _emit 0xa3
        __asm _emit 0x30
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 26 D0 00 00: call 0x476b60
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DB E2: fnclex
        __asm _emit 0xdb
        __asm _emit 0xe2
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
