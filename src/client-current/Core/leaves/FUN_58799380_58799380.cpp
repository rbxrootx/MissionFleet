// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58799380 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_58799380_58799380() {
    __asm {
        push esi
        mov esi, ecx
        mov edx, dword ptr [esi]
        cmp byte ptr [edx + 0dh], 0
        ; Exact mapped bytes 74 09: je 0x58799394
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [edx + 8]
        mov dword ptr [esi], eax
        mov eax, esi
        pop esi
        ret
        mov ecx, dword ptr [edx]
        cmp byte ptr [ecx + 0dh], 0
        ; Exact mapped bytes 74 30: je 0x587993cc
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [edx + 4]
        cmp byte ptr [eax + 0dh], 0
        ; Exact mapped bytes 75 1B: jne 0x587993c0
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, edx
        push edi
        mov edi, eax
        mov edx, ecx
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 0F: jne 0x587993bf
        __asm _emit 0x75
        __asm _emit 0x0f
        mov dword ptr [esi], eax
        mov ecx, eax
        mov eax, dword ptr [eax + 4]
        mov edx, edi
        cmp byte ptr [eax + 0dh], 0
        ; Exact mapped bytes 74 E9: je 0x587993a8
        __asm _emit 0x74
        __asm _emit 0xe9
        pop edi
        cmp byte ptr [edx + 0dh], 0
        ; Exact mapped bytes 75 1C: jne 0x587993e2
        __asm _emit 0x75
        __asm _emit 0x1c
        mov dword ptr [esi], eax
        mov eax, esi
        pop esi
        ret
        mov eax, dword ptr [ecx + 8]
        cmp byte ptr [eax + 0dh], 0
        ; Exact mapped bytes 75 0B: jne 0x587993e0
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, eax
        mov eax, dword ptr [ecx + 8]
        cmp byte ptr [eax + 0dh], 0
        ; Exact mapped bytes 74 F5: je 0x587993d5
        __asm _emit 0x74
        __asm _emit 0xf5
        mov dword ptr [esi], ecx
        mov eax, esi
        pop esi
        ret
    }
}
