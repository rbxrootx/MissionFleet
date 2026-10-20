// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DAB80 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_588dab80() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 60d8h]
        push edi
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x588daba1
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 60d8h], 0
        mov eax, dword ptr [esi + 100ch]
        xor ebx, ebx
        test byte ptr [eax + 0ah], 7
        ; Exact mapped bytes 76 2F: jbe 0x588dabde
        __asm _emit 0x76
        __asm _emit 0x2f
        lea edi, [esi + 60dch]
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x588dabc9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [edi], 0
        mov ecx, dword ptr [esi + 100ch]
        movzx edx, word ptr [ecx + 0ah]
        inc ebx
        and edx, 7
        add edi, 4
        cmp ebx, edx
        ; Exact mapped bytes 72 D7: jb 0x588dabb5
        __asm _emit 0x72
        __asm _emit 0xd7
        xor ebx, ebx
        cmp dword ptr [esi + 141ch], ebx
        ; Exact mapped bytes 7E 28: jle 0x588dac10
        __asm _emit 0x7e
        __asm _emit 0x28
        lea edi, [esi + 17ch]
        mov edi, edi
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x588dac04
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi], 0
        inc ebx
        add edi, 4
        cmp ebx, dword ptr [esi + 141ch]
        ; Exact mapped bytes 7C E0: jl 0x588dabf0
        __asm _emit 0x7c
        __asm _emit 0xe0
        pop edi
        pop esi
        pop ebx
        ret
    }
}
