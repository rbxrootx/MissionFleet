// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000D700 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_1000d700_1000D700() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ebx, 4
        push edi
        test byte ptr [esi + 24h], bl
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x1000d7e7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 50h]
        cmp eax, 6
        ; Exact mapped bytes 74 05: je 0x1000d720
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 0ah
        ; Exact mapped bytes 75 1B: jne 0x1000d73b
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x1000d73b
        __asm _emit 0x74
        __asm _emit 0x14
        mov al, byte ptr [ecx + 24h]
        shr al, 5
        test al, 1
        ; Exact mapped bytes 74 0A: je 0x1000d73b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        push 1
        push 2
        push esi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 50h]
        mov eax, 5
        cmp ecx, eax
        ; Exact mapped bytes 75 07: jne 0x1000d74e
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [esi + 50h], 6
        cmp dword ptr [esi + 50h], ebx
        ; Exact mapped bytes 75 03: jne 0x1000d756
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [esi + 50h], eax
        mov ecx, dword ptr [esi + 50h]
        mov eax, 9
        cmp ecx, eax
        ; Exact mapped bytes 75 07: jne 0x1000d769
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [esi + 50h], 0ah
        cmp dword ptr [esi + 50h], 8
        ; Exact mapped bytes 75 03: jne 0x1000d772
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 4]
        mov ebx, dword ptr [esi + 1ch]
        mov ecx, dword ptr [eax + 4]
        mov edi, dword ptr [eax + 14h]
        add edi, ecx
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7F 30: jg 0x1000d7bb
        __asm _emit 0x7f
        __asm _emit 0x30
        mov edi, dword ptr [eax + 1ch]
        add edi, ecx
        mov ecx, dword ptr [esi + 14h]
        add ecx, edx
        cmp edi, ecx
        ; Exact mapped bytes 7C 22: jl 0x1000d7bb
        __asm _emit 0x7c
        __asm _emit 0x22
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [esi + 8]
        mov edi, dword ptr [eax + 18h]
        mov ebx, dword ptr [esi + 20h]
        add edi, ecx
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7F 0E: jg 0x1000d7bb
        __asm _emit 0x7f
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        mov ecx, dword ptr [esi + 18h]
        add ecx, edx
        cmp eax, ecx
        ; Exact mapped bytes 7D 07: jge 0x1000d7c2
        __asm _emit 0x7d
        __asm _emit 0x07
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x1000d7e7
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0F: je 0x1000d7e2
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x1000d7c9
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        pop ebx
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebx
        ret
    }
}
