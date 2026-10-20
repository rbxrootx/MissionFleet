// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EDA40 .. +0x16C bytes.
extern "C" __declspec(naked) void FUN_100eda40_100EDA40() {
    __asm {
        push -1
        push 1017401bh
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
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 374h]
        xor eax, 0aaaaaaaah
        mov dword ptr [esi + 1020h], eax
        mov ecx, dword ptr [esi + 0c08h]
        xor ecx, 0aaaaaaaah
        cmp eax, ecx
        ; Exact mapped bytes 76 02: jbe 0x100eda7d
        __asm _emit 0x76
        __asm _emit 0x02
        mov eax, ecx
        mov dword ptr [esi + 1020h], eax
        xor eax, 0aaaaaaaah
        mov dword ptr [esi + 1028h], eax
        mov dword ptr [esi + 1024h], eax
        xor eax, 0aaaaaaaah
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        mov dword ptr [esi + 0c3ch], eax
        mov ecx, dword ptr [esi + 0c08h]
        mov eax, dword ptr [esi + 1020h]
        xor ecx, 0aaaaaaaah
        cmp eax, ecx
        ; Exact mapped bytes 7D 22: jge 0x100edae0
        __asm _emit 0x7d
        __asm _emit 0x22
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x100edad6
        __asm _emit 0x74
        __asm _emit 0x14
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        cdq
        idiv ecx
        mov dword ptr [esi + 1030h], eax
        ; Exact mapped bytes EB 0F: jmp 0x100edae5
        __asm _emit 0xeb
        __asm _emit 0x0f
        xor eax, eax
        mov dword ptr [esi + 1030h], eax
        ; Exact mapped bytes EB 05: jmp 0x100edae5
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 64h
        push 8ch
        mov dword ptr [esi + 1030h], eax
        ; Exact mapped bytes E8 AB EC 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xec
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 8], eax
        test eax, eax
        mov dword ptr [esp + 14h], 0
        ; Exact mapped bytes 74 1E: je 0x100edb26
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        push 40h
        push 0
        add ecx, 28h
        push 0
        sub edx, 5ah
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FC 91 FA FF: call 0x10096d20
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x91
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100edb28
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 1020h]
        mov dword ptr [esi + 1034h], eax
        mov ecx, dword ptr [esi + 0c08h]
        push 0
        xor ecx, 0aaaaaaaah
        push 0
        push ecx
        mov ecx, dword ptr [esi + 0e74h]
        push edx
        mov dword ptr [esp + 24h], 0ffffffffh
        mov dl, byte ptr [ecx + 2]
        lea ecx, [esi + 37ch]
        and edx, 1fh
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 77 94 FA FF: call 0x10096fe0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edi, dword ptr [esi + 1034h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 10 27: mov word ptr [edi + 0x26], 0x2710
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x10
        __asm _emit 0x27
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100edb82
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1E 14 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100edb8f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 71 13 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, dword ptr [esi + 1034h]
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
