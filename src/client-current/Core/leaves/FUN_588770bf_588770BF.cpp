// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588770BF .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_588770bf_588770BF() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        xor ebx, ebx
        push edi
        push 2
        pop edx
        mov ecx, dword ptr [esi]
        lea edi, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, edx
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 F6: jne 0x588770d4
        __asm _emit 0x75
        __asm _emit 0xf6
        sub ecx, edi
        xor eax, eax
        sar ecx, 1
        cmp ecx, 3
        sete al
        mov dword ptr [esi + 10h], eax
        ; Exact mapped bytes 74 0A: je 0x588770f9
        __asm _emit 0x74
        __asm _emit 0x0a
        push dword ptr [esi]
        ; Exact mapped bytes E8 22 00 00 00: call 0x58877118
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov edx, eax
        push ebx
        push ebx
        push 3
        push 5887742ch
        mov dword ptr [esi + 0ch], edx
        ; Exact mapped bytes E8 1D 86 FF FF: call 0x5886f727
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esi + 8], 4
        ; Exact mapped bytes 75 03: jne 0x58877113
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [esi + 8], ebx
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
