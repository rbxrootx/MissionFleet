// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883AEC2 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_5883aec2_5883AEC2() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [esi + 10h]
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x5883aefb
        __asm _emit 0x74
        __asm _emit 0x2b
        push edi
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x5883aef8
        __asm _emit 0x74
        __asm _emit 0x21
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 14 02 00 00: call 0x5883b0f3
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 14h], 8
        ; Exact mapped bytes 72 04: jb 0x5883aee9
        __asm _emit 0x72
        __asm _emit 0x04
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883aeeb
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, esi
        ; Exact mapped bytes 66 83 3C 78 7F: cmp word ptr [eax + edi*2], 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x78
        __asm _emit 0x7f
        ; Exact mapped bytes 77 0C: ja 0x5883aefe
        __asm _emit 0x77
        __asm _emit 0x0c
        inc edi
        cmp edi, dword ptr [esi + 10h]
        ; Exact mapped bytes 72 DF: jb 0x5883aed7
        __asm _emit 0x72
        __asm _emit 0xdf
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        ret
        xor eax, eax
        inc eax
        ; Exact mapped bytes EB F7: jmp 0x5883aefa
        __asm _emit 0xeb
        __asm _emit 0xf7
    }
}
