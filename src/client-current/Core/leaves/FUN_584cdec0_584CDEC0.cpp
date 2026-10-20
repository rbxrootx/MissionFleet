// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CDEC0 .. +0x109 bytes.
extern "C" __declspec(naked) void FUN_584cdec0_584CDEC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 7E 4F: jle 0x584cdf22
        __asm _emit 0x7e
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 64h]
        sub eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 70h]
        sub ecx, 1
        cdq
        idiv ecx
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 68h]
        sub ecx, dword ptr [eax + 60h]
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [edx + 70h]
        sub esi, 1
        mov eax, ecx
        cdq
        idiv esi
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        cdq
        idiv ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 5C: jmp 0x584cdf7e
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 7D 51: jge 0x584cdf7c
        __asm _emit 0x7d
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 5ch]
        sub eax, dword ptr [edx + 64h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 70h]
        sub ecx, 1
        cdq
        idiv ecx
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        sub ecx, dword ptr [eax + 68h]
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [edx + 70h]
        sub esi, 1
        mov eax, ecx
        cdq
        idiv esi
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 6ch]
        neg eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 70h]
        sub ecx, 1
        cdq
        idiv ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 02: jmp 0x584cdf7e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 46: jmp 0x584cdfc4
        __asm _emit 0xeb
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        and eax, 1
        ; Exact mapped bytes 74 1D: je 0x584cdfa6
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7B 76 2E 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x76
        __asm _emit 0x2e
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        and eax, 10h
        ; Exact mapped bytes 74 13: je 0x584cdfc4
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        add edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7D 75 2E 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x75
        __asm _emit 0x2e
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
