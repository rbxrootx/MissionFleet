// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BD8D0 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_588bd8d0() {
    __asm {
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr [ebp + 3d4h]
        push edi
        lea edi, [ebp + 3d4h]
        ; Exact mapped bytes E8 8B A8 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 2C: jle 0x588bd915
        __asm _emit 0x7e
        __asm _emit 0x2c
        mov ecx, dword ptr [edi]
        cmp dword ptr [ecx + 88h], 7
        ; Exact mapped bytes 7E 21: jle 0x588bd915
        __asm _emit 0x7e
        __asm _emit 0x21
        push ebx
        push esi
        ; Exact mapped bytes E8 75 A8 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, eax
        dec esi
        mov ebx, 2
        mov ecx, dword ptr [edi]
        push esi
        ; Exact mapped bytes E8 85 A8 04 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 F0: jne 0x588bd903
        __asm _emit 0x75
        __asm _emit 0xf0
        pop esi
        pop ebx
        pop edi
        mov ecx, ebp
        pop ebp
        ; Exact mapped bytes E9 72 F3 FF FF: jmp 0x588bcc90
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
