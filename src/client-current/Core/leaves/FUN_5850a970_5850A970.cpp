// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850A970 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_5850a970_5850A970() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 48h], ecx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        push 588a3dc8h
        push 40h
        lea ecx, [ebp - 44h]
        push ecx
        ; Exact mapped bytes E8 09 22 00 00: call 0x5850cba0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        push eax
        lea edx, [ebp - 44h]
        push edx
        movzx eax, byte ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        ; Exact mapped bytes E8 23 ED FF FF: call 0x585096e0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 83 66 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x66
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
