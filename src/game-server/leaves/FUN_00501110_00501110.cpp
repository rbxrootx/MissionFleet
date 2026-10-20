// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00501110 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_00501110_00501110() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 18h], ecx
        push 14h
        push 0
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 4A 82 FA FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x82
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 14h], 14h
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], ecx
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 68 92 03 00: call 0x53a3aa
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
