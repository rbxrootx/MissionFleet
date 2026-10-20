// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C04D0 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_587c04d0_587C04D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 0ch
        ; Exact mapped bytes E8 62 0B 07 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x0b
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588be2f8h
        push 0ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 F0 08 CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x08
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 09 00 00 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
