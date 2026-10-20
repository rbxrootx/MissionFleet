// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10095BB0 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_10095bb0_10095BB0() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        xor eax, eax
        xor edx, edx
        ; Exact mapped bytes 66 8B B7 A8 00 00 00: mov si, word ptr [edi + 0xa8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb7
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 B1 E2 00 00 00: mov word ptr [ecx + 0xe2], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xb1
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B B7 A8 00 00 00: mov si, word ptr [edi + 0xa8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb7
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FE 01: cmp si, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x01
        ; Exact mapped bytes 75 0B: jne 0x10095be0
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ecx + 64h]
        lea edx, [ecx + 0e4h]
        ; Exact mapped bytes EB 0E: jmp 0x10095bee
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 66 85 F6: test si, si
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 09: jne 0x10095bee
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ecx + 6ch]
        lea edx, [ecx + 0e6h]
        cmp eax, edi
        ; Exact mapped bytes 74 0C: je 0x10095bfe
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 54h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x10095bfe
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 66 FF 02: inc word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes EB F0: jmp 0x10095bee
        __asm _emit 0xeb
        __asm _emit 0xf0
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
