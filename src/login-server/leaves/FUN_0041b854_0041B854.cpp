// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041B854 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_0041b854_0041B854() {
    __asm {
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 8]
        push esi
        push edi
        xor ecx, ecx
        push 1
        test dh, 40h
        pop esi
        ; Exact mapped bytes 74 05: je 0x41b86e
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [eax + 20h], esi
        ; Exact mapped bytes EB 03: jmp 0x41b871
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [eax + 20h], ecx
        mov edi, dword ptr [ebp + 30h]
        ; Exact mapped bytes 66 89 50 30: mov word ptr [eax + 0x30], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x30
        mov dl, byte ptr [ebp + 18h]
        mov dword ptr [eax + 14h], edi
        mov edi, dword ptr [ebp + 20h]
        mov byte ptr [eax + 32h], dl
        mov dl, byte ptr [ebp + 1ch]
        mov dword ptr [eax + 24h], edi
        mov edi, dword ptr [ebp + 0ch]
        mov byte ptr [eax + 33h], dl
        mov edx, dword ptr [ebp + 24h]
        mov dword ptr [eax], edi
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 28h], edx
        mov edx, dword ptr [ebp + 28h]
        mov dword ptr [eax + 1ch], esi
        pop edi
        cmp edx, ecx
        mov dword ptr [eax + 2ch], ecx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], ecx
        mov dword ptr [eax + 18h], ecx
        pop esi
        ; Exact mapped bytes 74 0A: je 0x41b8c3
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [eax + 1ch], 3
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [ebp + 2ch]
        cmp edx, ecx
        ; Exact mapped bytes 74 07: je 0x41b8d1
        __asm _emit 0x74
        __asm _emit 0x07
        or dword ptr [eax + 1ch], 4
        mov dword ptr [eax + 0ch], edx
        pop ebp
        ret
    }
}
