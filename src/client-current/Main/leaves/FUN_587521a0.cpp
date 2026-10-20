// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587521A0 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_587521a0() {
    __asm {
        sub esp, 20h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 1ch], eax
        cmp dword ptr [esp + 2ch], 0
        mov dword ptr [esp], ecx
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x58752277
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        mov ebp, dword ptr [esp + 28h]
        push esi
        mov esi, dword ptr [ecx + 90h]
        test esi, esi
        ; Exact mapped bytes 74 3C: je 0x58752208
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        mov eax, dword ptr [eax + 6ch]
        mov ecx, ebp
        mov dl, byte ptr [eax]
        cmp dl, byte ptr [ecx]
        ; Exact mapped bytes 75 1A: jne 0x587521f8
        __asm _emit 0x75
        __asm _emit 0x1a
        test dl, dl
        ; Exact mapped bytes 74 12: je 0x587521f4
        __asm _emit 0x74
        __asm _emit 0x12
        mov dl, byte ptr [eax + 1]
        cmp dl, byte ptr [ecx + 1]
        ; Exact mapped bytes 75 0E: jne 0x587521f8
        __asm _emit 0x75
        __asm _emit 0x0e
        add eax, 2
        add ecx, 2
        test dl, dl
        ; Exact mapped bytes 75 E4: jne 0x587521d8
        __asm _emit 0x75
        __asm _emit 0xe4
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x587521fd
        __asm _emit 0xeb
        __asm _emit 0x05
        sbb eax, eax
        sbb eax, -1
        test eax, eax
        ; Exact mapped bytes 74 74: je 0x58752275
        __asm _emit 0x74
        __asm _emit 0x74
        mov esi, dword ptr [esi + 54h]
        test esi, esi
        ; Exact mapped bytes 75 C8: jne 0x587521d0
        __asm _emit 0x75
        __asm _emit 0xc8
        push ebx
        push edi
        mov edi, dword ptr [esp + 38h]
        xor esi, esi
        xor ebx, ebx
        dec edi
        xor eax, eax
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 28h], eax
        mov al, byte ptr [esi + ebp]
        cmp al, 3bh
        ; Exact mapped bytes 74 13: je 0x58752247
        __asm _emit 0x74
        __asm _emit 0x13
        lea ecx, [esp + 14h]
        cmp esi, edi
        ; Exact mapped bytes 74 0B: je 0x58752247
        __asm _emit 0x74
        __asm _emit 0x0b
        inc esi
        mov byte ptr [ecx], al
        mov al, byte ptr [esi + ebp]
        inc ecx
        cmp al, 3bh
        ; Exact mapped bytes 75 F1: jne 0x58752238
        __asm _emit 0x75
        __asm _emit 0xf1
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes E8 AB FD FF FF: call 0x58752000
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, edi
        ; Exact mapped bytes 74 1A: je 0x58752273
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 10h]
        cmp dword ptr [eax + 0a0h], edx
        ; Exact mapped bytes 74 0A: je 0x58752273
        __asm _emit 0x74
        __asm _emit 0x0a
        inc ebx
        inc esi
        cmp ebx, 1000h
        ; Exact mapped bytes 7C A0: jl 0x58752213
        __asm _emit 0x7c
        __asm _emit 0xa0
        pop edi
        pop ebx
        pop esi
        pop ebp
        mov ecx, dword ptr [esp + 1ch]
        xor ecx, esp
        ; Exact mapped bytes E8 58 A9 22 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xa9
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 20h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
