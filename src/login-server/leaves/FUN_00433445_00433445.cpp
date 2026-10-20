// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433445 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_00433445_00433445() {
    __asm {
        mov ecx, dword ptr [esp + 8]
        push ebx
        push esi
        mov esi, 104h
        push edi
        push esi
        ; Exact mapped bytes E8 1E AB FF FF: call 0x42df75
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        mov edi, eax
        push esi
        push ebx
        push edi
        ; Exact mapped bytes E8 7D B6 FE FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        push esi
        push dword ptr [esp + 14h]
        push edi
        ; Exact mapped bytes FF 15 28 C2 43 00: call dword ptr [0x43c228]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov cl, byte ptr [edi]
        mov eax, edi
        cmp cl, bl
        ; Exact mapped bytes 74 22: je 0x43349c
        __asm _emit 0x74
        __asm _emit 0x22
        cmp cl, 5ch
        ; Exact mapped bytes 74 05: je 0x433484
        __asm _emit 0x74
        __asm _emit 0x05
        cmp cl, 2fh
        ; Exact mapped bytes 75 0D: jne 0x433491
        __asm _emit 0x75
        __asm _emit 0x0d
        mov cl, byte ptr [eax + 1]
        cmp cl, 5ch
        ; Exact mapped bytes 74 10: je 0x43349c
        __asm _emit 0x74
        __asm _emit 0x10
        cmp cl, 2fh
        ; Exact mapped bytes 74 0B: je 0x43349c
        __asm _emit 0x74
        __asm _emit 0x0b
        push eax
        ; Exact mapped bytes E8 56 C3 FE FF: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov cl, byte ptr [eax]
        ; Exact mapped bytes EB DA: jmp 0x433476
        __asm _emit 0xeb
        __asm _emit 0xda
        cmp byte ptr [eax], bl
        ; Exact mapped bytes 74 4E: je 0x4334ee
        __asm _emit 0x74
        __asm _emit 0x4e
        inc eax
        inc eax
        mov cl, byte ptr [eax]
        cmp cl, bl
        ; Exact mapped bytes 74 13: je 0x4334bb
        __asm _emit 0x74
        __asm _emit 0x13
        cmp cl, 5ch
        ; Exact mapped bytes 74 0E: je 0x4334bb
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp cl, 2fh
        ; Exact mapped bytes 74 09: je 0x4334bb
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 35 C3 FE FF: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB E7: jmp 0x4334a2
        __asm _emit 0xeb
        __asm _emit 0xe7
        cmp byte ptr [eax], bl
        ; Exact mapped bytes 74 07: je 0x4334c6
        __asm _emit 0x74
        __asm _emit 0x07
        push eax
        ; Exact mapped bytes E8 28 C3 FE FF: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov cl, byte ptr [eax]
        cmp cl, bl
        ; Exact mapped bytes 74 0A: je 0x4334d6
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp cl, 5ch
        ; Exact mapped bytes 74 05: je 0x4334d6
        __asm _emit 0x74
        __asm _emit 0x05
        cmp cl, 2fh
        ; Exact mapped bytes 75 E9: jne 0x4334bf
        __asm _emit 0x75
        __asm _emit 0xe9
        cmp byte ptr [eax], bl
        ; Exact mapped bytes 74 03: je 0x4334dd
        __asm _emit 0x74
        __asm _emit 0x03
        mov byte ptr [eax + 1], bl
        mov ecx, dword ptr [esp + 14h]
        push -1
        ; Exact mapped bytes E8 DC AA FF FF: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov cl, byte ptr [edi]
        mov eax, edi
        cmp cl, bl
        ; Exact mapped bytes 74 E0: je 0x4334d6
        __asm _emit 0x74
        __asm _emit 0xe0
        cmp cl, 5ch
        ; Exact mapped bytes 74 DB: je 0x4334d6
        __asm _emit 0x74
        __asm _emit 0xdb
        cmp cl, 2fh
        ; Exact mapped bytes 74 D6: je 0x4334d6
        __asm _emit 0x74
        __asm _emit 0xd6
        push eax
        ; Exact mapped bytes E8 E7 C2 FE FF: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov cl, byte ptr [eax]
        ; Exact mapped bytes EB E7: jmp 0x4334f2
        __asm _emit 0xeb
        __asm _emit 0xe7
    }
}
