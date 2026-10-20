// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E75F0 .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_587e75f0() {
    __asm {
        sub esp, 18h
        mov eax, dword ptr [esp + 1ch]
        push ebx
        push ebp
        push esi
        lea ebp, [ecx + 21c90h]
        push edi
        mov dword ptr [esp + 10h], 0f11h
        mov dword ptr [esp + 14h], 377h
        mov dword ptr [esp + 18h], 0eb1h
        mov dword ptr [esp + 1ch], 3a7h
        mov dword ptr [esp + 20h], 76fh
        mov dword ptr [esp + 24h], 541h
        mov dword ptr [ecx + 10910h], eax
        xor ebx, ebx
        mov esi, ebp
        ; Exact mapped bytes EB 03: jmp 0x587e7640
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edi, dword ptr [esp + ebx*4 + 10h]
        add edi, dword ptr [ecx + 10910h]
        xor edx, edx
        mov eax, edi
        ; Exact mapped bytes F7 35 AC 49 A2 58: div dword ptr [0x58a249ac]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0xac
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 B4 49 A2 58: mov eax, dword ptr [0x58a249b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        inc ebx
        add esi, 4
        mov edx, dword ptr [eax + edx*4]
        inc edx
        mov dword ptr [esi - 4], edx
        xor edx, edx
        mov eax, edi
        ; Exact mapped bytes F7 35 AC 49 A2 58: div dword ptr [0x58a249ac]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0xac
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 B4 49 A2 58: mov eax, dword ptr [0x58a249b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + edx*4]
        mov edx, dword ptr [esi - 4]
        inc eax
        imul edx, eax
        mov dword ptr [esi - 4], edx
        xor edx, edx
        ; Exact mapped bytes F7 35 AC 49 A2 58: div dword ptr [0x58a249ac]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0xac
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 B4 49 A2 58: mov eax, dword ptr [0x58a249b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [esi - 4]
        mov eax, dword ptr [eax + edx*4]
        inc eax
        imul edi, eax
        xor edx, edx
        mov dword ptr [esi - 4], edi
        ; Exact mapped bytes F7 35 AC 49 A2 58: div dword ptr [0x58a249ac]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0xac
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 B4 49 A2 58: mov eax, dword ptr [0x58a249b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + edx*4]
        inc edx
        imul edx, edi
        cmp ebx, 6
        mov dword ptr [esi - 4], edx
        ; Exact mapped bytes 7C 8A: jl 0x587e7640
        __asm _emit 0x7c
        __asm _emit 0x8a
        mov edx, dword ptr [ecx + 21c98h]
        mov eax, dword ptr [ebp]
        mov dword ptr [ecx + 21c80h], edx
        mov edx, dword ptr [ecx + 21c9ch]
        pop edi
        mov dword ptr [ecx + 21c84h], edx
        mov edx, dword ptr [ecx + 21ca0h]
        pop esi
        mov dword ptr [ecx + 21c78h], eax
        mov eax, dword ptr [ecx + 21c94h]
        mov dword ptr [ecx + 21c88h], edx
        mov edx, dword ptr [ecx + 21ca4h]
        pop ebp
        mov dword ptr [ecx + 21c7ch], eax
        mov dword ptr [ecx + 21c8ch], edx
        mov dword ptr [ecx + 21ca8h], eax
        pop ebx
        add esp, 18h
    }
}
