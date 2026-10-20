// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043C180 .. +0xC7 bytes.
extern "C" __declspec(naked) void FUN_0043c180_0043C180() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 1ch]
        sub edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 24h]
        sub eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 08: jge 0x43c1cf
        __asm _emit 0x7d
        __asm _emit 0x08
        lea edx, [ebp - 8]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB 06: jmp 0x43c1d5
        __asm _emit 0xeb
        __asm _emit 0x06
        lea eax, [ebp - 4]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edi, dword ptr [ebp - 20h]
        mov esi, dword ptr [ebp - 18h]
        xor edx, edx
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes F3 A6: repe cmpsb byte ptr [esi], byte ptr es:[edi]
        __asm _emit 0xf3
        __asm _emit 0xa6
        ; Exact mapped bytes 74 08: je 0x43c1fd
        __asm _emit 0x74
        __asm _emit 0x08
        sbb eax, eax
        sbb eax, -1
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 08: je 0x43c217
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 25: jmp 0x43c23c
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 09: jge 0x43c228
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0ffffffffh
        ; Exact mapped bytes EB 0E: jmp 0x43c236
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        cmp edx, dword ptr [ebp - 8]
        setg al
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp - 38h]
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
