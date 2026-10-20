// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885DA4A .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_5885da4a_5885DA4A() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        push esi
        mov esi, ecx
        push edi
        push 8
        pop ecx
        mov dword ptr [esi], eax
        lea edi, [esi + 2ch]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [esi + 4], edx
        xor edx, edx
        mov dword ptr [esi + 8], eax
        xor eax, eax
        mov dword ptr [esi + 0ch], edx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop edi
        mov dword ptr [esi + 10h], edx
        mov eax, esi
        ; Exact mapped bytes 66 89 56 14: mov word ptr [esi + 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x14
        mov byte ptr [esi + 16h], dl
        mov dword ptr [esi + 18h], edx
        mov dword ptr [esi + 1ch], edx
        mov dword ptr [esi + 20h], edx
        mov byte ptr [esi + 24h], dl
        mov dword ptr [esi + 28h], edx
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
