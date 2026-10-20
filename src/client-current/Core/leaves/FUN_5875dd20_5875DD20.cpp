// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875DD20 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_5875dd20_5875DD20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10d4h]
        xor ecx, 55555555h
        add ecx, dword ptr [ebp + 8]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10d4h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D 8C D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x8c
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 10: jne 0x5875dd68
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 25 E6 FF: call 0x585c0360
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x25
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
