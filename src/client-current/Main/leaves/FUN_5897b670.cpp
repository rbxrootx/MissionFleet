// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897B670 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_5897b670() {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [eax + 1ch]
        mov eax, dword ptr [eax + 24h]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [esp + 1ch]
        dec eax
        ; Exact mapped bytes 78 4D: js 0x5897b6d4
        __asm _emit 0x78
        __asm _emit 0x4d
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 10h]
        push ebx
        inc eax
        push ebp
        push esi
        lea ebp, [ecx*4]
        mov dword ptr [esp + 18h], eax
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [edx]
        add edx, 4
        add ebp, 4
        mov eax, dword ptr [eax]
        mov esi, dword ptr [eax + ebp - 4]
        xor eax, eax
        test edi, edi
        ; Exact mapped bytes 76 10: jbe 0x5897b6c6
        __asm _emit 0x76
        __asm _emit 0x10
        mov bl, byte ptr [ecx]
        mov byte ptr [eax + esi], bl
        mov ebx, dword ptr [esp + 10h]
        add ecx, ebx
        inc eax
        cmp eax, edi
        ; Exact mapped bytes 72 F0: jb 0x5897b6b6
        __asm _emit 0x72
        __asm _emit 0xf0
        mov eax, dword ptr [esp + 18h]
        dec eax
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes 75 CD: jne 0x5897b69e
        __asm _emit 0x75
        __asm _emit 0xcd
        pop esi
        pop ebp
        pop ebx
        pop edi
        pop ecx
        ret
    }
}
