// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890BA40 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_5890ba40() {
    __asm {
        mov eax, ecx
        mov edx, dword ptr [eax + 84h]
        mov ecx, dword ptr [eax + 74h]
        push esi
        mov esi, dword ptr [eax + 80h]
        push edi
        lea edi, [esi + edx]
        cmp edi, ecx
        ; Exact mapped bytes 7E 04: jle 0x5890ba5e
        __asm _emit 0x7e
        __asm _emit 0x04
        sub ecx, esi
        mov edx, ecx
        mov ecx, dword ptr [eax + 30h]
        add esi, edx
        pop edi
        mov dword ptr [eax + 80h], esi
        pop esi
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x5890ba8a
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 66 8B 49 24: mov cx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x24
        shr cl, 5
        test cl, 1
        ; Exact mapped bytes 74 0F: je 0x5890ba8a
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        push 0
        push 2
        push eax
        mov eax, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ret
    }
}
