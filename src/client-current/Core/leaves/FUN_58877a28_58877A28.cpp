// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58877A28 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_58877a28_58877A28() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 6B 11 FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        xor ebx, ebx
        push 2
        pop edx
        mov ecx, dword ptr [esi + 50h]
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
        ; Exact mapped bytes 75 F6: jne 0x58877a42
        __asm _emit 0x75
        __asm _emit 0xf6
        sub ecx, edi
        xor eax, eax
        sar ecx, 1
        cmp ecx, 3
        sete al
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes 74 0B: je 0x58877a68
        __asm _emit 0x74
        __asm _emit 0x0b
        push dword ptr [esi + 50h]
        ; Exact mapped bytes E8 22 00 00 00: call 0x58877a87
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov edx, eax
        push 1
        push 58877d07h
        mov dword ptr [esi + 5ch], edx
        ; Exact mapped bytes FF 15 A0 41 89 58: call dword ptr [0x588941a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        test byte ptr [eax], 4
        ; Exact mapped bytes 75 02: jne 0x58877a82
        __asm _emit 0x75
        __asm _emit 0x02
        mov dword ptr [eax], ebx
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
