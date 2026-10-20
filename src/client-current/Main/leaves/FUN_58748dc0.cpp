// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58748DC0 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_58748dc0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 90h]
        mov ecx, dword ptr [esi + 100h]
        push edi
        xor ebx, ebx
        inc eax
        push eax
        push ebx
        push ecx
        mov dword ptr [esi + 0fch], ebx
        mov dword ptr [esi + 0f8h], ebx
        mov dword ptr [esi + 0f4h], ebx
        mov dword ptr [esi + 0f0h], ebx
        ; Exact mapped bytes E8 53 3E 23 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x3e
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 0ch
        lea edi, [esi + 0bch]
        lea ebp, [ebx + 0ah]
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x58748e11
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [edi], ebx
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x58748e01
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, dword ptr [esi + 0b0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x58748e31
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 0b0h], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
