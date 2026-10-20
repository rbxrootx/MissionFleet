// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58486100 .. +0x101 bytes.
extern "C" __declspec(naked) void FUN_58486100_58486100() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 118h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 108h], ecx
        push 0ffh
        push 0
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes E8 E4 6C 3C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x6c
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 5F: jne 0x58486194
        __asm _emit 0x75
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 108h]
        movzx edx, word ptr [ecx + 126h]
        mov dword ptr [ebp - 10ch], edx
        push 58894b94h
        ; Exact mapped bytes E8 9E BE 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov eax, dword ptr [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 46h
        push 0
        lea eax, [ebp - 104h]
        push eax
        push 4
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 2F FE FF FF: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5D: jmp 0x584861f1
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 108h]
        movzx edx, word ptr [ecx + 126h]
        mov dword ptr [ebp - 114h], edx
        push 58894bb8h
        ; Exact mapped bytes E8 3F BE 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 46h
        push 0
        lea eax, [ebp - 104h]
        push eax
        push 6
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 D0 FD FF FF: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 55 AE 3A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xae
        __asm _emit 0x3a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
