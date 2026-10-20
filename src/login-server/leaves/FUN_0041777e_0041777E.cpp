// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041777E .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_0041777e_0041777E() {
    __asm {
        mov eax, 43abb4h
        ; Exact mapped bytes E8 80 7E 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 14h], esi
        lea ebx, [esi + 10h]
        push ebx
        ; Exact mapped bytes FF 15 7C C1 43 00: call dword ptr [0x43c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [esi + 0ch], 0
        ; Exact mapped bytes 75 31: jne 0x4177d7
        __asm _emit 0x75
        __asm _emit 0x31
        push dword ptr [esi]
        and dword ptr [ebp - 4], 0
        lea eax, [esi + 8]
        push dword ptr [esi + 4]
        push eax
        ; Exact mapped bytes E8 17 5E 01 00: call 0x42d5cf
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        dec ecx
        mov edx, ecx
        imul edx, dword ptr [esi]
        test ecx, ecx
        lea eax, [edx + eax + 4]
        ; Exact mapped bytes 7C 0E: jl 0x4177d7
        __asm _emit 0x7c
        __asm _emit 0x0e
        inc ecx
        mov edx, dword ptr [esi + 0ch]
        mov dword ptr [eax], edx
        mov dword ptr [esi + 0ch], eax
        sub eax, dword ptr [esi]
        dec ecx
        ; Exact mapped bytes 75 F3: jne 0x4177ca
        __asm _emit 0x75
        __asm _emit 0xf3
        mov edi, dword ptr [esi + 0ch]
        push ebx
        mov eax, dword ptr [edi]
        mov dword ptr [esi + 0ch], eax
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, edi
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        leave
        ret
    }
}
