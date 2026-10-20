// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58978C80 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_58978c80() {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 0ch]
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        sub eax, ecx
        ; Exact mapped bytes 79 02: jns 0x58978c91
        __asm _emit 0x79
        __asm _emit 0x02
        neg eax
        push ebx
        push ebp
        push esi
        xor esi, esi
        test eax, eax
        push edi
        ; Exact mapped bytes 74 1F: je 0x58978cba
        __asm _emit 0x74
        __asm _emit 0x1f
        inc esi
        sar eax, 1
        ; Exact mapped bytes 75 FB: jne 0x58978c9b
        __asm _emit 0x75
        __asm _emit 0xfb
        cmp esi, 0bh
        ; Exact mapped bytes 7E 15: jle 0x58978cba
        __asm _emit 0x7e
        __asm _emit 0x15
        mov eax, dword ptr [esp + 14h]
        push eax
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx + 14h], 6
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        mov eax, dword ptr [esp + 20h]
        mov ebx, dword ptr [esp + 24h]
        mov ebp, 589a37c4h
        mov ecx, dword ptr [eax + esi*4]
        inc ecx
        xor edi, edi
        mov dword ptr [eax + esi*4], ecx
        mov eax, dword ptr [ebp]
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 0F BF 04 41: movsx eax, word ptr [ecx + eax*2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x41
        test eax, eax
        ; Exact mapped bytes 75 03: jne 0x58978ce2
        __asm _emit 0x75
        __asm _emit 0x03
        inc edi
        ; Exact mapped bytes EB 61: jmp 0x58978d43
        __asm _emit 0xeb
        __asm _emit 0x61
        cmp edi, 0fh
        ; Exact mapped bytes 7E 1E: jle 0x58978d05
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, edi
        shr ecx, 4
        mov edx, ecx
        neg edx
        shl edx, 4
        add edi, edx
        mov esi, dword ptr [ebx + 3c0h]
        inc esi
        dec ecx
        mov dword ptr [ebx + 3c0h], esi
        ; Exact mapped bytes 75 F0: jne 0x58978cf5
        __asm _emit 0x75
        __asm _emit 0xf0
        test eax, eax
        ; Exact mapped bytes 7D 02: jge 0x58978d0b
        __asm _emit 0x7d
        __asm _emit 0x02
        neg eax
        sar eax, 1
        mov esi, 1
        ; Exact mapped bytes 74 1F: je 0x58978d33
        __asm _emit 0x74
        __asm _emit 0x1f
        inc esi
        sar eax, 1
        ; Exact mapped bytes 75 FB: jne 0x58978d14
        __asm _emit 0x75
        __asm _emit 0xfb
        cmp esi, 0ah
        ; Exact mapped bytes 7E 15: jle 0x58978d33
        __asm _emit 0x7e
        __asm _emit 0x15
        mov eax, dword ptr [esp + 14h]
        push eax
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx + 14h], 6
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        shl edi, 4
        add edi, esi
        mov ecx, dword ptr [ebx + edi*4]
        lea eax, [ebx + edi*4]
        inc ecx
        xor edi, edi
        mov dword ptr [eax], ecx
        add ebp, 4
        cmp ebp, 589a38c0h
        ; Exact mapped bytes 7C 82: jl 0x58978cd0
        __asm _emit 0x7c
        __asm _emit 0x82
        test edi, edi
        ; Exact mapped bytes 7E 02: jle 0x58978d54
        __asm _emit 0x7e
        __asm _emit 0x02
        inc dword ptr [ebx]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
