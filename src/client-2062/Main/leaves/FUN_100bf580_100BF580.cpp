// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BF580 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_100bf580_100BF580() {
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
        cmp ecx, 500h
        ; Exact mapped bytes 75 56: jne 0x100bf5ed
        __asm _emit 0x75
        __asm _emit 0x56
        mov ecx, dword ptr [esi + 588h]
        and eax, 0e1ffh
        or eax, 105h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E8 20 30 F7 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x30
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 58ch]
        ; Exact mapped bytes E8 15 30 F7 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 590h]
        ; Exact mapped bytes E8 0A 30 F7 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x30
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 588h]
        push 1
        ; Exact mapped bytes E8 CD 2E F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x2e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 58ch]
        push 1
        ; Exact mapped bytes E8 C0 2E F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x2e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 590h]
        push 1
        ; Exact mapped bytes E8 B3 2E F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x2e
        __asm _emit 0xf7
        __asm _emit 0xff
        pop esi
        ret
    }
}
