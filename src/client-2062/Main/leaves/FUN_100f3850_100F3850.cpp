// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F3850 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_100f3850_100F3850() {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 14h]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 10h], edi
        mov edx, dword ptr [edi + ebp*4 + 408h]
        dec edx
        mov dword ptr [edi + ebp*4 + 408h], edx
        mov ebx, dword ptr [edi + ebp*4 + 1024h]
        mov edx, dword ptr [ebx + 10h]
        mov eax, dword ptr [ebx + 0ch]
        cmp edx, eax
        ; Exact mapped bytes 0F 84 FB 00 00 00: je 0x100f397e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 4E: jge 0x100f38d3
        __asm _emit 0x7d
        __asm _emit 0x4e
        mov ebp, dword ptr [esp + 18h]
        mov esi, dword ptr [ebx + 14h]
        mov ecx, dword ptr [esi + edx*4]
        lea edi, [esi + edx*4]
        cmp ecx, ebp
        ; Exact mapped bytes 75 30: jne 0x100f38c6
        __asm _emit 0x75
        __asm _emit 0x30
        lea ecx, [eax - 1]
        cmp edx, ecx
        ; Exact mapped bytes 74 1B: je 0x100f38b8
        __asm _emit 0x74
        __asm _emit 0x1b
        sub eax, edx
        lea esi, [esi + edx*4 + 4]
        lea ecx, [eax*4 - 4]
        mov eax, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov ecx, dword ptr [ebx + 0ch]
        mov eax, dword ptr [ebx + 8]
        dec ecx
        dec eax
        mov dword ptr [ebx + 0ch], ecx
        mov dword ptr [ebx + 8], eax
        mov eax, dword ptr [ebx + 0ch]
        inc edx
        cmp edx, eax
        ; Exact mapped bytes 7C BB: jl 0x100f3889
        __asm _emit 0x7c
        __asm _emit 0xbb
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x100f3976
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 4]
        mov esi, edx
        cmp esi, eax
        ; Exact mapped bytes 7D 48: jge 0x100f3924
        __asm _emit 0x7d
        __asm _emit 0x48
        mov ecx, dword ptr [ebx + 14h]
        mov edx, dword ptr [esp + 18h]
        cmp dword ptr [ecx + esi*4], edx
        ; Exact mapped bytes 75 34: jne 0x100f391c
        __asm _emit 0x75
        __asm _emit 0x34
        mov eax, dword ptr [ebx + 10h]
        cmp esi, eax
        ; Exact mapped bytes 74 1F: je 0x100f390e
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, eax
        shl edx, 1eh
        sub edx, eax
        add edx, esi
        shl edx, 2
        push edx
        lea edx, [ecx + eax*4]
        lea eax, [ecx + eax*4 + 4]
        push edx
        push eax
        ; Exact mapped bytes FF 15 60 51 17 10: call dword ptr [0x10175160]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        mov ecx, dword ptr [ebx + 10h]
        mov eax, dword ptr [ebx + 8]
        inc ecx
        dec eax
        mov dword ptr [ebx + 10h], ecx
        mov dword ptr [ebx + 8], eax
        mov eax, dword ptr [ebx + 4]
        inc esi
        cmp esi, eax
        ; Exact mapped bytes 7C B8: jl 0x100f38dc
        __asm _emit 0x7c
        __asm _emit 0xb8
        mov ecx, dword ptr [ebx + 0ch]
        xor eax, eax
        test ecx, ecx
        ; Exact mapped bytes 7E 51: jle 0x100f397e
        __asm _emit 0x7e
        __asm _emit 0x51
        mov edx, dword ptr [ebx + 14h]
        mov esi, dword ptr [esp + 18h]
        mov ebp, dword ptr [edx + eax*4]
        lea edi, [edx + eax*4]
        cmp ebp, esi
        ; Exact mapped bytes 75 30: jne 0x100f396e
        __asm _emit 0x75
        __asm _emit 0x30
        lea esi, [ecx - 1]
        cmp eax, esi
        ; Exact mapped bytes 74 1B: je 0x100f3960
        __asm _emit 0x74
        __asm _emit 0x1b
        sub ecx, eax
        lea esi, [edx + eax*4 + 4]
        lea ecx, [ecx*4 - 4]
        mov edx, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov edx, dword ptr [ebx + 0ch]
        mov ecx, dword ptr [ebx + 8]
        dec edx
        inc ecx
        mov dword ptr [ebx + 0ch], edx
        mov dword ptr [ebx + 8], ecx
        mov ecx, dword ptr [ebx + 0ch]
        inc eax
        cmp eax, ecx
        ; Exact mapped bytes 7C B7: jl 0x100f392d
        __asm _emit 0x7c
        __asm _emit 0xb7
        mov ebp, dword ptr [esp + 1ch]
        mov edi, dword ptr [esp + 10h]
        mov eax, dword ptr [edi + ebp*4 + 408h]
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x100f39a5
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [edi + ebp*4 + 808h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x100f39a5
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + ebp*4 + 808h], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
