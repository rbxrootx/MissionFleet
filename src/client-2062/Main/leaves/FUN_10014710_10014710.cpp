// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10014710 .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_10014710_10014710() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        mov ebx, dword ptr [ecx + 60h]
        push ebp
        mov ebp, dword ptr [ecx + 5ch]
        push esi
        mov esi, dword ptr [ecx + 68h]
        push edi
        mov edi, dword ptr [ecx + 64h]
        sub esi, ebx
        sub edi, ebp
        cmp eax, -1
        mov dword ptr [ecx + 74h], edi
        mov dword ptr [ecx + 78h], esi
        ; Exact mapped bytes 75 35: jne 0x10014768
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, 66666667h
        imul edi
        mov eax, edx
        sar eax, 2
        mov edx, eax
        shr edx, 1fh
        add eax, edx
        cdq
        xor eax, edx
        sub eax, edx
        mov dword ptr [ecx + 7ch], eax
        mov eax, 66666667h
        imul esi
        mov eax, edx
        sar eax, 2
        mov edx, eax
        shr edx, 1fh
        add eax, edx
        cdq
        xor eax, edx
        sub eax, edx
        ; Exact mapped bytes EB 03: jmp 0x1001476b
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [ecx + 7ch], eax
        mov ebx, dword ptr [ecx + 7ch]
        mov dword ptr [ecx + 80h], eax
        test ebx, ebx
        ; Exact mapped bytes 75 05: jne 0x1001477d
        __asm _emit 0x75
        __asm _emit 0x05
        mov ebx, 1
        lea eax, [edi + edi*4]
        mov ebp, dword ptr [ecx + 80h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ebx
        test ebp, ebp
        mov ebx, 1
        mov dword ptr [ecx + 8ch], eax
        ; Exact mapped bytes 74 02: je 0x100147a3
        __asm _emit 0x74
        __asm _emit 0x02
        mov ebx, ebp
        lea eax, [esi + esi*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ebx
        test edi, edi
        mov ebx, 1
        mov dword ptr [ecx + 90h], eax
        ; Exact mapped bytes 74 02: je 0x100147c3
        __asm _emit 0x74
        __asm _emit 0x02
        mov ebx, edi
        lea eax, [esi + esi*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        cdq
        idiv ebx
        cdq
        mov ebx, eax
        xor ebx, edx
        sub ebx, edx
        test esi, esi
        mov dword ptr [ecx + 9ch], ebx
        ; Exact mapped bytes 75 05: jne 0x100147e5
        __asm _emit 0x75
        __asm _emit 0x05
        mov esi, 1
        lea eax, [edi + edi*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        cdq
        idiv esi
        cdq
        xor eax, edx
        sub eax, edx
        cmp ebx, 64h
        mov dword ptr [ecx + 0a0h], eax
        ; Exact mapped bytes 7F 10: jg 0x10014811
        __asm _emit 0x7f
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 7ch]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [ecx + 0a8h], eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        mov dword ptr [ecx + 0a8h], ebp
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
