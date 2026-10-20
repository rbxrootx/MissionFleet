// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C54D0 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_587c54d0_587C54D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 10 42 D6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x42
        __asm _emit 0xd6
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 03 CD FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x03
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 5ch]
        cmp esi, eax
        ; Exact mapped bytes 7F 13: jg 0x587c5508
        __asm _emit 0x7f
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F3 41 D6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x41
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 9ch]
        ; Exact mapped bytes 7E 41: jle 0x587c5549
        __asm _emit 0x7e
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B7 FC FE FF: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8F 03 CD FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0xcd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 5ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 19 CF FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x19
        __asm _emit 0xcf
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 36 B4 FF FF: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 98h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        neg eax
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 74 FC FE FF: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C 03 CD FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 5ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD 18 CF FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x18
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 AF FF FF: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
