// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A6370 .. +0x14A bytes.
extern "C" __declspec(naked) void FUN_587a6370_587A6370() {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 8]
        mov edx, 1
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        movzx edi, word ptr [ebp + 144h]
        movzx eax, byte ptr [esi + 9]
        mov ecx, eax
        mov dword ptr [esp + 14h], eax
        shl edx, cl
        cmp edi, edx
        ; Exact mapped bytes 0F 8D 1B 01 00 00: jge 0x587a64b6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 FF: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 12 01 00 00: je 0x587a64b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 0bh]
        imul ecx, dword ptr [esi]
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esi + 4]
        dec edx
        push ebx
        mov ebx, dword ptr [ebp + 128h]
        add eax, ebx
        neg ecx
        and ecx, 7
        cmp edx, 7
        ; Exact mapped bytes 0F 87 EB 00 00 00: ja 0x587a64b5
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 95 BC 64 7A 58: jmp dword ptr [edx*4 + 0x587a64bc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0x64
        __asm _emit 0x7a
        __asm _emit 0x58
        cmp eax, ebx
        ; Exact mapped bytes 0F 86 DC 00 00 00: jbe 0x587a64b5
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [eax]
        shr dl, cl
        test dl, dl
        ; Exact mapped bytes 74 0A: je 0x587a63f2
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [ebp + 148h], 1
        dec eax
        xor ecx, ecx
        cmp eax, ebx
        ; Exact mapped bytes 77 E7: ja 0x587a63e0
        __asm _emit 0x77
        __asm _emit 0xe7
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
        cmp eax, ebx
        ; Exact mapped bytes 0F 86 AF 00 00 00: jbe 0x587a64b5
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 148h]
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        movzx edi, byte ptr [eax]
        mov esi, edx
        shr edi, cl
        mov ecx, edi
        and ecx, 3
        cmp ecx, edx
        ; Exact mapped bytes 7E 04: jle 0x587a6424
        __asm _emit 0x7e
        __asm _emit 0x04
        mov edx, ecx
        mov esi, ecx
        mov ecx, edi
        shr ecx, 2
        and ecx, 3
        cmp ecx, esi
        ; Exact mapped bytes 7E 04: jle 0x587a6434
        __asm _emit 0x7e
        __asm _emit 0x04
        mov edx, ecx
        mov esi, ecx
        mov ecx, edi
        shr ecx, 4
        and ecx, 3
        cmp ecx, esi
        ; Exact mapped bytes 7E 04: jle 0x587a6444
        __asm _emit 0x7e
        __asm _emit 0x04
        mov edx, ecx
        mov esi, ecx
        shr edi, 6
        cmp edi, esi
        cmovg edx, edi
        dec eax
        xor ecx, ecx
        cmp eax, ebx
        ; Exact mapped bytes 77 BD: ja 0x587a6410
        __asm _emit 0x77
        __asm _emit 0xbd
        pop ebx
        pop edi
        pop esi
        mov dword ptr [ebp + 148h], edx
        pop ebp
        ret
        cmp eax, ebx
        ; Exact mapped bytes 76 53: jbe 0x587a64b5
        __asm _emit 0x76
        __asm _emit 0x53
        mov edx, dword ptr [ebp + 148h]
        movzx esi, byte ptr [eax]
        mov edi, edx
        shr esi, cl
        mov ecx, esi
        and ecx, 0fh
        cmp ecx, edx
        ; Exact mapped bytes 7E 04: jle 0x587a647c
        __asm _emit 0x7e
        __asm _emit 0x04
        mov edx, ecx
        mov edi, ecx
        shr esi, 4
        cmp esi, edi
        cmovg edx, esi
        dec eax
        xor ecx, ecx
        cmp eax, ebx
        ; Exact mapped bytes 77 DD: ja 0x587a6468
        __asm _emit 0x77
        __asm _emit 0xdd
        pop ebx
        pop edi
        pop esi
        mov dword ptr [ebp + 148h], edx
        pop ebp
        ret
        cmp eax, ebx
        ; Exact mapped bytes 76 1B: jbe 0x587a64b5
        __asm _emit 0x76
        __asm _emit 0x1b
        mov edx, dword ptr [ebp + 148h]
        mov ecx, edx
        movzx edx, byte ptr [eax]
        cmp edx, ecx
        cmovle edx, ecx
        dec eax
        cmp eax, ebx
        ; Exact mapped bytes 77 F1: ja 0x587a64a0
        __asm _emit 0x77
        __asm _emit 0xf1
        mov dword ptr [ebp + 148h], edx
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}
