// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4160 .. +0xEA bytes.
extern "C" __declspec(naked) void FUN_587c4160() {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 4ch]
        mov dword ptr [esp], ecx
        test eax, eax
        ; Exact mapped bytes 0F 84 D9 00 00 00: je 0x587c4248
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        mov ebp, eax
        mov eax, dword ptr [ebp + 48h]
        test eax, eax
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x587c4247
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        movzx edx, word ptr [ebp + 26h]
        movzx esi, word ptr [eax + 26h]
        ; Exact mapped bytes 66 3B D6: cmp dx, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd6
        ; Exact mapped bytes 7F 19: jg 0x587c41a6
        __asm _emit 0x7f
        __asm _emit 0x19
        ; Exact mapped bytes 75 10: jne 0x587c419f
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp + 20h]
        add ecx, dword ptr [eax + 8]
        add edx, dword ptr [ebp + 8]
        cmp edx, ecx
        ; Exact mapped bytes 7F 07: jg 0x587c41a6
        __asm _emit 0x7f
        __asm _emit 0x07
        mov ebp, eax
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x587c4239
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 44h], 0
        lea edx, [ebp + 44h]
        mov edi, ebp
        ; Exact mapped bytes 74 2C: je 0x587c41dd
        __asm _emit 0x74
        __asm _emit 0x2c
        movzx ebx, word ptr [eax + 26h]
        mov edx, dword ptr [edx]
        movzx esi, word ptr [edx + 26h]
        ; Exact mapped bytes 66 3B F3: cmp si, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf3
        ; Exact mapped bytes 7F 12: jg 0x587c41d2
        __asm _emit 0x7f
        __asm _emit 0x12
        ; Exact mapped bytes 75 4B: jne 0x587c420d
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [edx + 20h]
        mov esi, dword ptr [eax + 20h]
        add ecx, dword ptr [edx + 8]
        add esi, dword ptr [eax + 8]
        cmp ecx, esi
        ; Exact mapped bytes 7E 3B: jle 0x587c420d
        __asm _emit 0x7e
        __asm _emit 0x3b
        mov edi, edx
        cmp dword ptr [edi + 44h], 0
        lea edx, [edi + 44h]
        ; Exact mapped bytes 75 D8: jne 0x587c41b5
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [eax + 48h]
        test edx, edx
        ; Exact mapped bytes 74 06: je 0x587c41ea
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [eax + 44h]
        mov dword ptr [edx + 44h], ecx
        mov edx, dword ptr [eax + 44h]
        test edx, edx
        ; Exact mapped bytes 74 06: je 0x587c41f7
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [eax + 48h]
        mov dword ptr [edx + 48h], ecx
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [eax + 48h], edi
        mov dword ptr [eax + 44h], 0
        mov dword ptr [edi + 44h], eax
        mov dword ptr [edx + 4ch], eax
        ; Exact mapped bytes EB 2C: jmp 0x587c4239
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [eax + 48h]
        test edx, edx
        ; Exact mapped bytes 74 06: je 0x587c421a
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [eax + 44h]
        mov dword ptr [edx + 44h], ecx
        mov edx, dword ptr [eax + 44h]
        test edx, edx
        ; Exact mapped bytes 74 06: je 0x587c4227
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [eax + 48h]
        mov dword ptr [edx + 48h], ecx
        mov dword ptr [eax + 48h], edi
        mov edx, dword ptr [edi + 44h]
        mov dword ptr [eax + 44h], edx
        mov ecx, dword ptr [edi + 44h]
        mov dword ptr [ecx + 48h], eax
        mov dword ptr [edi + 44h], eax
        mov eax, dword ptr [ebp + 48h]
        test eax, eax
        ; Exact mapped bytes 0F 85 3C FF FF FF: jne 0x587c4180
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        pop ebp
        pop ecx
        ret
    }
}
