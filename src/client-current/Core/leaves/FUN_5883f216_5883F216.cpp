// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883F216 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_5883f216_5883F216() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [ebp - 4], edi
        lea ecx, [edi + 24h]
        ; Exact mapped bytes E8 CE FF FF FF: call 0x5883f1f7
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        xor eax, eax
        mov dword ptr [edi + 48h], ecx
        mov dword ptr [edi + 74h], ecx
        mov dword ptr [edi + 78h], ecx
        mov dword ptr [edi + 4ch], ecx
        mov dword ptr [edi + 50h], ecx
        mov dword ptr [edi + 54h], ecx
        mov dword ptr [edi + 58h], ecx
        mov dword ptr [edi + 5ch], ecx
        mov dword ptr [edi + 60h], ecx
        mov dword ptr [edi + 64h], ecx
        mov dword ptr [edi + 68h], ecx
        mov dword ptr [edi], ecx
        mov dword ptr [edi + 4], ecx
        mov dword ptr [edi + 8], ecx
        mov dword ptr [edi + 0ch], ecx
        ; Exact mapped bytes 66 89 47 6C: mov word ptr [edi + 0x6c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x6c
        ; Exact mapped bytes 66 89 87 9C 00 00 00: mov word ptr [edi + 0x9c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 87 A6 02 00 00: mov word ptr [edi + 0x2a6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 10h], ecx
        mov dword ptr [edi + 14h], ecx
        mov dword ptr [edi + 1ch], ecx
        mov dword ptr [edi + 20h], ecx
        mov dword ptr [edi + 18h], ecx
        mov dword ptr [edi + 70h], ecx
        mov dword ptr [edi + 88h], ecx
        lea ecx, [edi + 24h]
        ; Exact mapped bytes E8 4A 76 00 00: call 0x588468d5
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edi
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
