// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850A3F0 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_5850a3f0_5850A3F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 50h], ecx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 01 D8 F7 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd8
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        push 588a3dd8h
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        ; Exact mapped bytes E8 9E EE FF FF: call 0x585092c0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        push eax
        push 40h
        lea eax, [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 6F 27 00 00: call 0x5850cba0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        push eax
        lea ecx, [ebp - 4ch]
        push ecx
        movzx edx, byte ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        ; Exact mapped bytes E8 89 F2 FF FF: call 0x585096e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 E9 6B 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x6b
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
