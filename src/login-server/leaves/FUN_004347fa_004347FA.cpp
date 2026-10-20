// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004347FA .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_004347fa_004347FA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [ebp + 8]
        push edi
        mov ecx, dword ptr [esi + 24h]
        mov edi, dword ptr [esi + 28h]
        lea ebx, [esi + 28h]
        sub edi, ecx
        add eax, edi
        cmp dword ptr [esi + 8], 0
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 75 5C: jne 0x434879
        __asm _emit 0x75
        __asm _emit 0x5c
        mov eax, dword ptr [esi + 2ch]
        cmp ecx, eax
        ; Exact mapped bytes 76 7D: jbe 0x4348a1
        __asm _emit 0x76
        __asm _emit 0x7d
        test edi, edi
        ; Exact mapped bytes 7E 16: jle 0x43483e
        __asm _emit 0x7e
        __asm _emit 0x16
        push edi
        push ecx
        push eax
        ; Exact mapped bytes E8 50 A8 FE FF: call 0x41f080
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 2ch]
        add esp, 0ch
        mov dword ptr [esi + 24h], eax
        lea ecx, [eax + edi]
        mov dword ptr [ebx], ecx
        mov ebx, dword ptr [esi + 1ch]
        mov dword ptr [ebp - 4], edi
        sub ebx, edi
        add edi, eax
        mov ecx, dword ptr [esi + 20h]
        push ebx
        push edi
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 34: call dword ptr [eax + 0x34]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x34
        add dword ptr [ebp - 4], eax
        add edi, eax
        sub ebx, eax
        test eax, eax
        ; Exact mapped bytes 76 0C: jbe 0x434869
        __asm _emit 0x76
        __asm _emit 0x0c
        test ebx, ebx
        ; Exact mapped bytes 76 08: jbe 0x434869
        __asm _emit 0x76
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 72 DF: jb 0x434848
        __asm _emit 0x72
        __asm _emit 0xdf
        mov eax, dword ptr [esi + 2ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [esi + 24h], eax
        add eax, ecx
        mov dword ptr [esi + 28h], eax
        ; Exact mapped bytes EB 28: jmp 0x4348a1
        __asm _emit 0xeb
        __asm _emit 0x28
        test edi, edi
        ; Exact mapped bytes 74 0D: je 0x43488a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 20h]
        push 1
        neg edi
        mov eax, dword ptr [ecx]
        push edi
        ; Exact mapped bytes FF 50 28: call dword ptr [eax + 0x28]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x28
        mov ecx, dword ptr [esi + 20h]
        lea edi, [esi + 2ch]
        push ebx
        push edi
        push dword ptr [esi + 1ch]
        mov eax, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 50 50: call dword ptr [eax + 0x50]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x50
        mov eax, dword ptr [edi]
        mov dword ptr [esi + 24h], eax
        mov eax, dword ptr [esi + 28h]
        pop edi
        sub eax, dword ptr [esi + 24h]
        pop esi
        pop ebx
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 09: jae 0x4348b8
        __asm _emit 0x73
        __asm _emit 0x09
        push 0
        push 3
        ; Exact mapped bytes E8 E5 02 00 00: call 0x434b9d
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
