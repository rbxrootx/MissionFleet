// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58691F30 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_58691f30_58691F30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 9E FE FF: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x58691f8b
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes A1 44 5D 96 58: mov eax, dword ptr [0x58965d44]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 7d0h
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 73 22: jae 0x58691f82
        __asm _emit 0x73
        __asm _emit 0x22
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 9E FE FF: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 9fh
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7F C9 E6 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc9
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 89 15 44 5D 96 58: mov dword ptr [0x58965d44], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
