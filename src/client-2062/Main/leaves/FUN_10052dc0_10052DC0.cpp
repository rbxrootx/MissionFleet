// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10052DC0 .. +0x17C bytes.
extern "C" __declspec(naked) void FUN_10052dc0_10052DC0() {
    __asm {
        sub esp, 20h
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 34h]
        mov ebx, ecx
        mov dword ptr [esp + 18h], ebx
        mov eax, dword ptr [edi]
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x10052de6
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 A7 99 11 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x99
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [edi], 0
        mov ebp, dword ptr [esp + 38h]
        mov esi, dword ptr [esp + 3ch]
        mov eax, ebp
        imul eax, esi
        shl eax, 3
        push eax
        ; Exact mapped bytes E8 A4 99 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x99
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [edi], eax
        mov ecx, dword ptr [ebx + 0a0h]
        mov eax, ecx
        add esp, 4
        cdq
        idiv ebp
        mov dword ptr [esp + 20h], eax
        mov eax, dword ptr [ebx + 0a4h]
        cdq
        idiv esi
        mov dword ptr [esp + 24h], eax
        mov eax, dword ptr [ebx + 0a8h]
        cdq
        idiv ebp
        mov dword ptr [esp + 28h], eax
        mov eax, dword ptr [ebx + 0ach]
        cdq
        idiv esi
        mov dword ptr [esp + 2ch], eax
        mov eax, dword ptr [ebx + 0a8h]
        cmp ecx, eax
        ; Exact mapped bytes 7D 0A: jge 0x10052e4b
        __asm _emit 0x7d
        __asm _emit 0x0a
        lea ecx, [esp + 20h]
        mov dword ptr [esp + 34h], ecx
        ; Exact mapped bytes EB 08: jmp 0x10052e53
        __asm _emit 0xeb
        __asm _emit 0x08
        lea edx, [esp + 28h]
        mov dword ptr [esp + 34h], edx
        mov eax, dword ptr [esp + 34h]
        mov eax, dword ptr [eax + 4]
        cdq
        sub eax, edx
        mov edx, dword ptr [esp + 34h]
        mov ecx, eax
        mov eax, dword ptr [edx]
        cdq
        sar ecx, 1
        sub eax, edx
        mov edx, ecx
        sar eax, 1
        imul edx, ecx
        imul eax, eax
        xor ecx, ecx
        add eax, edx
        cmp ebp, ecx
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 0F 8E AE 00 00 00: jle 0x10052f32
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 38h], ecx
        mov dword ptr [esp + 34h], ecx
        mov dword ptr [esp + 14h], ebp
        mov edx, dword ptr [ebx + 80h]
        mov ebp, dword ptr [esp + 34h]
        add edx, ebp
        mov ebp, dword ptr [edi]
        mov dword ptr [ecx + ebp], edx
        mov edx, dword ptr [esp + 38h]
        mov ebp, dword ptr [ebx + 84h]
        sub edx, ebp
        mov ebp, dword ptr [edi]
        test esi, esi
        mov dword ptr [ecx + ebp + 4], edx
        ; Exact mapped bytes 7E 47: jle 0x10052efe
        __asm _emit 0x7e
        __asm _emit 0x47
        xor eax, eax
        xor ebx, ebx
        mov edx, ecx
        mov dword ptr [esp + 10h], esi
        mov esi, dword ptr [edi]
        add edx, 8
        mov ebp, dword ptr [ecx + esi]
        add ebp, ebx
        mov dword ptr [edx + esi - 8], ebp
        mov esi, dword ptr [edi]
        mov ebp, dword ptr [ecx + esi + 4]
        sub ebp, eax
        mov dword ptr [edx + esi - 4], ebp
        mov esi, dword ptr [esp + 20h]
        mov ebp, dword ptr [esp + 24h]
        add ebx, esi
        mov esi, dword ptr [esp + 10h]
        add eax, ebp
        dec esi
        mov dword ptr [esp + 10h], esi
        ; Exact mapped bytes 75 CF: jne 0x10052ec1
        __asm _emit 0x75
        __asm _emit 0xcf
        mov esi, dword ptr [esp + 3ch]
        mov ebx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 1ch]
        mov edx, dword ptr [esp + 28h]
        mov ebp, dword ptr [esp + 34h]
        add ebp, edx
        mov edx, dword ptr [esp + 2ch]
        mov dword ptr [esp + 34h], ebp
        mov ebp, dword ptr [esp + 38h]
        add ebp, edx
        lea edx, [esi*8]
        add ecx, edx
        mov edx, dword ptr [esp + 14h]
        dec edx
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes 0F 85 5E FF FF FF: jne 0x10052e90
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
