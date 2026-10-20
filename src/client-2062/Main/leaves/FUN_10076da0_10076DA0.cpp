// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10076DA0 .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_10076da0_10076DA0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ebx, 80h
        lea edi, [esi + 0c8h]
        xor ebp, ebp
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10076dc1
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi], ebp
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x10076db3
        __asm _emit 0x75
        __asm _emit 0xec
        mov eax, dword ptr [esi + 70h]
        xor ebx, ebx
        cmp eax, ebp
        ; Exact mapped bytes 7E 1F: jle 0x10076def
        __asm _emit 0x7e
        __asm _emit 0x1f
        lea edi, [esi + 2c8h]
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10076de4
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi], ebp
        mov eax, dword ptr [esi + 70h]
        inc ebx
        add edi, 4
        cmp ebx, eax
        ; Exact mapped bytes 7C E7: jl 0x10076dd6
        __asm _emit 0x7c
        __asm _emit 0xe7
        mov dword ptr [esi + 7ch], ebp
        mov dword ptr [esi + 70h], ebp
        mov dword ptr [esi + 6ch], ebp
        mov dword ptr [esi + 80h], ebp
        mov dword ptr [esi + 78h], 1
        mov dword ptr [esi + 74h], ebp
        mov dword ptr [esi + 0c4h], ebp
        add esi, 2e8h
        mov edi, 20h
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 60 D7 06 00: call 0x100e4580
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xd7
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 F3: jne 0x10076e19
        __asm _emit 0x75
        __asm _emit 0xf3
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
