// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C0500 .. +0x27E bytes.
extern "C" __declspec(naked) void FUN_100c0500_100C0500() {
    __asm {
        sub esp, 10h
        push ebx
        push ebp
        push esi
        push edi
        push 0
        push 80h
        push 3
        push 0
        push 0
        mov edi, 1
        push 80000000h
        mov ebp, ecx
        push 101ac13ch
        mov dword ptr [esp + 2ch], edi
        mov dword ptr [esp + 30h], edi
        ; Exact mapped bytes FF 15 C4 50 17 10: call dword ptr [0x101750c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov esi, eax
        cmp esi, -1
        ; Exact mapped bytes 75 16: jne 0x100c0550
        __asm _emit 0x75
        __asm _emit 0x16
        push eax
        mov dword ptr [ebp + 0c4h], 0
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x100c0637
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push esi
        mov dword ptr [ebp + 0c4h], edi
        ; Exact mapped bytes FF 15 BC 50 17 10: call dword ptr [0x101750bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, eax
        push edi
        ; Exact mapped bytes E8 39 C2 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xc2
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov ebx, eax
        lea eax, [esp + 1ch]
        push 0
        push eax
        push edi
        push ebx
        push esi
        ; Exact mapped bytes FF 15 B8 50 17 10: call dword ptr [0x101750b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push esi
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        xor eax, eax
        dec edi
        mov dword ptr [esp + 18h], edi
        cmp byte ptr [eax + ebx], 0dh
        ; Exact mapped bytes 75 0A: jne 0x100c059a
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [esp + 10h]
        inc eax
        inc ecx
        mov dword ptr [esp + 10h], ecx
        inc eax
        cmp eax, edi
        ; Exact mapped bytes 76 EB: jbe 0x100c058a
        __asm _emit 0x76
        __asm _emit 0xeb
        mov ecx, dword ptr [esp + 10h]
        lea eax, [ecx + 1]
        lea esi, [eax + eax*8]
        shl esi, 3
        sub esi, eax
        push esi
        ; Exact mapped bytes E8 EC C1 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, esi
        mov edi, eax
        mov edx, ecx
        mov eax, 20202020h
        shr ecx, 2
        mov dword ptr [ebp + 0b0h], edi
        add esp, 4
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        xor esi, esi
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        xor eax, eax
        xor ecx, ecx
        mov dl, byte ptr [esi + ebx]
        cmp dl, 0dh
        ; Exact mapped bytes 75 06: jne 0x100c05e8
        __asm _emit 0x75
        __asm _emit 0x06
        inc esi
        inc ecx
        xor eax, eax
        ; Exact mapped bytes EB 2D: jmp 0x100c0615
        __asm _emit 0xeb
        __asm _emit 0x2d
        cmp dl, 9
        ; Exact mapped bytes 75 15: jne 0x100c0602
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, 8
        cmp eax, 46h
        ; Exact mapped bytes 72 05: jb 0x100c05fc
        __asm _emit 0x72
        __asm _emit 0x05
        xor eax, eax
        inc ecx
        ; Exact mapped bytes EB 01: jmp 0x100c05fd
        __asm _emit 0xeb
        __asm _emit 0x01
        inc eax
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x100c05f2
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes EB 13: jmp 0x100c0615
        __asm _emit 0xeb
        __asm _emit 0x13
        lea edi, [ecx + ecx*8]
        shl edi, 3
        sub edi, ecx
        add edi, dword ptr [ebp + 0b0h]
        inc eax
        mov byte ptr [edi + eax - 1], dl
        mov edx, dword ptr [esp + 18h]
        inc esi
        cmp esi, edx
        ; Exact mapped bytes 76 BC: jbe 0x100c05da
        __asm _emit 0x76
        __asm _emit 0xbc
        lea edx, [ecx + ecx*8]
        mov edi, 1
        shl edx, 3
        sub edx, ecx
        mov ecx, dword ptr [ebp + 0b0h]
        add edx, ecx
        mov byte ptr [edx + eax], 0
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 80000000h
        push 101ac130h
        ; Exact mapped bytes FF 15 C4 50 17 10: call dword ptr [0x101750c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov esi, eax
        cmp esi, -1
        ; Exact mapped bytes 75 16: jne 0x100c0671
        __asm _emit 0x75
        __asm _emit 0x16
        push eax
        mov dword ptr [ebp + 0c8h], 0
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x100c0753
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push esi
        mov dword ptr [ebp + 0c8h], edi
        ; Exact mapped bytes FF 15 BC 50 17 10: call dword ptr [0x101750bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, eax
        push edi
        ; Exact mapped bytes E8 18 C1 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xc1
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov ebx, eax
        lea eax, [esp + 1ch]
        push 0
        push eax
        push edi
        push ebx
        push esi
        ; Exact mapped bytes FF 15 B8 50 17 10: call dword ptr [0x101750b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push esi
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        xor eax, eax
        dec edi
        mov dword ptr [esp + 18h], edi
        cmp byte ptr [eax + ebx], 0dh
        ; Exact mapped bytes 75 0A: jne 0x100c06bb
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [esp + 14h]
        inc eax
        inc ecx
        mov dword ptr [esp + 14h], ecx
        inc eax
        cmp eax, edi
        ; Exact mapped bytes 76 EB: jbe 0x100c06ab
        __asm _emit 0x76
        __asm _emit 0xeb
        mov ecx, dword ptr [esp + 14h]
        lea eax, [ecx + 1]
        lea esi, [eax + eax*8]
        shl esi, 3
        sub esi, eax
        push esi
        ; Exact mapped bytes E8 CB C0 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, esi
        mov edi, eax
        mov edx, ecx
        mov eax, 20202020h
        shr ecx, 2
        mov dword ptr [ebp + 0b4h], edi
        add esp, 4
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        xor esi, esi
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        xor eax, eax
        xor ecx, ecx
        mov dl, byte ptr [esi + ebx]
        cmp dl, 0dh
        ; Exact mapped bytes 75 06: jne 0x100c0709
        __asm _emit 0x75
        __asm _emit 0x06
        inc esi
        inc ecx
        xor eax, eax
        ; Exact mapped bytes EB 2D: jmp 0x100c0736
        __asm _emit 0xeb
        __asm _emit 0x2d
        cmp dl, 9
        ; Exact mapped bytes 75 15: jne 0x100c0723
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, 8
        cmp eax, 46h
        ; Exact mapped bytes 72 05: jb 0x100c071d
        __asm _emit 0x72
        __asm _emit 0x05
        xor eax, eax
        inc ecx
        ; Exact mapped bytes EB 01: jmp 0x100c071e
        __asm _emit 0xeb
        __asm _emit 0x01
        inc eax
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x100c0713
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes EB 13: jmp 0x100c0736
        __asm _emit 0xeb
        __asm _emit 0x13
        lea edi, [ecx + ecx*8]
        shl edi, 3
        sub edi, ecx
        add edi, dword ptr [ebp + 0b4h]
        inc eax
        mov byte ptr [edi + eax - 1], dl
        mov edx, dword ptr [esp + 18h]
        inc esi
        cmp esi, edx
        ; Exact mapped bytes 76 BC: jbe 0x100c06fb
        __asm _emit 0x76
        __asm _emit 0xbc
        lea edx, [ecx + ecx*8]
        shl edx, 3
        sub edx, ecx
        mov ecx, dword ptr [ebp + 0b4h]
        add edx, ecx
        mov byte ptr [edx + eax], 0
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 14h]
        cmp ecx, eax
        ; Exact mapped bytes 76 02: jbe 0x100c0761
        __asm _emit 0x76
        __asm _emit 0x02
        mov eax, ecx
        mov edx, dword ptr [ebp + 0a0h]
        inc eax
        pop edi
        pop esi
        lea ecx, [eax + eax*8]
        pop ebp
        shl ecx, 3
        sub ecx, eax
        pop ebx
        mov dword ptr [edx + 90h], ecx
        add esp, 10h
        ret
    }
}
