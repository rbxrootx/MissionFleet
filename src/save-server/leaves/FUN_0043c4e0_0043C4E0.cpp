// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043C4E0 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_0043c4e0_0043C4E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        mov edi, dword ptr [ebp + 8]
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        add ecx, -1
        mov eax, dword ptr [ebp + 8]
        add eax, ecx
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 1ch]
        sub edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 20h]
        sub eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 08: jge 0x43c535
        __asm _emit 0x7d
        __asm _emit 0x08
        lea edx, [ebp - 8]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB 06: jmp 0x43c53b
        __asm _emit 0xeb
        __asm _emit 0x06
        lea eax, [ebp - 4]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edi, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 18h]
        xor edx, edx
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes F3 A6: repe cmpsb byte ptr [esi], byte ptr es:[edi]
        __asm _emit 0xf3
        __asm _emit 0xa6
        ; Exact mapped bytes 74 08: je 0x43c563
        __asm _emit 0x74
        __asm _emit 0x08
        sbb eax, eax
        sbb eax, -1
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 08: je 0x43c57d
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 25: jmp 0x43c5a2
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 09: jge 0x43c58e
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 0ffffffffh
        ; Exact mapped bytes EB 0E: jmp 0x43c59c
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        cmp edx, dword ptr [ebp - 8]
        setg al
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 34h], ecx
        mov eax, dword ptr [ebp - 34h]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
