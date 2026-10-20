// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10021E40 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_10021e40_10021E40() {
    __asm {
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 4]
        imul eax, eax
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push ebp
        push esi
        mov esi, dword ptr [esp + 18h]
        push edi
        mov edi, dword ptr [ecx + 4]
        mov dword ptr [esp + 18h], eax
        mov eax, dword ptr [ecx + 5c40h]
        sub edi, ebx
        mov ebx, dword ptr [ecx + 8]
        mov dword ptr [esp + 14h], 0
        lea eax, [eax + eax*2]
        sub ebx, esi
        shl eax, 4
        lea esi, [eax + ecx + 3ec8h]
        mov ecx, dword ptr [esi - 4]
        mov eax, dword ptr [esi]
        mov edx, ebx
        add ecx, edi
        sub edx, eax
        mov ebp, ecx
        mov eax, edx
        imul ebp, ecx
        imul eax, edx
        add eax, ebp
        mov ebp, dword ptr [esp + 18h]
        cmp eax, ebp
        ; Exact mapped bytes 7E 19: jle 0x10021eb8
        __asm _emit 0x7e
        __asm _emit 0x19
        mov eax, dword ptr [esp + 14h]
        add esi, 8
        inc eax
        cmp eax, 6
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 7C D0: jl 0x10021e80
        __asm _emit 0x7c
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        or eax, 0ffffffffh
        pop ebx
        ret
        mov eax, edx
        pop edi
        imul eax, edx
        mov edx, ecx
        pop esi
        imul edx, ecx
        pop ebp
        add eax, edx
        pop ebx
        ret
    }
}
