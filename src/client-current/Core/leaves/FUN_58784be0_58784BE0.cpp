// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58784BE0 .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_58784be0_58784BE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0d8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0d0h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 05: jne 0x58784c04
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x58784c9e
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0c8h
        push 0
        lea eax, [ebp - 0cch]
        push eax
        ; Exact mapped bytes E8 F9 81 0C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0eh]
        push ecx
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 0ah]
        push eax
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 12h]
        push edx
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 10h]
        push ecx
        push 588b5e90h
        push 0c8h
        lea edx, [ebp - 0cch]
        push edx
        ; Exact mapped bytes E8 98 C1 D2 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0xd2
        __asm _emit 0xff
        add esp, 20h
        mov eax, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0d4h], ecx
        lea edx, [ebp - 0cch]
        push edx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 24 14 D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 0d8h], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 18h
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 E3 7A D6 FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x7a
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 A8 C3 0A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xc3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
