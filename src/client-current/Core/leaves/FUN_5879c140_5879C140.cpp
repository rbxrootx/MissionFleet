// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879C140 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_5879c140_5879C140() {
    __asm {
        sub esp, 14h
        mov ecx, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 18h]
        push ebx
        push ebp
        dec dword ptr [ecx]
        mov eax, dword ptr [ecx]
        mov ebp, dword ptr [esp + 24h]
        push esi
        push edi
        mov byte ptr [eax], 0
        mov dword ptr [esp + 10h], ebp
        mov dword ptr [esp + 30h], edx
        mov eax, edx
        dec dword ptr [ecx]
        mov esi, 0cccccccdh
        mul esi
        lea ebx, [esi - 1]
        mov dword ptr [esp + 28h], eax
        mov edi, edx
        mov eax, dword ptr [esp + 30h]
        mul ebx
        mov ebx, eax
        mov dword ptr [esp + 28h], edx
        mov eax, ebp
        mul esi
        mov esi, eax
        mov ebp, edx
        mov eax, dword ptr [esp + 10h]
        mov edx, 0cccccccch
        mul edx
        add esi, edi
        mov dword ptr [esp + 10h], edx
        mov edx, dword ptr [esp + 28h]
        adc ebp, 0
        add ebx, esi
        mov dword ptr [esp + 14h], eax
        mov ebx, eax
        adc edx, 0
        xor eax, eax
        add ebp, edx
        adc eax, eax
        add ebx, ebp
        mov ebp, dword ptr [esp + 10h]
        adc ebp, eax
        shrd ebx, ebp, 3
        mov al, bl
        shr ebp, 3
        shl al, 2
        mov dword ptr [esp + 10h], ebp
        lea edx, [eax + ebx]
        mov eax, dword ptr [ecx]
        add dl, dl
        sub byte ptr [esp + 30h], dl
        mov edx, dword ptr [esp + 30h]
        add dl, 30h
        mov byte ptr [eax], dl
        mov edx, ebx
        mov eax, edx
        mov dword ptr [esp + 30h], edx
        or eax, ebp
        ; Exact mapped bytes 0F 85 73 FF FF FF: jne 0x5879c162
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ret
    }
}
