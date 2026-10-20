// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10080F10 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_10080f10_10080F10() {
    __asm {
        push esi
        mov esi, ecx
        xor eax, eax
        push 0
        mov edx, dword ptr [esi + 0d1ch]
        push 0
        test edx, edx
        sete al
        test eax, eax
        mov dword ptr [esi + 0d1ch], eax
        push 10101h
        ; Exact mapped bytes 74 2B: je 0x10080f5e
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [esi + 0d14h]
        push 101aba28h
        ; Exact mapped bytes E8 1D 15 F9 FF: call 0x10012460
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x15
        __asm _emit 0xf9
        __asm _emit 0xff
        lea ecx, [esi + 54h]
        mov edx, 3
        mov esi, 0fffeh
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x10080f50
        __asm _emit 0x75
        __asm _emit 0xf4
        pop esi
        ret
        mov ecx, dword ptr [esi + 0d14h]
        push 101aba0ch
        ; Exact mapped bytes E8 F2 14 F9 FF: call 0x10012460
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x14
        __asm _emit 0xf9
        __asm _emit 0xff
        lea ecx, [esi + 54h]
        mov edx, 2
        mov esi, 1
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x10080f7b
        __asm _emit 0x75
        __asm _emit 0xf4
        pop esi
        ret
    }
}
