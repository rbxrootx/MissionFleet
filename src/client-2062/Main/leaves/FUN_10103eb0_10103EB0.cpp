// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10103EB0 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_10103eb0_10103EB0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push edi
        mov edi, ecx
        test eax, eax
        ; Exact mapped bytes 0F 8C AC 00 00 00: jl 0x10103f6c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edi + 78h]
        ; Exact mapped bytes 7E 10: jle 0x10103ed5
        __asm _emit 0x7e
        __asm _emit 0x10
        test esi, esi
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x10103f6c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 14h]
        dec eax
        test eax, eax
        ; Exact mapped bytes 7F F0: jg 0x10103ec5
        __asm _emit 0x7f
        __asm _emit 0xf0
        test esi, esi
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x10103f6c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10103eec
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 14h]
        mov dword ptr [eax + 14h], ecx
        ; Exact mapped bytes EB 06: jmp 0x10103ef2
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [esi + 14h]
        mov dword ptr [edi + 78h], edx
        mov eax, dword ptr [esi + 14h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10103f01
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 10h]
        mov dword ptr [eax + 10h], ecx
        ; Exact mapped bytes EB 06: jmp 0x10103f07
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [esi + 10h]
        mov dword ptr [edi + 7ch], edx
        mov eax, dword ptr [edi + 80h]
        cmp eax, esi
        ; Exact mapped bytes 75 14: jne 0x10103f25
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x10103f1c
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, ecx
        ; Exact mapped bytes EB 03: jmp 0x10103f1f
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [eax + 10h]
        mov dword ptr [edi + 80h], eax
        mov eax, dword ptr [edi + 84h]
        cmp eax, esi
        ; Exact mapped bytes 75 2F: jne 0x10103f5e
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x10103f3a
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, ecx
        ; Exact mapped bytes EB 03: jmp 0x10103f3d
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [eax + 10h]
        mov ecx, dword ptr [edi + 30h]
        mov dword ptr [edi + 84h], eax
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x10103f5e
        __asm _emit 0x74
        __asm _emit 0x14
        mov al, byte ptr [ecx + 24h]
        shr al, 5
        test al, 1
        ; Exact mapped bytes 74 0A: je 0x10103f5e
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        push 0
        push 2
        push edi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        dec dword ptr [edi + 88h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
