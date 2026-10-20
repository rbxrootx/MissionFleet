// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855B500 .. +0xA4 bytes.
extern "C" __declspec(naked) void FUN_5855b500_5855B500() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 08: jne 0x5855b51c
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x5855b59e
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 45 CB F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xcb
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5855b54d
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 18h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 34 C5 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xc5
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 10h], ecx
        lea edx, [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2B CC F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xcc
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 62 C4 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc4
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x5855b59c
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 BF C4 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc4
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 74 FF FF FF: call 0x5855b500
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 05: je 0x5855b59a
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 04: jmp 0x5855b59e
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB A2: jmp 0x5855b53e
        __asm _emit 0xeb
        __asm _emit 0xa2
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
