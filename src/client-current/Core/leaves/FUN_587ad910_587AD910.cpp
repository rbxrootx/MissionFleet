// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AD910 .. +0x22C bytes.
extern "C" __declspec(naked) void FUN_587ad910_587AD910() {
    __asm {
        sub esp, 14h
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 24h]
        push edi
        mov ebx, dword ptr [esi + 2ch]
        lea ecx, [esi + 38h]
        mov dword ptr [esp + 20h], ebx
        lea ebp, [esi + 16b4h]
        mov dword ptr [esp + 28h], ecx
        nop
        mov eax, dword ptr [esi + 2ch]
        mov edx, ecx
        mov edi, dword ptr [esi + 3ch]
        add eax, 0fffffefah
        sub edi, dword ptr [esi + 74h]
        add eax, ebx
        sub edi, dword ptr [esi + 6ch]
        mov dword ptr [esp + 1ch], ebp
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 10h], ebp
        mov dword ptr [esp + 18h], edx
        cmp dword ptr [esi + 6ch], eax
        ; Exact mapped bytes 72 3D: jb 0x587ad997
        __asm _emit 0x72
        __asm _emit 0x3d
        mov ecx, dword ptr [esp + 28h]
        mov eax, ebx
        sub eax, edi
        push eax
        mov ecx, dword ptr [ecx]
        lea eax, [ecx + ebx]
        push eax
        push ecx
        ; Exact mapped bytes E8 21 EF 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xef
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        add esp, 0ch
        sub dword ptr [esi + 70h], ebx
        sub eax, ebx
        sub dword ptr [esi + 5ch], ebx
        mov dword ptr [esi + 6ch], eax
        cmp dword ptr [ebp], eax
        ; Exact mapped bytes 76 03: jbe 0x587ad988
        __asm _emit 0x76
        __asm _emit 0x03
        mov dword ptr [ebp], eax
        push esi
        ; Exact mapped bytes E8 42 04 00 00: call 0x587addd0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        add esp, 4
        add edi, ebx
        mov ebx, dword ptr [esi]
        mov eax, dword ptr [ebx + 4]
        test eax, eax
        ; Exact mapped bytes 0F 84 1B 01 00 00: je 0x587adabf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 74h]
        add ebp, dword ptr [esi + 6ch]
        add ebp, dword ptr [edx]
        cmp eax, edi
        mov dword ptr [esp + 28h], edx
        cmovbe edi, eax
        test edi, edi
        ; Exact mapped bytes 74 42: je 0x587ad9fb
        __asm _emit 0x74
        __asm _emit 0x42
        push edi
        push dword ptr [ebx]
        sub eax, edi
        push ebp
        mov dword ptr [ebx + 4], eax
        ; Exact mapped bytes E8 C9 EE 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xee
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 1ch]
        add esp, 0ch
        mov eax, dword ptr [eax + 18h]
        cmp eax, 1
        ; Exact mapped bytes 75 0C: jne 0x587ad9e1
        __asm _emit 0x75
        __asm _emit 0x0c
        push edi
        push ebp
        push dword ptr [ebx + 30h]
        ; Exact mapped bytes E8 C1 25 00 00: call 0x587affa0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0F: jmp 0x587ad9f0
        __asm _emit 0xeb
        __asm _emit 0x0f
        cmp eax, 2
        ; Exact mapped bytes 75 10: jne 0x587ad9f6
        __asm _emit 0x75
        __asm _emit 0x10
        push edi
        push ebp
        push dword ptr [ebx + 30h]
        ; Exact mapped bytes E8 80 21 00 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebx + 30h], eax
        add esp, 0ch
        add dword ptr [ebx], edi
        add dword ptr [ebx + 8], edi
        mov eax, dword ptr [esp + 10h]
        mov ebp, eax
        add edi, dword ptr [esi + 74h]
        mov dword ptr [esi + 74h], edi
        mov dword ptr [esp + 18h], ebp
        mov ecx, dword ptr [eax]
        lea eax, [edi + ecx]
        cmp eax, 3
        ; Exact mapped bytes 0F 82 8A 00 00 00: jb 0x587adaa3
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        mov ebx, dword ptr [esi + 6ch]
        sub ebx, ecx
        mov ecx, dword ptr [esi + 58h]
        mov eax, dword ptr [eax]
        movzx edx, byte ptr [ebx + eax]
        mov dword ptr [esi + 48h], edx
        movzx eax, byte ptr [ebx + eax + 1]
        shl edx, cl
        xor eax, edx
        and eax, dword ptr [esi + 54h]
        mov dword ptr [esi + 48h], eax
        mov eax, ebp
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 5F: je 0x587adaa3
        __asm _emit 0x74
        __asm _emit 0x5f
        mov ebp, dword ptr [esp + 1ch]
        ; Exact mapped bytes 0F 1F 84 00 00 00 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + 58h]
        mov edx, dword ptr [esi + 34h]
        and edx, ebx
        mov eax, dword ptr [eax]
        movzx edi, byte ptr [ebx + eax + 2]
        mov eax, dword ptr [esi + 48h]
        shl eax, cl
        mov ecx, dword ptr [esi + 40h]
        xor edi, eax
        and edi, dword ptr [esi + 54h]
        mov eax, dword ptr [esi + 44h]
        mov dword ptr [esi + 48h], edi
        ; Exact mapped bytes 66 8B 04 78: mov ax, word ptr [eax + edi*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x78
        ; Exact mapped bytes 66 89 04 51: mov word ptr [ecx + edx*2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x51
        mov ecx, dword ptr [esi + 48h]
        mov eax, dword ptr [esi + 44h]
        ; Exact mapped bytes 66 89 1C 48: mov word ptr [eax + ecx*2], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x1c
        __asm _emit 0x48
        inc ebx
        mov ecx, dword ptr [ebp]
        mov edi, dword ptr [esi + 74h]
        dec ecx
        mov dword ptr [ebp], ecx
        lea eax, [edi + ecx]
        cmp eax, 3
        ; Exact mapped bytes 72 04: jb 0x587ada9f
        __asm _emit 0x72
        __asm _emit 0x04
        test ecx, ecx
        ; Exact mapped bytes 75 B1: jne 0x587ada50
        __asm _emit 0x75
        __asm _emit 0xb1
        mov ebp, dword ptr [esp + 18h]
        cmp edi, 106h
        ; Exact mapped bytes 73 14: jae 0x587adabf
        __asm _emit 0x73
        __asm _emit 0x14
        mov eax, dword ptr [esi]
        mov ebx, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 28h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 0F 85 71 FE FF FF: jne 0x587ad930
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 16c4h]
        mov edi, dword ptr [esi + 3ch]
        cmp ecx, edi
        ; Exact mapped bytes 73 68: jae 0x587adb34
        __asm _emit 0x73
        __asm _emit 0x68
        mov ebx, dword ptr [esi + 6ch]
        add ebx, dword ptr [esi + 74h]
        cmp ecx, ebx
        ; Exact mapped bytes 73 2E: jae 0x587adb04
        __asm _emit 0x73
        __asm _emit 0x2e
        mov eax, 102h
        sub edi, ebx
        cmp edi, eax
        cmova edi, eax
        mov eax, dword ptr [esi + 38h]
        push edi
        add eax, ebx
        push 0
        push eax
        ; Exact mapped bytes E8 20 F3 09 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf3
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [edi + ebx]
        mov dword ptr [esi + 16c4h], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ret
        lea eax, [ebx + 102h]
        cmp ecx, eax
        ; Exact mapped bytes 73 26: jae 0x587adb34
        __asm _emit 0x73
        __asm _emit 0x26
        sub ebx, ecx
        sub edi, ecx
        lea eax, [ebx + 102h]
        cmp eax, edi
        cmovbe edi, eax
        mov eax, dword ptr [esi + 38h]
        push edi
        add eax, ecx
        push 0
        push eax
        ; Exact mapped bytes E8 E5 F2 09 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf2
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        add dword ptr [esi + 16c4h], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ret
    }
}
