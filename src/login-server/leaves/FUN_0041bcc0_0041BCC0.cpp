// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041BCC0 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_0041bcc0_0041BCC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        xor edx, edx
        cmp dword ptr [ecx + 48h], edx
        ; Exact mapped bytes 74 13: je 0x41bce0
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ecx + 50h]
        cmp ecx, edx
        ; Exact mapped bytes 74 11: je 0x41bce5
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ecx + 0ch], edx
        ; Exact mapped bytes 74 0C: je 0x41bce5
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes E8 B3 F7 FF FF: call 0x41b491
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        leave
        ret
        cmp dword ptr [ecx + 38h], edx
        ; Exact mapped bytes 75 04: jne 0x41bce9
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        leave
        ret
        mov eax, dword ptr [ecx + 40h]
        push ebx
        mov ecx, dword ptr [ecx + 8]
        push esi
        push edi
        push 1
        mov dword ptr [ebp - 10h], eax
        pop eax
        lea ebx, [ebp - 18h]
        xor esi, esi
        push ebx
        push edx
        push esi
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], edx
        mov edi, dword ptr [ecx]
        push 440804h
        push eax
        push ecx
        ; Exact mapped bytes FF 57 20: call dword ptr [edi + 0x20]
        __asm _emit 0xff
        __asm _emit 0x57
        __asm _emit 0x20
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
