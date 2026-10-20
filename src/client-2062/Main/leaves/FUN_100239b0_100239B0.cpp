// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100239B0 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_100239b0_100239B0() {
    __asm {
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        sub esp, 100h
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [eax + 0ch]
        xor ebx, ebx
        mov ebp, ecx
        test esi, esi
        ; Exact mapped bytes 74 57: je 0x10023a20
        __asm _emit 0x74
        __asm _emit 0x57
        push edi
        xor edi, edi
        mov ecx, esi
        ; Exact mapped bytes E8 FD AB 0C 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xab
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 3E: jne 0x10023a18
        __asm _emit 0x75
        __asm _emit 0x3e
        xor eax, eax
        test edi, edi
        ; Exact mapped bytes 7E 1B: jle 0x100239fb
        __asm _emit 0x7e
        __asm _emit 0x1b
        xor edx, edx
        lea ecx, [esp + 90h]
        mov dl, byte ptr [esi + 330h]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 74 59: je 0x10023a4c
        __asm _emit 0x74
        __asm _emit 0x59
        inc eax
        add ecx, 4
        cmp eax, ebx
        ; Exact mapped bytes 7C F4: jl 0x100239ef
        __asm _emit 0x7c
        __asm _emit 0xf4
        mov eax, dword ptr [esi + 5c54h]
        xor ecx, ecx
        mov cl, byte ptr [esi + 330h]
        mov dword ptr [esp + edi + 10h], eax
        mov dword ptr [esp + edi + 90h], ecx
        inc ebx
        add edi, 4
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 AD: jne 0x100239cc
        __asm _emit 0x75
        __asm _emit 0xad
        pop edi
        xor esi, esi
        test ebx, ebx
        ; Exact mapped bytes 7E 1C: jle 0x10023a42
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov eax, dword ptr [esp + esi*4 + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x10023a3d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [esp + esi*4 + 8ch]
        mov ecx, ebp
        push edx
        ; Exact mapped bytes E8 33 00 00 00: call 0x10023a70
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        cmp esi, ebx
        ; Exact mapped bytes 7C E4: jl 0x10023a26
        __asm _emit 0x7c
        __asm _emit 0xe4
        pop esi
        pop ebp
        pop ebx
        add esp, 100h
        ret
        mov ecx, dword ptr [esp + eax*4 + 10h]
        lea eax, [esp + eax*4 + 10h]
        test ecx, ecx
        ; Exact mapped bytes 75 C0: jne 0x10023a18
        __asm _emit 0x75
        __asm _emit 0xc0
        mov ecx, dword ptr [esi + 5c54h]
        test ecx, ecx
        ; Exact mapped bytes 74 B6: je 0x10023a18
        __asm _emit 0x74
        __asm _emit 0xb6
        mov dword ptr [eax], 1
        ; Exact mapped bytes EB AE: jmp 0x10023a18
        __asm _emit 0xeb
        __asm _emit 0xae
    }
}
