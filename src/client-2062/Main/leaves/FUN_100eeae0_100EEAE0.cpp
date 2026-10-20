// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EEAE0 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_100eeae0_100EEAE0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 5cb8h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x100eeaff
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 5cb8h], 0
        mov ecx, dword ptr [esi + 0e74h]
        xor ebx, ebx
        test byte ptr [ecx + 8], 7
        ; Exact mapped bytes 76 2C: jbe 0x100eeb39
        __asm _emit 0x76
        __asm _emit 0x2c
        lea edi, [esi + 5cbch]
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100eeb25
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi], 0
        mov eax, dword ptr [esi + 0e74h]
        inc ebx
        add edi, 4
        mov cl, byte ptr [eax + 8]
        and ecx, 7
        cmp ebx, ecx
        ; Exact mapped bytes 72 DA: jb 0x100eeb13
        __asm _emit 0x72
        __asm _emit 0xda
        mov eax, dword ptr [esi + 1008h]
        xor ebx, ebx
        test eax, eax
        ; Exact mapped bytes 7E 26: jle 0x100eeb6b
        __asm _emit 0x7e
        __asm _emit 0x26
        lea edi, [esi + 158h]
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100eeb5d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi], 0
        mov eax, dword ptr [esi + 1008h]
        inc ebx
        add edi, 4
        cmp ebx, eax
        ; Exact mapped bytes 7C E0: jl 0x100eeb4b
        __asm _emit 0x7c
        __asm _emit 0xe0
        pop edi
        pop esi
        pop ebx
        ret
    }
}
