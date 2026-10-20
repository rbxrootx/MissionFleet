// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C6990 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_587c6990() {
    __asm {
        push ecx
        push ebp
        xor ebp, ebp
        push esi
        mov esi, ecx
        push edi
        push ebp
        push ebp
        mov dword ptr [esi + 24h], ebp
        mov dword ptr [esi + 4], ebp
        mov dword ptr [esi + 0ch], ebp
        mov dword ptr [esi + 10h], 201h
        mov dword ptr [esi + 14h], 6
        mov dword ptr [esi + 18h], ebp
        mov dword ptr [esi + 1ch], ebp
        mov dword ptr [esi + 20h], ebp
        ; Exact mapped bytes E8 01 FE FF FF: call 0x587c67c0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 4
        ; Exact mapped bytes E8 88 62 1B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x62
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        cmp edi, ebp
        ; Exact mapped bytes 74 37: je 0x587c6a06
        __asm _emit 0x74
        __asm _emit 0x37
        push ebx
        ; Exact mapped bytes E8 D9 AF 1A 00: call 0x589719ae
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xaf
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [edi], eax
        ; Exact mapped bytes E8 00 AE 1A 00: call 0x589717dc
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xae
        __asm _emit 0x1a
        __asm _emit 0x00
        push ebp
        lea ecx, [esp + 14h]
        mov ebx, eax
        ; Exact mapped bytes E8 18 AD 1A 00: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xad
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 4]
        cmp eax, -1
        ; Exact mapped bytes 73 04: jae 0x587c69f4
        __asm _emit 0x73
        __asm _emit 0x04
        inc eax
        mov dword ptr [ebx + 4], eax
        lea ecx, [esp + 10h]
        ; Exact mapped bytes E8 2B AD 1A 00: call 0x58971728
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xad
        __asm _emit 0x1a
        __asm _emit 0x00
        pop ebx
        mov dword ptr [esi + 24h], edi
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret
        pop edi
        mov dword ptr [esi + 24h], ebp
        pop esi
        pop ebp
        pop ecx
        ret
    }
}
