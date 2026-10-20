// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879F4D0 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_5879f4d0_5879F4D0() {
    __asm {
        sub esp, 1ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 18h], eax
        mov ecx, dword ptr [esp + 28h]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        push esi
        mov esi, dword ptr [esp + 30h]
        mov eax, esi
        cdq
        xor eax, edx
        ; Exact mapped bytes 66 0F D6 44 24 14: movq qword ptr [esp + 0x14], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        push edi
        mov edi, dword ptr [esp + 28h]
        sub eax, edx
        push eax
        push ecx
        lea eax, [esp + 28h]
        push eax
        lea eax, [esp + 14h]
        push eax
        ; Exact mapped bytes 0F 11 44 24 18: movups xmmword ptr [esp + 0x18], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E8 AE FA FF FF: call 0x5879efc0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test esi, esi
        ; Exact mapped bytes 79 0C: jns 0x5879f525
        __asm _emit 0x79
        __asm _emit 0x0c
        lea ecx, [esp + 8]
        cmp eax, ecx
        ; Exact mapped bytes 76 04: jbe 0x5879f525
        __asm _emit 0x76
        __asm _emit 0x04
        dec eax
        mov byte ptr [eax], 2dh
        mov esi, dword ptr [esp + 2ch]
        lea ecx, [esi - 1]
        cmp ecx, 7
        ; Exact mapped bytes 77 34: ja 0x5879f565
        __asm _emit 0x77
        __asm _emit 0x34
        shl esi, 5
        add edi, -20h
        xor edx, edx
        add edi, esi
        ; Exact mapped bytes 74 28: je 0x5879f565
        __asm _emit 0x74
        __asm _emit 0x28
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x5879f561
        __asm _emit 0x74
        __asm _emit 0x20
        cmp byte ptr [eax], dl
        ; Exact mapped bytes 74 1C: je 0x5879f561
        __asm _emit 0x74
        __asm _emit 0x1c
        mov esi, edi
        sub esi, eax
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 1fh
        ; Exact mapped bytes 73 0C: jae 0x5879f561
        __asm _emit 0x73
        __asm _emit 0x0c
        mov cl, byte ptr [eax]
        inc edx
        mov byte ptr [esi + eax], cl
        inc eax
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 75 EF: jne 0x5879f550
        __asm _emit 0x75
        __asm _emit 0xef
        mov byte ptr [edi + edx], 0
        mov ecx, dword ptr [esp + 20h]
        pop edi
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 DE 1A 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x1a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 1ch
        ret
    }
}
