// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AFB80 .. +0x414 bytes.
extern "C" __declspec(naked) void FUN_587afb80_587AFB80() {
    __asm {
        sub esp, 1ch
        push ebx
        mov ebx, dword ptr [esp + 28h]
        test ebx, ebx
        ; Exact mapped bytes 75 07: jne 0x587afb93
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        pop ebx
        add esp, 1ch
        ret
        mov ecx, dword ptr [esp + 24h]
        push edi
        mov edi, dword ptr [esp + 30h]
        not ecx
        cmp edi, 17h
        ; Exact mapped bytes 0F 82 06 03 00 00: jb 0x587afead
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test bl, 3
        ; Exact mapped bytes 74 18: je 0x587afbc4
        __asm _emit 0x74
        __asm _emit 0x18
        movzx eax, byte ptr [ebx]
        inc ebx
        xor eax, ecx
        shr ecx, 8
        movzx eax, al
        xor ecx, dword ptr [eax*4 + 588b9c60h]
        sub edi, 1
        ; Exact mapped bytes 75 E3: jne 0x587afba7
        __asm _emit 0x75
        __asm _emit 0xe3
        mov eax, 0cccccccdh
        mov dword ptr [esp + 2ch], ebx
        mul edi
        push ebp
        mov ebp, edx
        shr ebp, 4
        imul eax, ebp, -14h
        push esi
        xor esi, esi
        mov dword ptr [esp + 10h], esi
        mov dword ptr [esp + 14h], esi
        add edi, eax
        mov dword ptr [esp + 18h], esi
        mov dword ptr [esp + 38h], edi
        sub ebp, 1
        ; Exact mapped bytes 0F 84 82 01 00 00: je 0x587afd78
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        mov esi, dword ptr [esp + 34h]
        mov ebx, dword ptr [ebx]
        xor ebx, ecx
        mov eax, dword ptr [esi + 4]
        xor eax, edi
        mov edx, dword ptr [esi + 8]
        xor edx, dword ptr [esp + 10h]
        mov dword ptr [esp + 24h], eax
        mov ecx, dword ptr [esi + 0ch]
        xor ecx, dword ptr [esp + 14h]
        movzx eax, al
        mov dword ptr [esp + 1ch], ecx
        mov ecx, dword ptr [esi + 10h]
        add esi, 14h
        xor ecx, dword ptr [esp + 18h]
        mov edi, dword ptr [eax*4 + 588ba460h]
        movzx eax, dl
        mov dword ptr [esp + 20h], ecx
        mov dword ptr [esp + 28h], edx
        movzx ecx, bl
        mov eax, dword ptr [eax*4 + 588ba460h]
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [esp + 1ch]
        movzx eax, al
        mov ecx, dword ptr [ecx*4 + 588ba460h]
        mov dword ptr [esp + 34h], esi
        mov esi, dword ptr [esp + 24h]
        mov eax, dword ptr [eax*4 + 588ba460h]
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esp + 20h]
        movzx eax, al
        mov eax, dword ptr [eax*4 + 588ba460h]
        mov dword ptr [esp + 18h], eax
        mov eax, ebx
        shr eax, 10h
        movzx edx, al
        mov eax, ebx
        shr eax, 8
        movzx eax, al
        shr ebx, 18h
        mov edx, dword ptr [edx*4 + 588bac60h]
        xor edx, dword ptr [eax*4 + 588ba860h]
        mov eax, esi
        xor edx, dword ptr [ebx*4 + 588bb060h]
        shr eax, 10h
        xor ecx, edx
        movzx edx, al
        mov eax, esi
        shr eax, 8
        movzx eax, al
        mov ebx, dword ptr [esp + 1ch]
        mov edx, dword ptr [edx*4 + 588bac60h]
        shr esi, 18h
        xor edx, dword ptr [eax*4 + 588ba860h]
        xor edx, dword ptr [esi*4 + 588bb060h]
        mov esi, dword ptr [esp + 28h]
        xor edi, edx
        mov eax, esi
        shr eax, 10h
        movzx edx, al
        mov eax, esi
        shr eax, 8
        movzx eax, al
        shr esi, 18h
        mov edx, dword ptr [edx*4 + 588bac60h]
        xor edx, dword ptr [eax*4 + 588ba860h]
        mov eax, ebx
        xor edx, dword ptr [esi*4 + 588bb060h]
        xor dword ptr [esp + 10h], edx
        shr eax, 10h
        movzx edx, al
        mov eax, ebx
        shr eax, 8
        movzx eax, al
        shr ebx, 18h
        mov edx, dword ptr [edx*4 + 588bac60h]
        xor edx, dword ptr [eax*4 + 588ba860h]
        xor edx, dword ptr [ebx*4 + 588bb060h]
        mov ebx, dword ptr [esp + 20h]
        mov eax, ebx
        xor dword ptr [esp + 14h], edx
        shr eax, 10h
        movzx edx, al
        mov eax, ebx
        shr eax, 8
        movzx eax, al
        shr ebx, 18h
        mov edx, dword ptr [edx*4 + 588bac60h]
        xor edx, dword ptr [eax*4 + 588ba860h]
        xor edx, dword ptr [ebx*4 + 588bb060h]
        xor dword ptr [esp + 18h], edx
        mov ebx, dword ptr [esp + 34h]
        sub ebp, 1
        ; Exact mapped bytes 0F 85 8C FE FF FF: jne 0x587afbf8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 28h], edi
        mov edi, dword ptr [esp + 38h]
        mov esi, dword ptr [esp + 28h]
        mov edx, dword ptr [ebx]
        xor edx, ecx
        mov ecx, dword ptr [ebx + 4]
        movzx eax, dl
        shr edx, 8
        xor edx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, dl
        shr edx, 8
        xor edx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, dl
        shr edx, 8
        xor edx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, dl
        shr edx, 8
        xor edx, dword ptr [eax*4 + 588b9c60h]
        xor ecx, edx
        mov edx, dword ptr [ebx + 8]
        xor ecx, esi
        mov ebx, dword ptr [ebx + 0ch]
        movzx eax, cl
        shr ecx, 8
        mov esi, dword ptr [esp + 34h]
        xor ecx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, cl
        shr ecx, 8
        xor ecx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, cl
        shr ecx, 8
        xor ecx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, cl
        shr ecx, 8
        xor ecx, dword ptr [eax*4 + 588b9c60h]
        xor edx, ecx
        mov ecx, dword ptr [esi + 10h]
        xor edx, dword ptr [esp + 10h]
        movzx eax, dl
        shr edx, 8
        xor edx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, dl
        shr edx, 8
        xor edx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, dl
        shr edx, 8
        xor edx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, dl
        shr edx, 8
        xor edx, dword ptr [eax*4 + 588b9c60h]
        xor ebx, edx
        xor ebx, dword ptr [esp + 14h]
        movzx eax, bl
        shr ebx, 8
        xor ebx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, bl
        shr ebx, 8
        xor ebx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, bl
        shr ebx, 8
        xor ebx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, bl
        shr ebx, 8
        xor ebx, dword ptr [eax*4 + 588b9c60h]
        xor ecx, ebx
        mov ebx, esi
        xor ecx, dword ptr [esp + 18h]
        movzx eax, cl
        shr ecx, 8
        pop esi
        pop ebp
        xor ecx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, cl
        shr ecx, 8
        xor ecx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, cl
        shr ecx, 8
        xor ecx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, cl
        shr ecx, 8
        xor ecx, dword ptr [eax*4 + 588b9c60h]
        add ebx, 14h
        cmp edi, 8
        ; Exact mapped bytes 0F 82 B0 00 00 00: jb 0x587aff66
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, edi
        shr edx, 3
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        sub edi, 8
        xor eax, ecx
        shr ecx, 8
        movzx eax, al
        xor ecx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, byte ptr [ebx + 1]
        xor eax, ecx
        shr ecx, 8
        movzx eax, al
        xor ecx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, byte ptr [ebx + 2]
        xor eax, ecx
        shr ecx, 8
        movzx eax, al
        xor ecx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, byte ptr [ebx + 3]
        xor eax, ecx
        shr ecx, 8
        movzx eax, al
        xor ecx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, byte ptr [ebx + 4]
        xor eax, ecx
        shr ecx, 8
        movzx eax, al
        xor ecx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, byte ptr [ebx + 5]
        xor eax, ecx
        shr ecx, 8
        movzx eax, al
        xor ecx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, byte ptr [ebx + 6]
        xor eax, ecx
        shr ecx, 8
        movzx eax, al
        xor ecx, dword ptr [eax*4 + 588b9c60h]
        movzx eax, byte ptr [ebx + 7]
        add ebx, 8
        xor eax, ecx
        shr ecx, 8
        movzx eax, al
        xor ecx, dword ptr [eax*4 + 588b9c60h]
        sub edx, 1
        ; Exact mapped bytes 0F 85 5A FF FF FF: jne 0x587afec0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test edi, edi
        ; Exact mapped bytes 74 20: je 0x587aff8a
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        lea ebx, [ebx + 1]
        xor eax, ecx
        shr ecx, 8
        movzx eax, al
        xor ecx, dword ptr [eax*4 + 588b9c60h]
        sub edi, 1
        ; Exact mapped bytes 75 E6: jne 0x587aff70
        __asm _emit 0x75
        __asm _emit 0xe6
        not ecx
        pop edi
        mov eax, ecx
        pop ebx
        add esp, 1ch
        ret
    }
}
