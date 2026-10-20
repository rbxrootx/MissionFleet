// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886CC7D .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_5886cc7d_5886CC7D() {
    __asm {
        push 0ch
        push 588ed510h
        ; Exact mapped bytes E8 D7 5A FC FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x5a
        __asm _emit 0xfc
        __asm _emit 0xff
        and dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax]
        ; Exact mapped bytes E8 DE CA 00 00: call 0x58879775
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        and dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx]
        mov edi, dword ptr [eax]
        mov esi, dword ptr [ecx + 4]
        mov edx, edi
        sar edx, 6
        mov eax, edi
        and eax, 3fh
        imul ecx, eax, 38h
        mov eax, dword ptr [edx*4 + 589699b0h]
        test byte ptr [eax + ecx + 28h], 1
        ; Exact mapped bytes 74 0D: je 0x5886ccce
        __asm _emit 0x74
        __asm _emit 0x0d
        push esi
        push edi
        ; Exact mapped bytes E8 19 01 00 00: call 0x5886cde1
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov esi, eax
        ; Exact mapped bytes EB 0E: jmp 0x5886ccdc
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov byte ptr [esi + 1ch], 1
        mov dword ptr [esi + 18h], 9
        or esi, 0ffffffffh
        mov dword ptr [ebp - 1ch], esi
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 17 00 00 00: call 0x5886cd02
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
