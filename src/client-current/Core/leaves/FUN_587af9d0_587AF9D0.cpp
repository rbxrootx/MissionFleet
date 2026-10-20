// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AF9D0 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_587af9d0_587AF9D0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 14h]
        push edi
        mov edi, dword ptr [esp + 14h]
        test edi, edi
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x587afa6f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 20h], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x587afa6f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 24h], 0
        ; Exact mapped bytes 74 7B: je 0x587afa6f
        __asm _emit 0x74
        __asm _emit 0x7b
        mov eax, dword ptr [edi + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 74: je 0x587afa6f
        __asm _emit 0x74
        __asm _emit 0x74
        cmp dword ptr [eax], edi
        ; Exact mapped bytes 75 70: jne 0x587afa6f
        __asm _emit 0x75
        __asm _emit 0x70
        mov eax, dword ptr [eax + 4]
        sub eax, 3f34h
        cmp eax, 1fh
        ; Exact mapped bytes 77 63: ja 0x587afa6f
        __asm _emit 0x77
        __asm _emit 0x63
        mov ebp, dword ptr [edi + 1ch]
        test esi, esi
        ; Exact mapped bytes 79 0B: jns 0x587afa1e
        __asm _emit 0x79
        __asm _emit 0x0b
        cmp esi, -0fh
        ; Exact mapped bytes 7C 57: jl 0x587afa6f
        __asm _emit 0x7c
        __asm _emit 0x57
        xor ebx, ebx
        neg esi
        ; Exact mapped bytes EB 10: jmp 0x587afa2e
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ebx, esi
        shr ebx, 4
        add ebx, 5
        cmp esi, 30h
        ; Exact mapped bytes 7D 03: jge 0x587afa2e
        __asm _emit 0x7d
        __asm _emit 0x03
        and esi, 0fh
        test esi, esi
        ; Exact mapped bytes 74 0A: je 0x587afa3c
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp esi, 8
        ; Exact mapped bytes 7C 38: jl 0x587afa6f
        __asm _emit 0x7c
        __asm _emit 0x38
        cmp esi, 0fh
        ; Exact mapped bytes 7F 33: jg 0x587afa6f
        __asm _emit 0x7f
        __asm _emit 0x33
        mov eax, dword ptr [ebp + 38h]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x587afa5b
        __asm _emit 0x74
        __asm _emit 0x18
        cmp dword ptr [ebp + 28h], esi
        ; Exact mapped bytes 74 13: je 0x587afa5b
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        push dword ptr [edi + 28h]
        mov eax, dword ptr [edi + 24h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        add esp, 8
        mov dword ptr [ebp + 38h], 0
        push edi
        mov dword ptr [ebp + 0ch], ebx
        mov dword ptr [ebp + 28h], esi
        ; Exact mapped bytes E8 39 FE FF FF: call 0x587af8a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        pop edi
        pop esi
        pop ebp
        mov eax, 0fffffffeh
        pop ebx
        ret
    }
}
