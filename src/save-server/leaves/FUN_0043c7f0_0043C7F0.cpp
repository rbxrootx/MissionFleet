// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043C7F0 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_0043c7f0_0043C7F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 08: jge 0x43c81a
        __asm _emit 0x7d
        __asm _emit 0x08
        lea eax, [ebp - 8]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 06: jmp 0x43c820
        __asm _emit 0xeb
        __asm _emit 0x06
        lea ecx, [ebp - 4]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        mov edi, dword ptr [ebp + 10h]
        mov esi, dword ptr [ebp + 8]
        xor edx, edx
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes F3 A6: repe cmpsb byte ptr [esi], byte ptr es:[edi]
        __asm _emit 0xf3
        __asm _emit 0xa6
        ; Exact mapped bytes 74 08: je 0x43c848
        __asm _emit 0x74
        __asm _emit 0x08
        sbb eax, eax
        sbb eax, -1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 08: je 0x43c862
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 25: jmp 0x43c887
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 09: jge 0x43c873
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 0ffffffffh
        ; Exact mapped bytes EB 0E: jmp 0x43c881
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        cmp edx, dword ptr [ebp - 8]
        setg al
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
