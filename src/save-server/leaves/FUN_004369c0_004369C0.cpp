// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004369C0 .. +0x173 bytes.
extern "C" __declspec(naked) void FUN_004369c0_004369C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bca5h
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
        sub esp, 2ch
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 30h]
        add eax, 8
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 0
        mov dword ptr [ebp - 4], 0
        mov edx, 0fffffffeh
        add edx, 1
        cmp dword ptr [ebp - 28h], edx
        ; Exact mapped bytes 0F 87 DF 00 00 00: ja 0x436b03
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 86 D5 00 00 00: jbe 0x436b03
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x436ad9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 80h
        ; Exact mapped bytes 76 11: jbe 0x436a52
        __asm _emit 0x76
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 16 5A 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x5a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 7F: jmp 0x436ad1
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, 1
        shr ecx, 3
        lea edx, [ecx*4 + 685054h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x436a7b
        __asm _emit 0x74
        __asm _emit 0x0d
        push 685094h
        ; Exact mapped bytes E8 88 BB FF FF: call 0x432600
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0C: je 0x436a99
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 0F: jmp 0x436aa8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 DE DE FF FF: call 0x434980
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 10: je 0x436acb
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [ebp - 24h], 685094h
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes EB 07: jmp 0x436ae0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes EB 0D: jmp 0x436b10
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 F3 F4 FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 4]
        mov byte ptr [eax], 0
        mov eax, dword ptr [ebp - 30h]
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
