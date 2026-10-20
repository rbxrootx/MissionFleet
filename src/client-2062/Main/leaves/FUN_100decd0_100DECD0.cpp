// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DECD0 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_100decd0_100DECD0() {
    __asm {
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        mov ecx, dword ptr [esp + 10h]
        push edi
        cmp cl, byte ptr [ebp + 0a5h]
        ; Exact mapped bytes 73 30: jae 0x100ded12
        __asm _emit 0x73
        __asm _emit 0x30
        xor edx, edx
        xor edi, edi
        mov dl, byte ptr [ebp + 0a4h]
        xor eax, eax
        test edx, edx
        ; Exact mapped bytes 7E 20: jle 0x100ded12
        __asm _emit 0x7e
        __asm _emit 0x20
        lea esi, [ebp + 0a8h]
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 0D: je 0x100ded0a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ebx, ecx
        and ebx, 0ffh
        cmp edi, ebx
        ; Exact mapped bytes 74 12: je 0x100ded1b
        __asm _emit 0x74
        __asm _emit 0x12
        inc edi
        inc eax
        add esi, 4
        cmp eax, edx
        ; Exact mapped bytes 7C E6: jl 0x100decf8
        __asm _emit 0x7c
        __asm _emit 0xe6
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 2ach]
        push eax
        ; Exact mapped bytes E8 E9 50 02 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
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
