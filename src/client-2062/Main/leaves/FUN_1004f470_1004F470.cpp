// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004F470 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_1004f470_1004F470() {
    __asm {
        push edi
        mov edi, ecx
        xor edx, edx
        mov eax, dword ptr [edi + 58h]
        dec eax
        test eax, eax
        ; Exact mapped bytes 7E 3A: jle 0x1004f4b7
        __asm _emit 0x7e
        __asm _emit 0x3a
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 10h]
        push esi
        lea esi, [edi + 0ach]
        mov eax, dword ptr [esi]
        cmp edx, ebp
        setge cl
        ; Exact mapped bytes 66 8B 58 24: mov bx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x24
        and cl, 1
        ; Exact mapped bytes 66 0F B6 C9: movzx cx, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc9
        and ebx, 0fffeh
        add esi, 4
        or ecx, ebx
        inc edx
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi + 58h]
        dec eax
        cmp edx, eax
        ; Exact mapped bytes 7C D6: jl 0x1004f48a
        __asm _emit 0x7c
        __asm _emit 0xd6
        pop esi
        pop ebp
        pop ebx
        pop edi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
