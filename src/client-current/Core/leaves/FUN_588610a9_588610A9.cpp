// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588610A9 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_588610a9_588610A9() {
    __asm {
        mov edi, edi
        push ebx
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 6B 2E 00 00: call 0x58863f1f
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [esi + 14h]
        xor ebx, ebx
        ; Exact mapped bytes 66 39 1C 50: cmp word ptr [eax + edx*2], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x1c
        __asm _emit 0x50
        ; Exact mapped bytes 7D 34: jge 0x588610f4
        __asm _emit 0x7d
        __asm _emit 0x34
        mov eax, dword ptr [esi + 8]
        mov cl, byte ptr [eax]
        test cl, cl
        ; Exact mapped bytes 75 24: jne 0x588610ed
        __asm _emit 0x75
        __asm _emit 0x24
        mov dword ptr [esi + 10h], ebx
        xor al, al
        ; Exact mapped bytes 66 89 5E 14: mov word ptr [esi + 0x14], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x14
        mov byte ptr [esi + 16h], bl
        mov dword ptr [esi + 18h], ebx
        mov dword ptr [esi + 1ch], ebx
        mov dword ptr [esi + 20h], ebx
        mov byte ptr [esi + 24h], bl
        mov dword ptr [esi + 28h], ebx
        mov dword ptr [esi + 0ch], 2ah
        ; Exact mapped bytes EB 09: jmp 0x588610f6
        __asm _emit 0xeb
        __asm _emit 0x09
        inc eax
        mov byte ptr [esi + 15h], cl
        mov dword ptr [esi + 8], eax
        mov al, 1
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
