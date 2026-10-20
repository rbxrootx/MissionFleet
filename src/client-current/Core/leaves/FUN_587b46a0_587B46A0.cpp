// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B46A0 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_587b46a0_587B46A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 8D 8E D6 FF: call 0x5851d550
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0xd6
        __asm _emit 0xff
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 15 03 CD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0xcd
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 AC E6 D4 FF: call 0x58502d80
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe6
        __asm _emit 0xd4
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 54 44 89 58: call dword ptr [0x58894454]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F9 8D D6 FF: call 0x5851d4e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x8d
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        or edx, 1
        mov dword ptr [ebp - 20h], edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 A8 A6 D1 FF: call 0x584ceda0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa6
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 4B C9 07 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xc9
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
