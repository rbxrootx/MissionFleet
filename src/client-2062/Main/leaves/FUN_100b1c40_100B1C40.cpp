// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B1C40 .. +0xE4 bytes.
extern "C" __declspec(naked) void FUN_100b1c40_100B1C40() {
    __asm {
        push ebx
        mov ebx, 10h
        push ebp
        mov eax, 18h
        push esi
        sub ebx, ecx
        push edi
        mov edi, dword ptr [esp + 14h]
        sub eax, ecx
        mov esi, 1ch
        lea edx, [ecx + 58h]
        mov dword ptr [esp + 14h], eax
        mov ecx, dword ptr [edi + 164h]
        lea eax, [esi - 2]
        cmp ecx, eax
        ; Exact mapped bytes 7E 16: jle 0x100b1c85
        __asm _emit 0x7e
        __asm _emit 0x16
        test eax, eax
        ; Exact mapped bytes 7C 12: jl 0x100b1c85
        __asm _emit 0x7c
        __asm _emit 0x12
        mov eax, dword ptr [edi + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100b1c85
        __asm _emit 0x74
        __asm _emit 0x08
        lea ecx, [ebx + edx]
        mov eax, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100b1c87
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edx - 8]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100b1cb9
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebp, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        cmp dword ptr [edi + 164h], esi
        ; Exact mapped bytes 7E 19: jle 0x100b1cda
        __asm _emit 0x7e
        __asm _emit 0x19
        test esi, esi
        ; Exact mapped bytes 7C 15: jl 0x100b1cda
        __asm _emit 0x7c
        __asm _emit 0x15
        mov eax, dword ptr [edi + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x100b1cda
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [esp + 14h]
        add ecx, edx
        mov eax, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100b1cdc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edx]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100b1d0d
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebp, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        add edx, 4
        inc esi
        lea ecx, [esi - 1ch]
        cmp ecx, 2
        ; Exact mapped bytes 0F 8C 45 FF FF FF: jl 0x100b1c62
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
