// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AF730 .. +0x166 bytes.
extern "C" __declspec(naked) void FUN_587af730_587AF730() {
    __asm {
        mov eax, dword ptr [esp + 0ch]
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 0F 84 48 01 00 00: je 0x587af88e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax], 31h
        ; Exact mapped bytes 0F 85 3F 01 00 00: jne 0x587af88e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 18h], 38h
        ; Exact mapped bytes 0F 85 34 01 00 00: jne 0x587af88e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 75 06: jne 0x587af764
        __asm _emit 0x75
        __asm _emit 0x06
        pop edi
        lea eax, [esi - 2]
        pop esi
        ret
        mov eax, dword ptr [esi + 20h]
        mov dword ptr [esi + 18h], 0
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x587af785
        __asm _emit 0x75
        __asm _emit 0x13
        mov dword ptr [esi + 28h], eax
        xor ecx, ecx
        mov dword ptr [esi + 20h], 587b0220h
        mov eax, 587b0220h
        ; Exact mapped bytes EB 03: jmp 0x587af788
        __asm _emit 0xeb
        __asm _emit 0x03
        mov ecx, dword ptr [esi + 28h]
        cmp dword ptr [esi + 24h], 0
        ; Exact mapped bytes 75 07: jne 0x587af795
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [esi + 24h], 587b0240h
        push ebp
        push 1bd0h
        push 1
        push ecx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ebp, eax
        add esp, 0ch
        test ebp, ebp
        ; Exact mapped bytes 75 07: jne 0x587af7b0
        __asm _emit 0x75
        __asm _emit 0x07
        lea eax, [ebp - 4]
        pop ebp
        pop edi
        pop esi
        ret
        push ebx
        push 1bd0h
        push 0
        push ebp
        ; Exact mapped bytes E8 52 D6 09 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [esi + 1ch], ebp
        add esp, 0ch
        mov dword ptr [ebp], esi
        mov dword ptr [ebp + 38h], 0
        mov dword ptr [ebp + 4], 3f34h
        cmp dword ptr [esi + 20h], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x587af86f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 24h], 0
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x587af86f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 7F: je 0x587af86f
        __asm _emit 0x74
        __asm _emit 0x7f
        cmp dword ptr [eax], esi
        ; Exact mapped bytes 75 7B: jne 0x587af86f
        __asm _emit 0x75
        __asm _emit 0x7b
        mov eax, dword ptr [eax + 4]
        sub eax, 3f34h
        cmp eax, 1fh
        ; Exact mapped bytes 77 6E: ja 0x587af86f
        __asm _emit 0x77
        __asm _emit 0x6e
        mov eax, dword ptr [esi + 1ch]
        mov dword ptr [esp + 1ch], eax
        test edi, edi
        ; Exact mapped bytes 79 0B: jns 0x587af817
        __asm _emit 0x79
        __asm _emit 0x0b
        cmp edi, -0fh
        ; Exact mapped bytes 7C 5E: jl 0x587af86f
        __asm _emit 0x7c
        __asm _emit 0x5e
        xor ebx, ebx
        neg edi
        ; Exact mapped bytes EB 10: jmp 0x587af827
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ebx, edi
        shr ebx, 4
        add ebx, 5
        cmp edi, 30h
        ; Exact mapped bytes 7D 03: jge 0x587af827
        __asm _emit 0x7d
        __asm _emit 0x03
        and edi, 0fh
        test edi, edi
        ; Exact mapped bytes 74 0A: je 0x587af835
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp edi, 8
        ; Exact mapped bytes 7C 3F: jl 0x587af86f
        __asm _emit 0x7c
        __asm _emit 0x3f
        cmp edi, 0fh
        ; Exact mapped bytes 7F 3A: jg 0x587af86f
        __asm _emit 0x7f
        __asm _emit 0x3a
        mov ecx, dword ptr [eax + 38h]
        test ecx, ecx
        ; Exact mapped bytes 74 1C: je 0x587af858
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp dword ptr [eax + 28h], edi
        ; Exact mapped bytes 74 17: je 0x587af858
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [esi + 24h]
        push ecx
        push dword ptr [esi + 28h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esp + 24h]
        add esp, 8
        mov dword ptr [eax + 38h], 0
        push esi
        mov dword ptr [eax + 0ch], ebx
        mov dword ptr [eax + 28h], edi
        ; Exact mapped bytes E8 3C 00 00 00: call 0x587af8a0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        test edi, edi
        ; Exact mapped bytes 74 1A: je 0x587af887
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes EB 05: jmp 0x587af874
        __asm _emit 0xeb
        __asm _emit 0x05
        mov edi, 0fffffffeh
        mov ecx, dword ptr [esi + 24h]
        push ebp
        push dword ptr [esi + 28h]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        add esp, 8
        mov dword ptr [esi + 1ch], 0
        pop ebx
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        ret
        pop edi
        mov eax, 0fffffffah
        pop esi
        ret
    }
}
