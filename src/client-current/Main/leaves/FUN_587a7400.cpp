// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A7400 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_587a7400() {
    __asm {
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 4]
        push ebx
        push ebp
        push esi
        xor esi, esi
        cmp dword ptr [eax + 141ch], esi
        push edi
        ; Exact mapped bytes 0F 8E 82 00 00 00: jle 0x587a749c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 14h]
        lea edi, [ecx + 8]
        mov edx, dword ptr [edi]
        test edx, edx
        ; Exact mapped bytes 74 60: je 0x587a7487
        __asm _emit 0x74
        __asm _emit 0x60
        mov ebx, dword ptr [eax + 44ch]
        mov ecx, esi
        shl ebx, cl
        test ebx, ebx
        ; Exact mapped bytes 79 52: jns 0x587a7487
        __asm _emit 0x79
        __asm _emit 0x52
        cmp ebp, -1
        ; Exact mapped bytes 74 0C: je 0x587a7446
        __asm _emit 0x74
        __asm _emit 0x0c
        movzx ecx, byte ptr [eax + esi + 1fch]
        cmp ecx, ebp
        ; Exact mapped bytes 75 41: jne 0x587a7487
        __asm _emit 0x75
        __asm _emit 0x41
        mov bl, byte ptr [esp + 18h]
        test bl, 10h
        ; Exact mapped bytes 74 15: je 0x587a7464
        __asm _emit 0x74
        __asm _emit 0x15
        cmp byte ptr [eax + esi + 21ch], 0
        ; Exact mapped bytes 75 0B: jne 0x587a7464
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, edx
        ; Exact mapped bytes E8 50 9E 00 00: call 0x587b12b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x587a74a8
        __asm _emit 0x74
        __asm _emit 0x44
        test bl, 20h
        ; Exact mapped bytes 74 1E: je 0x587a7487
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        cmp byte ptr [eax + esi + 21ch], 1
        ; Exact mapped bytes 75 0B: jne 0x587a7487
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 2D 9E 00 00: call 0x587b12b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x587a74a8
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 4]
        inc esi
        add edi, 4
        cmp esi, dword ptr [eax + 141ch]
        ; Exact mapped bytes 7C 85: jl 0x587a7421
        __asm _emit 0x7c
        __asm _emit 0x85
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
