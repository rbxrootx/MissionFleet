// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588655D4 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_588655d4_588655D4() {
    __asm {
        ; Exact mapped bytes 83 3D 9C 98 96 58 00: cmp dword ptr [0x5896989c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x9c
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 03: je 0x588655e0
        __asm _emit 0x74
        __asm _emit 0x03
        xor eax, eax
        ret
        push esi
        ; Exact mapped bytes E8 B1 FE 00 00: call 0x58875497
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 75 0C: jne 0x588655f8
        __asm _emit 0x75
        __asm _emit 0x0c
        push eax
        ; Exact mapped bytes E8 1E 76 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        or eax, 0ffffffffh
        pop esi
        ret
        push edi
        push esi
        ; Exact mapped bytes E8 0F 01 00 00: call 0x5886570e
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x58865609
        __asm _emit 0x75
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 0C: jmp 0x58865615
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes A3 A0 98 96 58: mov dword ptr [0x589698a0], eax
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        xor edi, edi
        ; Exact mapped bytes A3 9C 98 96 58: mov dword ptr [0x5896989c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes E8 F4 75 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 EE 75 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
