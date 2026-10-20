// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041780D .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_0041780d_0041780D() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        test edi, edi
        ; Exact mapped bytes 74 1B: je 0x417834
        __asm _emit 0x74
        __asm _emit 0x1b
        push ebx
        lea ebx, [esi + 10h]
        push ebx
        ; Exact mapped bytes FF 15 7C C1 43 00: call dword ptr [0x43c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ch]
        push ebx
        mov dword ptr [edi], eax
        mov dword ptr [esi + 0ch], edi
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        pop ebx
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
