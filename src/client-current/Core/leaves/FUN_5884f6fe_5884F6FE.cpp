// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F6FE .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_5884f6fe_5884F6FE() {
    __asm {
        push 5884f5dfh
        ; Exact mapped bytes E8 05 13 00 00: call 0x58850a0d
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 F0 72 90 58: mov dword ptr [0x589072f0], eax
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        pop ecx
        cmp eax, -1
        ; Exact mapped bytes 75 03: jne 0x5884f716
        __asm _emit 0x75
        __asm _emit 0x03
        xor al, al
        ret
        push 58969598h
        push eax
        ; Exact mapped bytes E8 9D 13 00 00: call 0x58850abe
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5884f72e
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 05 00 00 00: call 0x5884f731
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB E5: jmp 0x5884f713
        __asm _emit 0xeb
        __asm _emit 0xe5
        mov al, 1
        ret
    }
}
