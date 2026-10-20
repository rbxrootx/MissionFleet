// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043477E .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_0043477e_0043477E() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 14h], 1
        ; Exact mapped bytes 74 1F: je 0x4347a7
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [esi + 28h]
        mov eax, dword ptr [esi + 24h]
        cmp edx, eax
        ; Exact mapped bytes 74 0D: je 0x43479f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 20h]
        sub eax, edx
        push 1
        push eax
        mov edi, dword ptr [ecx]
        ; Exact mapped bytes FF 57 28: call dword ptr [edi + 0x28]
        __asm _emit 0xff
        __asm _emit 0x57
        __asm _emit 0x28
        mov eax, dword ptr [esi + 28h]
        mov dword ptr [esi + 24h], eax
        ; Exact mapped bytes EB 50: jmp 0x4347f7
        __asm _emit 0xeb
        __asm _emit 0x50
        mov eax, dword ptr [esi + 24h]
        mov edx, dword ptr [esi + 2ch]
        push ebx
        xor ebx, ebx
        cmp dword ptr [esi + 8], ebx
        lea edi, [esi + 2ch]
        ; Exact mapped bytes 75 12: jne 0x4347ca
        __asm _emit 0x75
        __asm _emit 0x12
        cmp eax, edx
        ; Exact mapped bytes 74 35: je 0x4347f1
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [esi + 20h]
        sub eax, edx
        push eax
        push edx
        mov ebx, dword ptr [ecx]
        ; Exact mapped bytes FF 53 38: call dword ptr [ebx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x53
        __asm _emit 0x38
        ; Exact mapped bytes EB 27: jmp 0x4347f1
        __asm _emit 0xeb
        __asm _emit 0x27
        cmp eax, edx
        ; Exact mapped bytes 74 11: je 0x4347df
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [esi + 20h]
        push ebp
        push ebx
        sub eax, edx
        mov ebp, dword ptr [ecx]
        push ebx
        push eax
        push 2
        ; Exact mapped bytes FF 55 50: call dword ptr [ebp + 0x50]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x50
        pop ebp
        mov ecx, dword ptr [esi + 20h]
        lea edx, [esi + 28h]
        push edx
        push edi
        push dword ptr [esi + 1ch]
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 50: call dword ptr [eax + 0x50]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x50
        mov eax, dword ptr [edi]
        pop ebx
        mov dword ptr [esi + 24h], eax
        pop edi
        pop esi
        ret
    }
}
