// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10103F80 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_10103f80_10103F80() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 84h]
        test eax, eax
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x1010402c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 10h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10103fa0
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 14h]
        mov dword ptr [ecx + 14h], eax
        ; Exact mapped bytes EB 06: jmp 0x10103fa6
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [esi + 78h], ecx
        mov eax, dword ptr [esi + 84h]
        mov ecx, dword ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10103fbb
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 10h], edx
        ; Exact mapped bytes EB 06: jmp 0x10103fc1
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [eax + 10h]
        mov dword ptr [esi + 7ch], eax
        mov eax, dword ptr [esi + 80h]
        push edi
        mov edi, dword ptr [esi + 84h]
        cmp eax, edi
        ; Exact mapped bytes 75 14: jne 0x10103fe6
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x10103fdd
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, ecx
        ; Exact mapped bytes EB 03: jmp 0x10103fe0
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [eax + 10h]
        mov dword ptr [esi + 80h], eax
        mov eax, dword ptr [edi + 14h]
        test eax, eax
        ; Exact mapped bytes 75 03: jne 0x10103ff0
        __asm _emit 0x75
        __asm _emit 0x03
        mov eax, dword ptr [edi + 10h]
        mov ecx, dword ptr [esi + 30h]
        mov dword ptr [esi + 84h], eax
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x10104012
        __asm _emit 0x74
        __asm _emit 0x15
        mov dl, byte ptr [ecx + 24h]
        shr dl, 5
        test dl, 1
        ; Exact mapped bytes 74 0A: je 0x10104012
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        push 0
        push 1
        push esi
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        test edi, edi
        ; Exact mapped bytes 74 08: je 0x1010401e
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [edi]
        push 1
        mov ecx, edi
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, dword ptr [esi + 88h]
        pop edi
        dec eax
        mov dword ptr [esi + 88h], eax
        pop esi
        ret
    }
}
