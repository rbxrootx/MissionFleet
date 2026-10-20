// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436840 .. +0x171 bytes.
extern "C" __declspec(naked) void FUN_00436840_00436840() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bc85h
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
        mov dword ptr [ebp - 28h], 8
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 30h]
        add edx, 8
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 0
        mov dword ptr [ebp - 4], 0
        mov ecx, 0fffffffeh
        add ecx, 1
        cmp dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes 0F 87 DF 00 00 00: ja 0x436981
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 86 D5 00 00 00: jbe 0x436981
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x436957
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 80h
        ; Exact mapped bytes 76 11: jbe 0x4368d0
        __asm _emit 0x76
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes E8 98 5B 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x5b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 7F: jmp 0x43694f
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov eax, dword ptr [ebp - 28h]
        sub eax, 1
        shr eax, 3
        lea ecx, [eax*4 + 685054h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x4368f9
        __asm _emit 0x74
        __asm _emit 0x0d
        push 685094h
        ; Exact mapped bytes E8 0A BD FF FF: call 0x432600
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0C: je 0x436917
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 0F: jmp 0x436926
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes E8 60 E0 FF FF: call 0x434980
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x436949
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [ebp - 24h], 685094h
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes EB 07: jmp 0x43695e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes EB 0D: jmp 0x43698e
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 75 F6 FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 4]
        mov byte ptr [edx], 0
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
