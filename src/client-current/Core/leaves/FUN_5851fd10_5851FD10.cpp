// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851FD10 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_5851fd10_5851FD10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        ; Exact mapped bytes FF 15 14 41 89 58: call dword ptr [0x58894114]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        movzx eax, word ptr [ebp - 4]
        sar eax, 0ah
        mov dword ptr [ebp - 8], eax
        movzx ecx, word ptr [ebp - 4]
        and ecx, 3ffh
        mov dword ptr [ebp - 0ch], ecx
        lea edx, [ebp - 8]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 08 23 F8 FF: call 0x584a2050
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x23
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9C 16 F8 FF: call 0x584a13f0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x16
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
