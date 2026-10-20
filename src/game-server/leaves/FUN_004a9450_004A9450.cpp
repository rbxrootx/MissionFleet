// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A9450 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_004a9450_004A9450() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 35 00 00 00: call 0x4a9490
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 90 9C 00 00: call 0x4b30f0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 F0 EC 5D 00: mov dword ptr [0x5decf0], eax
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 06 9C 00 00: call 0x4b3070
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x9c
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
