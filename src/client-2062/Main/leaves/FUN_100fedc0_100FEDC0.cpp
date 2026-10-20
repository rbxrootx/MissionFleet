// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FEDC0 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_100fedc0_100FEDC0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov ecx, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 3ch]
        mov ebx, eax
        mov dword ptr [ebp + 8], eax
        sub ebx, ecx
        test edi, edi
        ; Exact mapped bytes 74 3F: je 0x100fee1a
        __asm _emit 0x74
        __asm _emit 0x3f
        test byte ptr [edi + 25h], 20h
        ; Exact mapped bytes 74 2B: je 0x100fee0c
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [edi + 8]
        add ecx, ebx
        mov dword ptr [edi + 8], ecx
        mov esi, dword ptr [edi + 3ch]
        test esi, esi
        ; Exact mapped bytes 74 1C: je 0x100fee0c
        __asm _emit 0x74
        __asm _emit 0x1c
        test byte ptr [esi + 25h], 20h
        ; Exact mapped bytes 74 08: je 0x100fedfe
        __asm _emit 0x74
        __asm _emit 0x08
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 C2 00 00 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 38h]
        mov eax, dword ptr [edi + 3ch]
        cmp esi, eax
        ; Exact mapped bytes 74 04: je 0x100fee0c
        __asm _emit 0x74
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 E4: jne 0x100fedf0
        __asm _emit 0x75
        __asm _emit 0xe4
        mov edi, dword ptr [edi + 38h]
        mov eax, dword ptr [ebp + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 04: je 0x100fee1a
        __asm _emit 0x74
        __asm _emit 0x04
        test edi, edi
        ; Exact mapped bytes 75 C1: jne 0x100feddb
        __asm _emit 0x75
        __asm _emit 0xc1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
