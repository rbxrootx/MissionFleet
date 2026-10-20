// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042ECC8 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_0042ecc8_0042ECC8() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 40h], 0
        mov esi, dword ptr [edi + 48h]
        mov eax, dword ptr [edi + 44h]
        ; Exact mapped bytes 74 1E: je 0x42ecf6
        __asm _emit 0x74
        __asm _emit 0x1e
        push ebx
        ; Exact mapped bytes E8 D5 6F 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [eax + 0ch]
        push 5
        push dword ptr [edi + 40h]
        push ebx
        ; Exact mapped bytes FF 15 70 C2 43 00: call dword ptr [0x43c270]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        push ebx
        ; Exact mapped bytes FF 15 58 C1 43 00: call dword ptr [0x43c158]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        pop ebx
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x42ed03
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes FF 15 10 C2 43 00: call dword ptr [0x43c210]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        push 1
        test esi, esi
        pop eax
        ; Exact mapped bytes 74 37: je 0x42ed41
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 66 81 7E 02 FF FF: cmp word ptr [esi + 2], 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 75 0D: jne 0x42ed21
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 0ch]
        ; Exact mapped bytes 66 8B 46 12: mov ax, word ptr [esi + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x12
        ; Exact mapped bytes 66 8B 76 14: mov si, word ptr [esi + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x14
        ; Exact mapped bytes EB 08: jmp 0x42ed29
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 46 0A: mov ax, word ptr [esi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x0a
        ; Exact mapped bytes 66 8B 76 0C: mov si, word ptr [esi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x0c
        ; Exact mapped bytes 66 F7 C1 01 18: test cx, 0x1801
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x18
        ; Exact mapped bytes 75 0F: jne 0x42ed3f
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0A: jne 0x42ed3f
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 66 85 F6: test si, si
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 05: jne 0x42ed3f
        __asm _emit 0x75
        __asm _emit 0x05
        push 1
        pop eax
        ; Exact mapped bytes EB 02: jmp 0x42ed41
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        ret
    }
}
