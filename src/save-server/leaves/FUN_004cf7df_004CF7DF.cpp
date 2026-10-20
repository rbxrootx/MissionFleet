// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CF7DF .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_004cf7df_004CF7DF() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c3e1h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 18h
        ; Exact mapped bytes E8 C5 0E 07 00: call 0x5406c4
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x0e
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 14h], 0
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x4cf899
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x4cf899
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 1F CA FF FF: call 0x4cc23f
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 4ec00fh
        ; Exact mapped bytes E8 15 CC FF FF: call 0x4cc442
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 10fh
        push 671a64h
        push 48h
        ; Exact mapped bytes E8 92 C8 FF FF: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 16: je 0x4cf86a
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 1ch
        push 634a88h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A7 C4 00 00: call 0x4dbd0c
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x4cf871
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 B2 CB FF FF: call 0x4cc442
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 A6 C9 FF FF: call 0x4cc23f
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
