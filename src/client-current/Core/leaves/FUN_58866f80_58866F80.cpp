// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58866F80 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_58866f80_58866F80() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push edi
        mov edi, dword ptr [ebp + 8]
        test edi, edi
        ; Exact mapped bytes 74 70: je 0x58866ffd
        __asm _emit 0x74
        __asm _emit 0x70
        mov edx, dword ptr [ebp + 0ch]
        test edx, edx
        ; Exact mapped bytes 74 69: je 0x58866ffd
        __asm _emit 0x74
        __asm _emit 0x69
        push esi
        mov esi, dword ptr [ebp + 10h]
        test esi, esi
        ; Exact mapped bytes 75 1C: jne 0x58866fb8
        __asm _emit 0x75
        __asm _emit 0x1c
        xor eax, eax
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes E8 C9 B4 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 FA 9F FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x9f
        __asm _emit 0xfe
        __asm _emit 0xff
        lea eax, [esi + 16h]
        pop esi
        pop edi
        pop ebp
        ret
        mov ecx, edi
        sub esi, edi
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        movzx eax, word ptr [esi + ecx]
        lea ecx, [ecx + 2]
        ; Exact mapped bytes 66 89 41 FE: mov word ptr [ecx - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0xfe
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 27: je 0x58866ff7
        __asm _emit 0x74
        __asm _emit 0x27
        sub edx, 1
        ; Exact mapped bytes 75 EB: jne 0x58866fc0
        __asm _emit 0x75
        __asm _emit 0xeb
        test edx, edx
        ; Exact mapped bytes 75 1E: jne 0x58866ff7
        __asm _emit 0x75
        __asm _emit 0x1e
        xor eax, eax
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes E8 8C B4 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 22h
        ; Exact mapped bytes E8 BD 9F FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x9f
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        mov eax, 22h
        pop edi
        pop ebp
        ret
        pop esi
        xor eax, eax
        pop edi
        pop ebp
        ret
        ; Exact mapped bytes E8 6D B4 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 9E 9F FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x9f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, 16h
        pop edi
        pop ebp
        ret
    }
}
