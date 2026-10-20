// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000D8C0 .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_1000d8c0_1000D8C0() {
    __asm {
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 10h]
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 20h]
        push eax
        mov eax, dword ptr [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esp + 1ch]
        push edx
        push eax
        xor ebx, ebx
        push ecx
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 C8 10 0F 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x10
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        lea ecx, [esi + 60h]
        xor eax, eax
        mov dword ptr [esi], 101752e0h
        mov dword ptr [esi + 50h], edx
        mov byte ptr [esi + 68h], bl
        mov dword ptr [esi + 74h], ebx
        mov dword ptr [ecx], eax
        xor edx, edx
        lea edi, [esi + 0d4h]
        mov dword ptr [ecx + 4], eax
        lea eax, [esi + 6ch]
        xor ecx, ecx
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], edx
        lea edx, [esi + 84h]
        xor eax, eax
        mov dword ptr [edx], ecx
        mov dword ptr [edx + 4], ecx
        lea ecx, [esi + 7ch]
        xor edx, edx
        mov dword ptr [ecx], eax
        mov dword ptr [ecx + 4], eax
        lea eax, [esi + 94h]
        xor ecx, ecx
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], edx
        lea edx, [esi + 8ch]
        mov eax, 40000000h
        mov dword ptr [edx], ecx
        mov dword ptr [edx + 4], ecx
        mov dword ptr [esi + 0c0h], eax
        mov dword ptr [esi + 0c4h], eax
        mov ecx, 0ch
        xor eax, eax
        mov dword ptr [esi + 0b8h], ebx
        mov dword ptr [esi + 0bch], ebx
        mov dword ptr [esi + 0c8h], ebx
        mov dword ptr [esi + 0d0h], ebx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [esi + 0b4h], ebx
        mov dword ptr [esi + 0b0h], ebx
        mov dword ptr [esi + 0a4h], ebx
        mov dword ptr [esi + 0a0h], ebx
        mov dword ptr [esi + 0cch], ebx
        mov dword ptr [esi + 5ch], ebx
        mov dword ptr [esi + 58h], ebx
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 0ach], ebx
        mov dword ptr [esi + 0a8h], ebx
        mov dword ptr [esi + 9ch], ebx
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
