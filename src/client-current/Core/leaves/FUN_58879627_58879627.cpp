// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58879627 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_58879627_58879627() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        push 38h
        push 40h
        ; Exact mapped bytes E8 D7 5B FF FF: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        xor ebx, ebx
        mov dword ptr [ebp - 8], esi
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 75 04: jne 0x5887964a
        __asm _emit 0x75
        __asm _emit 0x04
        mov esi, ebx
        ; Exact mapped bytes EB 4B: jmp 0x58879695
        __asm _emit 0xeb
        __asm _emit 0x4b
        lea eax, [esi + 0e00h]
        cmp esi, eax
        ; Exact mapped bytes 74 41: je 0x58879695
        __asm _emit 0x74
        __asm _emit 0x41
        push edi
        lea edi, [esi + 20h]
        mov esi, eax
        push ebx
        push 0fa0h
        lea eax, [edi - 20h]
        push eax
        ; Exact mapped bytes E8 CA 61 FF FF: call 0x5886f833
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        or dword ptr [edi - 8], 0ffffffffh
        and byte ptr [edi + 0dh], 0f8h
        mov dword ptr [edi], ebx
        lea edi, [edi + 38h]
        mov dword ptr [edi - 34h], ebx
        lea eax, [edi - 20h]
        mov dword ptr [edi - 30h], 0a0a0000h
        mov byte ptr [edi - 2ch], 0ah
        mov dword ptr [edi - 2ah], ebx
        mov byte ptr [edi - 26h], bl
        cmp eax, esi
        ; Exact mapped bytes 75 C9: jne 0x5887965a
        __asm _emit 0x75
        __asm _emit 0xc9
        mov esi, dword ptr [ebp - 8]
        pop edi
        push ebx
        ; Exact mapped bytes E8 75 35 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov eax, esi
        pop esi
        pop ebx
        leave
        ret
    }
}
