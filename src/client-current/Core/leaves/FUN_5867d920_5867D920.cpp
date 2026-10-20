// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867D920 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_5867d920_5867D920() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 32 ED FF: call 0x58550c30
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x32
        __asm _emit 0xed
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x5867d952
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA 32 ED FF: call 0x58550c30
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x32
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x5867d9da
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2cch], 40000000h
        ; Exact mapped bytes 75 34: jne 0x5867d995
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 32 ED FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 2fh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A7 3A ED FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x3a
        __asm _emit 0xed
        __asm _emit 0xff
        push 2fh
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A 94 F6 FF: call 0x585e6df0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x94
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2cch], 0
        ; Exact mapped bytes EB 32: jmp 0x5867d9c7
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 32 ED FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x32
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 10h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 73 3A ED FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x3a
        __asm _emit 0xed
        __asm _emit 0xff
        push 10h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 94 F6 FF: call 0x585e6df0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x94
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2cch], 40000000h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2cch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E7 18 00 00: call 0x5867f2c0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
