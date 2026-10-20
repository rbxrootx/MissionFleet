// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041AD3E .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_0041ad3e_0041AD3E() {
    __asm {
        mov eax, 43aea8h
        ; Exact mapped bytes E8 C0 48 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ecx
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov dword ptr [ebp - 14h], ebx
        cmp dword ptr [esi + 4], ebx
        ; Exact mapped bytes 76 5A: jbe 0x41adb2
        __asm _emit 0x76
        __asm _emit 0x5a
        push edi
        mov dword ptr [ebp - 10h], ebx
        mov eax, dword ptr [ebp + 8]
        lea edx, [ebp - 10h]
        push edx
        push 440318h
        mov ecx, dword ptr [eax]
        push eax
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        cmp eax, ebx
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 7C 1C: jl 0x41ad93
        __asm _emit 0x7c
        __asm _emit 0x1c
        xor edi, edi
        cmp dword ptr [esi + 4], ebx
        ; Exact mapped bytes 76 15: jbe 0x41ad93
        __asm _emit 0x76
        __asm _emit 0x15
        mov edx, dword ptr [esi]
        mov eax, dword ptr [ebp - 10h]
        push ebx
        push dword ptr [edx + edi*8]
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        inc edi
        cmp edi, dword ptr [esi + 4]
        ; Exact mapped bytes 72 EB: jb 0x41ad7e
        __asm _emit 0x72
        __asm _emit 0xeb
        push dword ptr [esi]
        mov dword ptr [esi + 4], ebx
        ; Exact mapped bytes E8 78 2B 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        or dword ptr [ebp - 4], 0ffffffffh
        pop ecx
        cmp eax, ebx
        mov dword ptr [esi], ebx
        pop edi
        ; Exact mapped bytes 74 06: je 0x41adb2
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 14h]
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
