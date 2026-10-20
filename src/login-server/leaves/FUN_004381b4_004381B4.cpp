// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004381B4 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_004381b4_004381B4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov eax, dword ptr [ebp + 8]
        push esi
        push edi
        lea edi, [eax - 3ch]
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [edi + 38h]
        ; Exact mapped bytes 0F 86 89 00 00 00: jbe 0x438257
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        cmp dword ptr [edi + 2ch], esi
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x43825e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, edi
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        test eax, eax
        ; Exact mapped bytes 74 71: je 0x438259
        __asm _emit 0x74
        __asm _emit 0x71
        cmp dword ptr [edi + 28h], esi
        ; Exact mapped bytes 74 6C: je 0x438259
        __asm _emit 0x74
        __asm _emit 0x6c
        push ebx
        push 3
        mov ebx, 200h
        push 209h
        push ebx
        lea eax, [ebp - 1ch]
        push esi
        ; Exact mapped bytes 8B 35 C0 C4 43 00: mov esi, dword ptr [0x43c4c0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xc0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [edi + 2ch], 1
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        push 3
        ; Exact mapped bytes 74 0E: je 0x438223
        __asm _emit 0x74
        __asm _emit 0x0e
        push 209h
        push ebx
        lea eax, [ebp - 1ch]
        push 0
        push eax
        ; Exact mapped bytes EB EA: jmp 0x43820d
        __asm _emit 0xeb
        __asm _emit 0xea
        push 108h
        mov ebx, 100h
        push ebx
        lea eax, [ebp - 1ch]
        push 0
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x438243
        __asm _emit 0x74
        __asm _emit 0x09
        push 3
        push 108h
        ; Exact mapped bytes EB EA: jmp 0x43822d
        __asm _emit 0xeb
        __asm _emit 0xea
        mov eax, dword ptr [edi]
        push dword ptr [ebp + 0ch]
        mov ecx, edi
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        and dword ptr [edi + 2ch], 0
        push 1
        pop eax
        pop ebx
        ; Exact mapped bytes EB 2C: jmp 0x438283
        __asm _emit 0xeb
        __asm _emit 0x2c
        xor esi, esi
        cmp dword ptr [edi + 2ch], esi
        ; Exact mapped bytes 74 04: je 0x438262
        __asm _emit 0x74
        __asm _emit 0x04
        push 2
        ; Exact mapped bytes EB 20: jmp 0x438282
        __asm _emit 0xeb
        __asm _emit 0x20
        push 2
        push esi
        push esi
        lea eax, [ebp - 1ch]
        push esi
        push eax
        ; Exact mapped bytes FF 15 C0 C4 43 00: call dword ptr [0x43c4c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x438280
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [edi]
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, edi
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        push 1
        pop eax
        pop edi
        pop esi
        leave
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
