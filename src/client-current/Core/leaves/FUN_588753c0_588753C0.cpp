// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588753C0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_588753c0_588753C0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 8]
        push edi
        xor edi, edi
        ; Exact mapped bytes 66 39 3A: cmp word ptr [edx], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x3a
        ; Exact mapped bytes 74 21: je 0x588753f1
        __asm _emit 0x74
        __asm _emit 0x21
        push esi
        mov ecx, edx
        lea esi, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 F5: jne 0x588753d6
        __asm _emit 0x75
        __asm _emit 0xf5
        sub ecx, esi
        sar ecx, 1
        lea edx, [edx + ecx*2]
        add edx, 2
        ; Exact mapped bytes 66 39 3A: cmp word ptr [edx], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x3a
        ; Exact mapped bytes 75 E1: jne 0x588753d1
        __asm _emit 0x75
        __asm _emit 0xe1
        pop esi
        lea eax, [edx + 2]
        pop edi
        pop ebp
        ret
    }
}
