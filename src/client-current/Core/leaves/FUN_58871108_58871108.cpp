// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58871108 .. +0x114 bytes.
extern "C" __declspec(naked) void FUN_58871108_58871108() {
    __asm {
        push 18h
        push 588ed610h
        ; Exact mapped bytes E8 4C 16 FC FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x16
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ebx, dword ptr [ebp + 8]
        cmp ebx, -2
        ; Exact mapped bytes 75 20: jne 0x5887113c
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 18h]
        mov byte ptr [eax + 24h], 1
        and dword ptr [eax + 20h], 0
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 9
        or edi, 0ffffffffh
        mov edx, edi
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x5887120a
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 78 0F: js 0x5887114f
        __asm _emit 0x78
        __asm _emit 0x0f
        ; Exact mapped bytes 3B 1D B0 9B 96 58: cmp ebx, dword ptr [0x58969bb0]
        __asm _emit 0x3b
        __asm _emit 0x1d
        __asm _emit 0xb0
        __asm _emit 0x9b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 73 07: jae 0x5887114f
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        inc eax
        xor esi, esi
        ; Exact mapped bytes EB 04: jmp 0x58871153
        __asm _emit 0xeb
        __asm _emit 0x04
        xor esi, esi
        mov eax, esi
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x5887117c
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 18h]
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
        ; Exact mapped bytes E8 B7 FD FD FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 18h
        ; Exact mapped bytes EB B6: jmp 0x58871132
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov ecx, ebx
        sar ecx, 6
        mov dword ptr [ebp - 1ch], ecx
        mov eax, ebx
        and eax, 3fh
        imul edx, eax, 38h
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ecx*4 + 589699b0h]
        test byte ptr [eax + edx + 28h], 1
        ; Exact mapped bytes 74 BA: je 0x58871157
        __asm _emit 0x74
        __asm _emit 0xba
        push ebx
        ; Exact mapped bytes E8 D2 85 00 00: call 0x58879775
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        or edi, 0ffffffffh
        mov dword ptr [ebp - 28h], edi
        mov dword ptr [ebp - 24h], edi
        mov dword ptr [ebp - 4], esi
        mov eax, dword ptr [ebp - 1ch]
        mov eax, dword ptr [eax*4 + 589699b0h]
        mov ecx, dword ptr [ebp - 20h]
        test byte ptr [ecx + eax + 28h], 1
        ; Exact mapped bytes 75 19: jne 0x588711dd
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 18h]
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 9
        mov byte ptr [eax + 24h], 1
        mov dword ptr [eax + 20h], esi
        mov esi, edi
        ; Exact mapped bytes EB 1F: jmp 0x588711fc
        __asm _emit 0xeb
        __asm _emit 0x1f
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push ebx
        ; Exact mapped bytes E8 3E 00 00 00: call 0x5887122d
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov edi, eax
        mov dword ptr [ebp - 28h], edi
        mov esi, edx
        mov dword ptr [ebp - 24h], esi
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 1D 00 00 00: call 0x58871225
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, esi
        mov eax, edi
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
