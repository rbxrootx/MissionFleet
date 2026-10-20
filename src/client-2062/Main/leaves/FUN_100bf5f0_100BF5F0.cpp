// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BF5F0 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_100bf5f0_100BF5F0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, eax
        and ecx, 1f00h
        cmp ecx, 200h
        ; Exact mapped bytes 75 33: jne 0x100bf63a
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [esi + 588h]
        and eax, 0e4fdh
        or ah, 4
        push 0
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E8 80 2E F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x2e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 58ch]
        push 0
        ; Exact mapped bytes E8 73 2E F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x2e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 590h]
        push 0
        ; Exact mapped bytes E8 66 2E F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x2e
        __asm _emit 0xf7
        __asm _emit 0xff
        pop esi
        ret
    }
}
