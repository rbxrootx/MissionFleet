// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58762CC0 .. +0x307 bytes.
extern "C" __declspec(naked) void FUN_58762cc0_58762CC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 08 1D D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x1d
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 06: mov ax, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x06
        ; Exact mapped bytes 66 C1 E8 09: shr ax, 9
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x09
        ; Exact mapped bytes 66 83 E0 3F: and ax, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        movzx eax, ax
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 E3 1C D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x1c
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, 1ffh
        ; Exact mapped bytes 66 23 48 06: and cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x06
        movzx eax, cx
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 0ch]
        neg edx
        mov eax, 8
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx + 410ch], edx
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 4110h], ecx
        mov edx, dword ptr [ebp - 0ch]
        neg edx
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 410ch], edx
        mov edx, dword ptr [ebp - 10h]
        neg edx
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 4110h], edx
        mov edx, 8
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + edx + 410ch], ecx
        mov edx, dword ptr [ebp - 10h]
        neg edx
        mov eax, 8
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 4110h], edx
        mov edx, 8
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + eax + 410ch], edx
        mov eax, 8
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 4110h], eax
        mov ecx, dword ptr [ebp - 0ch]
        neg ecx
        mov edx, 8
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 410ch], ecx
        mov ecx, 8
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 4110h], 0
        mov eax, 8
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + ecx + 410ch], eax
        mov ecx, 8
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 4110h], 0
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 14e8h], 0
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 14e8h], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 8F 1B D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x1b
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, 1ffh
        ; Exact mapped bytes 66 23 48 06: and cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x06
        movzx eax, cx
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        neg ecx
        imul eax, dword ptr [ebp - 14h], 0ah
        cdq
        mov esi, 64h
        idiv esi
        add ecx, eax
        mov edx, 8
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + eax + 14ech], ecx
        mov eax, dword ptr [ebp - 14h]
        neg eax
        sub eax, 5
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 14ech], eax
        mov dword ptr [ebp - 18h], 8
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58762ebd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 8D FB 00 00 00: jge 0x58762fc2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 0B 1B D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x1b
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 94 48 BC 02 00 00: movsx edx, word ptr [eax + ecx*2 + 0x2bc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x48
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*8 + 3f78h], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 E5 1A D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x1a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, 1ffh
        ; Exact mapped bytes 66 23 50 06: and dx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x50
        __asm _emit 0x06
        movzx eax, dx
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 C4 1A D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x1a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 94 48 FC 02 00 00: movsx edx, word ptr [eax + ecx*2 + 0x2fc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*8 + 3f7ch], esi
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + edx*8 + 3f78h], 64h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*8 + 3f78h], ecx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + ecx*8 + 3f7ch], 64h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*8 + 3f7ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 66 1A D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x1a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        mov eax, dword ptr [ebp - 8]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov edx, dword ptr [ebp - 8]
        and edx, 80000007h
        ; Exact mapped bytes 79 05: jns 0x58762f98
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffff8h
        inc edx
        shl edx, 2
        mov esi, 1ch
        sub esi, edx
        mov eax, dword ptr [ecx + eax*4 + 29ch]
        mov ecx, esi
        shr eax, cl
        and eax, 0fh
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 4078h], eax
        ; Exact mapped bytes E9 F2 FE FF FF: jmp 0x58762eb4
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
