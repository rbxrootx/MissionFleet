// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897B450 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_5897b450() {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 8]
        push esi
        mov ecx, dword ptr [eax + 150h]
        mov edx, dword ptr [eax + 1ch]
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [esp + 4], edx
        mov esi, dword ptr [ecx + 8]
        dec eax
        ; Exact mapped bytes 0F 88 8A 00 00 00: js 0x5897b4fb
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        push ebx
        push ebp
        inc eax
        push edi
        lea edi, [ecx*4]
        mov dword ptr [esp + 18h], eax
        mov ecx, dword ptr [esp + 1ch]
        add edi, 4
        mov dword ptr [esp + 24h], edi
        mov eax, dword ptr [ecx]
        add ecx, 4
        mov dword ptr [esp + 1ch], ecx
        mov ecx, dword ptr [esp + 20h]
        mov ecx, dword ptr [ecx]
        mov ecx, dword ptr [ecx + edi - 4]
        mov dword ptr [esp + 28h], ecx
        xor ecx, ecx
        test edx, edx
        ; Exact mapped bytes 76 41: jbe 0x5897b4ed
        __asm _emit 0x76
        __asm _emit 0x41
        xor edx, edx
        mov dl, byte ptr [eax]
        add eax, 3
        mov edi, edx
        xor edx, edx
        mov dl, byte ptr [eax - 2]
        mov ebp, edx
        xor edx, edx
        mov dl, byte ptr [eax - 1]
        mov ebx, dword ptr [esi + ebp*4 + 400h]
        mov ebp, dword ptr [esi + edi*4]
        mov edx, dword ptr [esi + edx*4 + 800h]
        mov edi, dword ptr [esp + 28h]
        add edx, ebx
        add edx, ebp
        sar edx, 10h
        mov byte ptr [ecx + edi], dl
        mov edx, dword ptr [esp + 10h]
        inc ecx
        cmp ecx, edx
        ; Exact mapped bytes 72 C3: jb 0x5897b4ac
        __asm _emit 0x72
        __asm _emit 0xc3
        mov edi, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 18h]
        dec eax
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes 75 8C: jne 0x5897b484
        __asm _emit 0x75
        __asm _emit 0x8c
        pop edi
        pop ebp
        pop ebx
        pop esi
        pop ecx
        ret
    }
}
