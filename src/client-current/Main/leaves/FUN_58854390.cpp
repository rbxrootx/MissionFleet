// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58854390 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_58854390() {
    __asm {
        sub esp, 84h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 80h], eax
        push esi
        ; Exact mapped bytes FF 15 2C C4 98 58: call dword ptr [0x5898c42c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        mov esi, eax
        ; Exact mapped bytes A1 68 83 A2 58: mov eax, dword ptr [0x58a28368]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 7d0h
        cmp eax, esi
        ; Exact mapped bytes 73 67: jae 0x58854422
        __asm _emit 0x73
        __asm _emit 0x67
        push ebx
        push edi
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 1eh
        push 5899e984h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea ecx, [esp + 14h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [edx + 2e4h]
        add esp, 0ch
        push 9fh
        push 0
        push 5899e960h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 9D 67 F2 FF: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x67
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 2e4h]
        push 9fh
        push 1
        lea eax, [esp + 14h]
        push eax
        ; Exact mapped bytes E8 80 67 F2 FF: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x67
        __asm _emit 0xf2
        __asm _emit 0xff
        pop edi
        pop ebx
        mov ecx, dword ptr [esp + 84h]
        ; Exact mapped bytes 89 35 68 83 A2 58: mov dword ptr [0x58a28368], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x68
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 A3 87 12 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x87
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 84h
        ret
    }
}
