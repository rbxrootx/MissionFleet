// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58751A10 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_58751a10() {
    __asm {
        mov eax, ecx
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 4
        ; Exact mapped bytes 74 38: je 0x58751a53
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [eax + 68h]
        test ecx, ecx
        ; Exact mapped bytes 74 31: je 0x58751a53
        __asm _emit 0x74
        __asm _emit 0x31
        inc dword ptr [eax + 64h]
        cmp dword ptr [eax + 64h], ecx
        ; Exact mapped bytes 7C 29: jl 0x58751a53
        __asm _emit 0x7c
        __asm _emit 0x29
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [eax + 64h], 0
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x58751a53
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ecx]
        push 0
        push 0f230h
        push eax
        mov eax, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ret
    }
}
