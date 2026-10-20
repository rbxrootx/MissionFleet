// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886A3A2 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_5886a3a2_5886A3A2() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        xor edi, edi
        cmp dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes 76 25: jbe 0x5886a3d6
        __asm _emit 0x76
        __asm _emit 0x25
        mov ebx, dword ptr [ebp + 8]
        movzx esi, word ptr [ebx + edi*2]
        ; Exact mapped bytes E8 62 9B FF FF: call 0x58863f1f
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        push 103h
        push esi
        push eax
        ; Exact mapped bytes E8 2C BE FE FF: call 0x588561f5
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x5886a3dd
        __asm _emit 0x74
        __asm _emit 0x0d
        inc edi
        cmp edi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 72 DE: jb 0x5886a3b4
        __asm _emit 0x72
        __asm _emit 0xde
        mov al, 1
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
        xor al, al
        ; Exact mapped bytes EB F7: jmp 0x5886a3d8
        __asm _emit 0xeb
        __asm _emit 0xf7
    }
}
