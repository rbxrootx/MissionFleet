// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58977510 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_58977510() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        push 0d8h
        push edi
        ; Exact mapped bytes E8 2E F8 FF FF: call 0x58976d50
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor esi, esi
        lea ebx, [edi + 48h]
        cmp dword ptr [ebx], 0
        ; Exact mapped bytes 74 0A: je 0x58977539
        __asm _emit 0x74
        __asm _emit 0x0a
        push esi
        push edi
        ; Exact mapped bytes E8 6A FB FF FF: call 0x589770a0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        inc esi
        add ebx, 4
        cmp esi, 4
        ; Exact mapped bytes 7C E8: jl 0x5897752a
        __asm _emit 0x7c
        __asm _emit 0xe8
        mov al, byte ptr [edi + 0b1h]
        test al, al
        ; Exact mapped bytes 75 32: jne 0x5897757e
        __asm _emit 0x75
        __asm _emit 0x32
        xor esi, esi
        lea ebx, [edi + 68h]
        mov eax, dword ptr [ebx - 10h]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x58977564
        __asm _emit 0x74
        __asm _emit 0x0c
        push 0
        push esi
        push edi
        ; Exact mapped bytes E8 BF FD FF FF: call 0x58977320
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebx], 0
        ; Exact mapped bytes 74 0C: je 0x58977575
        __asm _emit 0x74
        __asm _emit 0x0c
        push 1
        push esi
        push edi
        ; Exact mapped bytes E8 AE FD FF FF: call 0x58977320
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        inc esi
        add ebx, 4
        cmp esi, 4
        ; Exact mapped bytes 7C D3: jl 0x58977551
        __asm _emit 0x7c
        __asm _emit 0xd3
        push 0d9h
        push edi
        ; Exact mapped bytes E8 C7 F7 FF FF: call 0x58976d50
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret
    }
}
