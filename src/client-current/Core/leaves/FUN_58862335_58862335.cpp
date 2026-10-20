// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58862335 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_58862335_58862335() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov ecx, dword ptr [ebp + 10h]
        xor edx, edx
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        lea eax, [ecx - 1]
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov eax, ecx
        shr eax, 1
        ; Exact mapped bytes 74 4D: je 0x588623a4
        __asm _emit 0x74
        __asm _emit 0x4d
        test cl, 1
        lea ebx, [eax - 1]
        cmovne ebx, eax
        lea ecx, [ebx + edx]
        mov dword ptr [ebp - 8], ecx
        lea ecx, [edi + ecx*8]
        mov esi, dword ptr [ecx]
        mov dword ptr [ebp - 4], esi
        mov esi, dword ptr [ebp + 8]
        cmp esi, dword ptr [ecx]
        ; Exact mapped bytes 74 2B: je 0x588623a0
        __asm _emit 0x74
        __asm _emit 0x2b
        cmp esi, dword ptr [ebp - 4]
        mov ecx, eax
        mov eax, dword ptr [ebp - 8]
        cmovb ecx, ebx
        inc eax
        cmp esi, dword ptr [ebp - 4]
        mov ebx, dword ptr [ebp - 8]
        dec ebx
        cmovae edx, eax
        cmp esi, dword ptr [ebp - 4]
        cmovae ebx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], ebx
        cmp edx, ebx
        ; Exact mapped bytes 76 B8: jbe 0x58862351
        __asm _emit 0x76
        __asm _emit 0xb8
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
        mov eax, ecx
        ; Exact mapped bytes EB F7: jmp 0x5886239b
        __asm _emit 0xeb
        __asm _emit 0xf7
        test ecx, ecx
        ; Exact mapped bytes 74 F1: je 0x58862399
        __asm _emit 0x74
        __asm _emit 0xf1
        lea eax, [edi + edx*8]
        xor ecx, ecx
        cmp esi, dword ptr [eax]
        cmovne eax, ecx
        ; Exact mapped bytes EB E7: jmp 0x5886239b
        __asm _emit 0xeb
        __asm _emit 0xe7
    }
}
