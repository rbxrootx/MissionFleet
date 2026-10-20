// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10021CD0 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_10021cd0_10021CD0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, 1
        xor esi, esi
        test ebx, ebx
        mov edx, ebx
        mov ecx, edi
        ; Exact mapped bytes 74 32: je 0x10021d18
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        ; Exact mapped bytes 74 01: je 0x10021cfa
        __asm _emit 0x74
        __asm _emit 0x01
        inc esi
        cmp esi, 1
        ; Exact mapped bytes 7E 15: jle 0x10021d14
        __asm _emit 0x7e
        __asm _emit 0x15
        lea ecx, [ecx + ecx*4]
        xor esi, esi
        shl ecx, 1
        cmp ecx, 64h
        ; Exact mapped bytes 7C 09: jl 0x10021d14
        __asm _emit 0x7c
        __asm _emit 0x09
        lea eax, [edi + edi*4]
        lea edi, [eax + eax*4]
        shl edi, 2
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x10021ce6
        __asm _emit 0x75
        __asm _emit 0xce
        mov eax, ebx
        cdq
        idiv edi
        pop edi
        pop esi
        pop ebx
        mov eax, dword ptr [eax*4 + 101ba90ch]
        imul eax, ecx
        ret
    }
}
