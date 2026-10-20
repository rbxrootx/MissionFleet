// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E61D0 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_587e61d0() {
    __asm {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 20d44h], 2
        push edi
        ; Exact mapped bytes 7E 7F: jle 0x587e6260
        __asm _emit 0x7e
        __asm _emit 0x7f
        push ebp
        mov ebp, dword ptr [esi + 20d44h]
        ; Exact mapped bytes E8 49 6A 19 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x6a
        __asm _emit 0x19
        __asm _emit 0x00
        cdq
        idiv ebp
        mov ebx, edx
        sub ebp, ebx
        test ebx, ebx
        ; Exact mapped bytes 75 03: jne 0x587e61fb
        __asm _emit 0x75
        __asm _emit 0x03
        lea ebx, [edx + 1]
        test ebp, ebp
        ; Exact mapped bytes 75 05: jne 0x587e6204
        __asm _emit 0x75
        __asm _emit 0x05
        mov ebp, 1
        mov eax, dword ptr [esi + 10524h]
        mov ecx, dword ptr [eax + 54h]
        mov edx, dword ptr [eax + 50h]
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes E8 19 6A 19 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x6a
        __asm _emit 0x19
        __asm _emit 0x00
        cdq
        idiv ebp
        mov eax, edx
        cdq
        sub eax, edx
        mov edi, eax
        mov eax, ebp
        cdq
        sub eax, edx
        sar edi, 1
        sar eax, 1
        sub edi, eax
        add edi, dword ptr [esp + 10h]
        ; Exact mapped bytes E8 FB 69 19 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x69
        __asm _emit 0x19
        __asm _emit 0x00
        cdq
        idiv ebx
        mov eax, ebx
        pop ebp
        mov ecx, edx
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [esi + 10524h]
        mov dword ptr [eax + 50h], ecx
        mov dword ptr [eax + 54h], edi
        dec dword ptr [esi + 20d44h]
        mov eax, dword ptr [esi + 3a4h]
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x587e62ab
        __asm _emit 0x74
        __asm _emit 0x41
        dec eax
        mov dword ptr [esi + 3a4h], eax
        mov eax, dword ptr [esi + 10524h]
        mov edi, dword ptr [eax + 54h]
        mov ebx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 B4 69 19 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x69
        __asm _emit 0x19
        __asm _emit 0x00
        cdq
        mov ecx, 3
        idiv ecx
        sub edi, edx
        inc edi
        ; Exact mapped bytes E8 A4 69 19 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x69
        __asm _emit 0x19
        __asm _emit 0x00
        cdq
        mov ecx, 5
        idiv ecx
        mov esi, dword ptr [esi + 10524h]
        mov dword ptr [esi + 54h], edi
        sub ebx, edx
        add ebx, 2
        mov dword ptr [esi + 50h], ebx
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}
