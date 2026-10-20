// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CE4B0 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_588ce4b0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 2
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x588ce559
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov ebx, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x588ce4ef
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x588ce4e8
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x588ce4ef
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x588ce4d2
        __asm _emit 0x75
        __asm _emit 0xea
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebx + 4], 20ah
        ; Exact mapped bytes 75 61: jne 0x588ce559
        __asm _emit 0x75
        __asm _emit 0x61
        mov eax, dword ptr [esi + 74h]
        mov edx, dword ptr [eax + 14h]
        add edx, dword ptr [eax + 4]
        push edi
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edi + 4]
        cmp ecx, edx
        ; Exact mapped bytes 7C 49: jl 0x588ce558
        __asm _emit 0x7c
        __asm _emit 0x49
        mov edx, dword ptr [esi + 80h]
        push ebp
        mov ebp, dword ptr [edx + 1ch]
        add ebp, dword ptr [edx + 4]
        cmp ecx, ebp
        pop ebp
        ; Exact mapped bytes 7F 37: jg 0x588ce558
        __asm _emit 0x7f
        __asm _emit 0x37
        mov edx, dword ptr [eax + 18h]
        add edx, dword ptr [eax + 8]
        mov ecx, dword ptr [edi + 8]
        cmp ecx, edx
        ; Exact mapped bytes 7C 2A: jl 0x588ce558
        __asm _emit 0x7c
        __asm _emit 0x2a
        mov edx, dword ptr [eax + 20h]
        add edx, dword ptr [eax + 8]
        cmp ecx, edx
        ; Exact mapped bytes 7F 20: jg 0x588ce558
        __asm _emit 0x7f
        __asm _emit 0x20
        ; Exact mapped bytes 66 83 7B 0A 00: cmp word ptr [ebx + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes 7E 10: jle 0x588ce551
        __asm _emit 0x7e
        __asm _emit 0x10
        push 1
        ; Exact mapped bytes E8 38 FE FF FF: call 0x588ce380
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 28 FE FF FF: call 0x588ce380
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
