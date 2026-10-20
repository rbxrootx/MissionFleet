// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884B327 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_5884b327_5884B327() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov edx, 11eh
        push esi
        lea ecx, [eax + 14h]
        xor esi, esi
        ; Exact mapped bytes 66 89 31: mov word ptr [ecx], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x31
        lea ecx, [ecx + 4]
        sub edx, 1
        ; Exact mapped bytes 75 F3: jne 0x5884b336
        __asm _emit 0x75
        __asm _emit 0xf3
        push 1eh
        lea ecx, [eax + 908h]
        pop edx
        xor esi, esi
        ; Exact mapped bytes 66 89 31: mov word ptr [ecx], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x31
        lea ecx, [ecx + 4]
        sub edx, 1
        ; Exact mapped bytes 75 F3: jne 0x5884b34c
        __asm _emit 0x75
        __asm _emit 0xf3
        push 13h
        lea ecx, [eax + 0ef4h]
        pop edx
        xor esi, esi
        ; Exact mapped bytes 66 89 31: mov word ptr [ecx], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x31
        lea ecx, [ecx + 4]
        sub edx, 1
        ; Exact mapped bytes 75 F3: jne 0x5884b362
        __asm _emit 0x75
        __asm _emit 0xf3
        inc edx
        xor ecx, ecx
        ; Exact mapped bytes 66 89 90 14 04 00 00: mov word ptr [eax + 0x414], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 1af40h], ecx
        mov dword ptr [eax + 1af3ch], ecx
        mov dword ptr [eax + 1af34h], ecx
        mov dword ptr [eax + 1af30h], ecx
        mov dword ptr [eax + 1af2ch], ecx
        mov byte ptr [eax + 1af38h], cl
        mov byte ptr [eax + 1af39h], dl
        pop esi
        pop ebp
        ret
    }
}
