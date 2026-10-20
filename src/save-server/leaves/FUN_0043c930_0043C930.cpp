// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043C930 .. +0x202 bytes.
extern "C" __declspec(naked) void FUN_0043c930_0043C930() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bd75h
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
        sub esp, 44h
        mov dword ptr [ebp - 48h], ecx
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 48h]
        add edx, 8
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 0
        mov dword ptr [ebp - 4], 0
        mov ecx, 0fffffffeh
        add ecx, 1
        cmp dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 0F 87 80 01 00 00: ja 0x43cb0b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 86 76 01 00 00: jbe 0x43cb0b
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 42 01 00 00: je 0x43cae1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 80h
        ; Exact mapped bytes 76 14: jbe 0x43c9bc
        __asm _emit 0x76
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 AF FA 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xfa
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes E9 1D 01 00 00: jmp 0x43cad9
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        shr eax, 3
        lea ecx, [eax*4 + 685054h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x43c9e5
        __asm _emit 0x74
        __asm _emit 0x0d
        push 685094h
        ; Exact mapped bytes E8 1E 5C FF FF: call 0x432600
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0F: je 0x43ca06
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x43cab0
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 40h], edx
        mov dword ptr [ebp - 30h], 14h
        mov eax, dword ptr [ebp - 40h]
        add eax, 7
        and al, 0f8h
        mov dword ptr [ebp - 40h], eax
        lea ecx, [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 35 8E FF FF: call 0x435860
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 30h], 1
        ; Exact mapped bytes 75 08: jne 0x43ca3f
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 71: jmp 0x43cab0
        __asm _emit 0xeb
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 40h]
        sub ecx, 1
        shr ecx, 3
        lea edx, [ecx*4 + 685054h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 28h]
        add ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [edx], eax
        mov dword ptr [ebp - 34h], 1
        ; Exact mapped bytes EB 09: jmp 0x43ca7b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 1
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 30h]
        sub ecx, 1
        cmp ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 75 0B: jne 0x43caa0
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx], 0
        ; Exact mapped bytes EB 0A: jmp 0x43caaa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB C8: jmp 0x43ca72
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x43cad3
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [ebp - 44h], 685094h
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 50h], ecx
        ; Exact mapped bytes EB 07: jmp 0x43cae8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes EB 0D: jmp 0x43cb18
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 EB 94 FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 48h]
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
