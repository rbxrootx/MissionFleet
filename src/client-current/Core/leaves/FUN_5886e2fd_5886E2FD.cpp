// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886E2FD .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_5886e2fd_5886E2FD() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        cmp byte ptr [ebp + 8], 0
        ; Exact mapped bytes 74 31: je 0x5886e339
        __asm _emit 0x74
        __asm _emit 0x31
        push esi
        mov esi, dword ptr [ebp + 0ch]
        push edi
        lea edi, [esi + 0ch]
        mov eax, dword ptr [edi]
        nop
        shr eax, 9
        test al, 1
        ; Exact mapped bytes 74 1D: je 0x5886e337
        __asm _emit 0x74
        __asm _emit 0x1d
        push dword ptr [ebp + 10h]
        push esi
        ; Exact mapped bytes E8 3F BC FE FF: call 0x58859f62
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov eax, 0fffffd7fh
        ; Exact mapped bytes F0 21 07: lock and dword ptr [edi], eax
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x07
        xor eax, eax
        mov dword ptr [esi + 18h], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi], eax
        pop edi
        pop esi
        pop ebp
        ret
    }
}
