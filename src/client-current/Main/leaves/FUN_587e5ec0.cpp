// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E5EC0 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_587e5ec0() {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [ecx + 10548h]
        mov eax, 0aaaaaaaah
        xor dword ptr [ecx + 1054ch], eax
        xor dword ptr [ecx + 10550h], eax
        push esi
        mov esi, dword ptr [ecx + 1054ch]
        push edi
        mov edi, dword ptr [ecx + 10550h]
        test ebp, ebp
        ; Exact mapped bytes 74 65: je 0x587e5f50
        __asm _emit 0x74
        __asm _emit 0x65
        mov edx, dword ptr [esp + 14h]
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov ebx, edx
        shr ebx, 1fh
        add ebx, edx
        cmp ebx, esi
        ; Exact mapped bytes 7D 4C: jge 0x587e5f50
        __asm _emit 0x7d
        __asm _emit 0x4c
        test ebx, ebx
        ; Exact mapped bytes 7E 48: jle 0x587e5f50
        __asm _emit 0x7e
        __asm _emit 0x48
        mov edx, dword ptr [esp + 18h]
        mov eax, 2fa0be83h
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp eax, edi
        ; Exact mapped bytes 7D 2F: jge 0x587e5f50
        __asm _emit 0x7d
        __asm _emit 0x2f
        test eax, eax
        ; Exact mapped bytes 7E 2B: jle 0x587e5f50
        __asm _emit 0x7e
        __asm _emit 0x2b
        imul eax, esi
        xor edi, 0aaaaaaaah
        xor esi, 0aaaaaaaah
        add eax, ebx
        mov dword ptr [ecx + 10550h], edi
        pop edi
        mov dword ptr [ecx + 1054ch], esi
        movzx eax, byte ptr [eax + ebp]
        pop esi
        pop ebp
        and eax, 1
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        xor edi, 0aaaaaaaah
        xor esi, 0aaaaaaaah
        mov dword ptr [ecx + 10550h], edi
        pop edi
        mov dword ptr [ecx + 1054ch], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
