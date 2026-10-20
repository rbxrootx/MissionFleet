// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58870B79 .. +0x103 bytes.
extern "C" __declspec(naked) void FUN_58870b79_58870B79() {
    __asm {
        push 14h
        push 588ed5f0h
        ; Exact mapped bytes E8 DB 1B FC FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x1b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edi, dword ptr [ebp + 8]
        cmp edi, -2
        ; Exact mapped bytes 75 1E: jne 0x58870bab
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 14h]
        mov byte ptr [eax + 24h], 1
        and dword ptr [eax + 20h], 0
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 9
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x58870c6c
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 78 0F: js 0x58870bbe
        __asm _emit 0x78
        __asm _emit 0x0f
        ; Exact mapped bytes 3B 3D B0 9B 96 58: cmp edi, dword ptr [0x58969bb0]
        __asm _emit 0x3b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x9b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 73 07: jae 0x58870bbe
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        inc eax
        xor esi, esi
        ; Exact mapped bytes EB 04: jmp 0x58870bc2
        __asm _emit 0xeb
        __asm _emit 0x04
        xor esi, esi
        mov eax, esi
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x58870beb
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 14h]
        mov byte ptr [eax + 24h], 1
        mov dword ptr [eax + 20h], esi
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 9
        push eax
        push esi
        push esi
        push esi
        push esi
        push esi
        ; Exact mapped bytes E8 48 03 FE FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 18h
        ; Exact mapped bytes EB B8: jmp 0x58870ba3
        __asm _emit 0xeb
        __asm _emit 0xb8
        mov ecx, edi
        sar ecx, 6
        mov dword ptr [ebp - 20h], ecx
        mov eax, edi
        and eax, 3fh
        imul edx, eax, 38h
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ecx*4 + 589699b0h]
        test byte ptr [eax + edx + 28h], 1
        ; Exact mapped bytes 74 BA: je 0x58870bc6
        __asm _emit 0x74
        __asm _emit 0xba
        push edi
        ; Exact mapped bytes E8 63 8B 00 00: call 0x58879775
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        or ebx, 0ffffffffh
        mov dword ptr [ebp - 1ch], ebx
        mov dword ptr [ebp - 4], esi
        mov eax, dword ptr [ebp - 20h]
        mov eax, dword ptr [eax*4 + 589699b0h]
        mov ecx, dword ptr [ebp - 24h]
        test byte ptr [ecx + eax + 28h], 1
        ; Exact mapped bytes 75 17: jne 0x58870c47
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 14h]
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 9
        mov byte ptr [eax + 24h], 1
        mov dword ptr [eax + 20h], esi
        ; Exact mapped bytes EB 17: jmp 0x58870c5e
        __asm _emit 0xeb
        __asm _emit 0x17
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push edi
        ; Exact mapped bytes E8 34 00 00 00: call 0x58870c8a
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ebx, eax
        mov dword ptr [ebp - 1ch], ebx
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 18 00 00 00: call 0x58870c82
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
