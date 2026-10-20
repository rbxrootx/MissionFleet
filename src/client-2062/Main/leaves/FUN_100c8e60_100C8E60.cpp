// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C8E60 .. +0xFE bytes.
extern "C" __declspec(naked) void FUN_100c8e60_100C8E60() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        test byte ptr [edi + 24h], 2
        ; Exact mapped bytes 0F 84 E4 00 00 00: je 0x100c8f54
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 3ch]
        mov esi, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x100c8e9d
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x100c8e94
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push esi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x100c8e9d
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes EB EA: jmp 0x100c8e7e
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 4], 20ah
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x100c8f54
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        xor ebx, ebx
        shr edx, 10h
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 7E 05: jle 0x100c8ebc
        __asm _emit 0x7e
        __asm _emit 0x05
        mov ebx, 1
        mov eax, dword ptr [edi + 80h]
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 4]
        mov ebp, dword ptr [eax + 14h]
        mov esi, dword ptr [ecx + 4]
        add ebp, edx
        cmp esi, ebp
        ; Exact mapped bytes 7C 39: jl 0x100c8f10
        __asm _emit 0x7c
        __asm _emit 0x39
        mov ebp, dword ptr [eax + 1ch]
        add ebp, edx
        cmp esi, ebp
        ; Exact mapped bytes 7D 30: jge 0x100c8f10
        __asm _emit 0x7d
        __asm _emit 0x30
        mov edx, dword ptr [eax + 8]
        mov ebp, dword ptr [eax + 18h]
        mov esi, dword ptr [ecx + 8]
        add ebp, edx
        cmp esi, ebp
        ; Exact mapped bytes 7C 21: jl 0x100c8f10
        __asm _emit 0x7c
        __asm _emit 0x21
        mov eax, dword ptr [eax + 20h]
        add eax, edx
        cmp esi, eax
        ; Exact mapped bytes 7D 18: jge 0x100c8f10
        __asm _emit 0x7d
        __asm _emit 0x18
        mov eax, 1
        push ebx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 5A 05 00 00: call 0x100c9460
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 84h]
        mov esi, dword ptr [ecx + 4]
        mov edx, dword ptr [eax + 4]
        mov ebp, dword ptr [eax + 14h]
        add ebp, edx
        cmp esi, ebp
        ; Exact mapped bytes 7C 2F: jl 0x100c8f54
        __asm _emit 0x7c
        __asm _emit 0x2f
        mov ebp, dword ptr [eax + 1ch]
        add ebp, edx
        cmp esi, ebp
        ; Exact mapped bytes 7D 26: jge 0x100c8f54
        __asm _emit 0x7d
        __asm _emit 0x26
        mov edx, dword ptr [eax + 8]
        mov esi, dword ptr [eax + 18h]
        mov ecx, dword ptr [ecx + 8]
        add esi, edx
        cmp ecx, esi
        ; Exact mapped bytes 7C 17: jl 0x100c8f54
        __asm _emit 0x7c
        __asm _emit 0x17
        mov eax, dword ptr [eax + 20h]
        add eax, edx
        cmp ecx, eax
        ; Exact mapped bytes 7D 0E: jge 0x100c8f54
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov eax, 2
        push ebx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 0C 05 00 00: call 0x100c9460
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
