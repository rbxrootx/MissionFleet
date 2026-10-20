// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58690C60 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_58690c60_58690C60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 5D DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x5d
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 11ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6A B0 DF FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb0
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 23 5D DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x5d
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x58690cad
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 B4 DF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb4
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 27: je 0x58690cda
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 25 B2 DF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xb2
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EA C4 DF FF: call 0x5848d1b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xc4
        __asm _emit 0xdf
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x58690cd8
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4E 1F E1 FF: call 0x584a2c20
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x1f
        __asm _emit 0xe1
        __asm _emit 0xff
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB C8: jmp 0x58690ca2
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 75ch]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 9E A4 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa4
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
