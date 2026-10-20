// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043E530 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_0043e530_0043E530() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58be8ch
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
        sub esp, 20h
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x43e5f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ecx + 8]
        sub eax, dword ptr [edx]
        sar eax, 2
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 74: je 0x43e5f4
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 28h]
        shl eax, 2
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 80h
        ; Exact mapped bytes 76 0E: jbe 0x43e5a0
        __asm _emit 0x76
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 0E DF 08 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xdf
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 54: jmp 0x43e5f4
        __asm _emit 0xeb
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 20h]
        sub edx, 1
        shr edx, 3
        lea eax, [edx*4 + 685054h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x43e5c9
        __asm _emit 0x74
        __asm _emit 0x0d
        push 685094h
        ; Exact mapped bytes E8 3A 40 FF FF: call 0x432600
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [edx], eax
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x43e5f4
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [ebp - 1ch], 685094h
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx], 0
        mov dword ptr [ebp - 4], 0ffffffffh
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
        ret
    }
}
