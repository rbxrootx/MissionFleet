// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58684BE0 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_58684be0_58684BE0() {
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
        ; Exact mapped bytes E8 C5 1D E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0f4h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 EA 70 E0 FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x70
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A3 1D E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x58684c2d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 86 74 E0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 27: je 0x58684c5a
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A5 72 E0 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x72
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6A 85 E0 FF: call 0x5848d1b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x58684c58
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CE DF E1 FF: call 0x584a2c20
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xdf
        __asm _emit 0xe1
        __asm _emit 0xff
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB C8: jmp 0x58684c22
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0aa8h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1E 65 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x65
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
