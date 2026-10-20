// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58864070 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_58864070_58864070() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 80 99 96 58 00: cmp dword ptr [0x58969980], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        lea edi, [esi + 1]
        ; Exact mapped bytes 75 1A: jne 0x588640a1
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp edi, 100h
        ; Exact mapped bytes 77 5D: ja 0x588640ec
        __asm _emit 0x77
        __asm _emit 0x5d
        ; Exact mapped bytes A1 60 74 90 58: mov eax, dword ptr [0x58907460]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        pop edi
        movzx eax, word ptr [eax + esi*2]
        and eax, 1
        pop esi
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes E8 FA 4A 00 00: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 4], ecx
        lea ecx, [ebp - 4]
        push ecx
        push eax
        ; Exact mapped bytes E8 6B 8E 00 00: call 0x5886cf21
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add esp, 8
        cmp edi, 100h
        ; Exact mapped bytes 77 0F: ja 0x588640d3
        __asm _emit 0x77
        __asm _emit 0x0f
        mov eax, dword ptr [eax]
        pop edi
        movzx eax, word ptr [eax + esi*2]
        and eax, 1
        pop esi
        mov esp, ebp
        pop ebp
        ret
        cmp dword ptr [eax + 4], 1
        ; Exact mapped bytes 7E 13: jle 0x588640ec
        __asm _emit 0x7e
        __asm _emit 0x13
        push 0
        push 1
        push esi
        ; Exact mapped bytes E8 CF AF 00 00: call 0x5886f0b2
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
        pop edi
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
