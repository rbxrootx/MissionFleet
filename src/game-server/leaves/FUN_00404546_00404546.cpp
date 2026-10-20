// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00404546 .. +0x268 bytes.
extern "C" __declspec(naked) void FUN_00404546_00404546() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 38h]
        mov ecx, 0eh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 0d7ch]
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes E8 C6 02 00 00: call 0x404840
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 18 02 00 00: jne 0x40479a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 280h
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        mov dword ptr [ebp - 28h], ecx
        lea edx, [ebp - 20h]
        push edx
        lea eax, [ebp - 24h]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 13 F2 FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 E2 01 00 00: je 0x40479a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 82 70 01 00 00: mov ax, word ptr [edx + 0x170]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 4D FA: mov word ptr [ebp - 6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfa
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx + 180h]
        mov byte ptr [ebp - 4], al
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 180h]
        shl ecx, 6
        lea ecx, [edx + ecx + 0cb0h]
        ; Exact mapped bytes E8 21 02 00 00: call 0x404820
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 3], al
        mov edx, dword ptr [ebp - 6]
        and edx, 0ffffh
        and edx, 1fh
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 6]
        and eax, 0ffffh
        and eax, 3e0h
        sar eax, 5
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 180h]
        shl edx, 7
        mov eax, dword ptr [ebp - 38h]
        lea ecx, [eax + edx + 0ch]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + edx*4]
        and ecx, dword ptr [esi + eax*4 + 40ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 16 01 00 00: jne 0x404768
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 280h
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 184h]
        mov dword ptr [ebp - 34h], eax
        lea ecx, [ebp - 2ch]
        push ecx
        lea edx, [ebp - 30h]
        push edx
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 43 F1 FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 67: je 0x4046eb
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 184h]
        and edx, 1fh
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 184h]
        and ecx, 3e0h
        sar ecx, 5
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 180h]
        shl eax, 7
        mov ecx, dword ptr [ebp - 38h]
        lea edx, [ecx + eax + 0ch]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ecx + eax*4 + 40ch]
        not eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [edx + ecx*4]
        and edx, eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 180h]
        shl ecx, 7
        mov eax, dword ptr [ebp - 38h]
        lea ecx, [eax + ecx + 0ch]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + eax*4], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 180h]
        shl edx, 7
        mov eax, dword ptr [ebp - 38h]
        lea ecx, [eax + edx + 0ch]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + edx*4]
        or ecx, dword ptr [esi + eax*4 + 40ch]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 180h]
        shl eax, 7
        mov edx, dword ptr [ebp - 38h]
        lea eax, [edx + eax + 0ch]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4], ecx
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 184h], eax
        push 6
        lea edx, [ebp - 8]
        push edx
        push 20001h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 170h]
        or ecx, 1000000h
        push ecx
        push 80020116h
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 90 53 08 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 2B: jmp 0x404793
        __asm _emit 0xeb
        __asm _emit 0x2b
        push 6
        lea eax, [ebp - 8]
        push eax
        push 20001h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 170h]
        or edx, 2000000h
        push edx
        push 80020116h
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 63 53 08 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x40479c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        add esp, 38h
        cmp ebp, esp
        ; Exact mapped bytes E8 38 40 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
