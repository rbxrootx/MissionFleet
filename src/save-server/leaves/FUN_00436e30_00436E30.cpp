// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436E30 .. +0x1DD bytes.
extern "C" __declspec(naked) void FUN_00436e30_00436E30() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bce2h
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
        sub esp, 54h
        mov dword ptr [ebp - 54h], ecx
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 54h]
        add edx, 8
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 0
        mov dword ptr [ebp - 4], 0
        mov cl, byte ptr [ebp - 18h]
        mov byte ptr [ebp - 14h], cl
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4ch], eax
        mov cl, byte ptr [ebp - 24h]
        mov byte ptr [ebp - 20h], cl
        mov edx, dword ptr [ebp - 50h]
        sub edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 38h], eax
        mov ecx, 0fffffffeh
        add ecx, 1
        cmp dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes 0F 87 D6 00 00 00: ja 0x436f8e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 0F 86 CC 00 00 00: jbe 0x436f8e
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x436f64
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 80h
        ; Exact mapped bytes 76 11: jbe 0x436ee6
        __asm _emit 0x76
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 82 55 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x55
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 76: jmp 0x436f5c
        __asm _emit 0xeb
        __asm _emit 0x76
        mov eax, dword ptr [ebp - 38h]
        sub eax, 1
        shr eax, 3
        lea ecx, [eax*4 + 685054h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 0A: je 0x436f0c
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, 685094h
        ; Exact mapped bytes E8 14 91 FF FF: call 0x430020
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 0C: je 0x436f2a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 0F: jmp 0x436f39
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 4D DA FF FF: call 0x434980
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 0A: je 0x436f56
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, 685094h
        ; Exact mapped bytes E8 BA 91 FF FF: call 0x430110
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x436f6b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes EB 0D: jmp 0x436f9b
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 68 F0 FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 40h]
        cmp ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 75 08: jne 0x436fbf
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 60h], edx
        ; Exact mapped bytes EB 22: jmp 0x436fe1
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 40h]
        sub eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        ; Exact mapped bytes E8 8D EC 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 40h]
        sub ecx, dword ptr [ebp - 3ch]
        add eax, ecx
        mov dword ptr [ebp - 60h], eax
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + 4]
        mov byte ptr [edx], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 54h]
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
