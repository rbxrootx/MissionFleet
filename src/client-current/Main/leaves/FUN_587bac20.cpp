// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BAC20 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_587bac20() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        mov eax, dword ptr [edi + 10h]
        add eax, 10h
        push eax
        mov ebx, ecx
        ; Exact mapped bytes E8 F9 68 1B 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x68
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 4]
        mov esi, eax
        mov dword ptr [esi], ecx
        mov edx, dword ptr [edi + 8]
        mov dword ptr [esi + 4], edx
        mov eax, dword ptr [edi + 0ch]
        mov dword ptr [esi + 8], eax
        mov ecx, dword ptr [edi + 10h]
        mov eax, dword ptr [esp + 18h]
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [edi + 10h]
        push edx
        push eax
        lea ecx, [esi + 10h]
        push ecx
        ; Exact mapped bytes E8 EC 20 1C 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x20
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edi, dword ptr [edi + 10h]
        add esp, 10h
        add edi, 10h
        ; Exact mapped bytes 74 04: je 0x587bac6f
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, edi
        ; Exact mapped bytes EB 07: jmp 0x587bac76
        __asm _emit 0xeb
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 0
        push eax
        push esi
        push 0
        push 9
        push 80015000h
        mov ecx, ebx
        ; Exact mapped bytes E8 E6 5F 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x5f
        __asm _emit 0x1b
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 96 21 1C 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x21
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes A1 84 45 A2 58: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        cmp dword ptr [eax + 78h], 0
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 75 0E: jne 0x587bacaf
        __asm _emit 0x75
        __asm _emit 0x0e
        mov dword ptr [eax + 78h], 1
        mov dword ptr [eax + 7ch], 0fah
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
