// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E94F0 .. +0x1D8 bytes.
extern "C" __declspec(naked) void FUN_585e94f0_585E94F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 1ch], 0f11h
        mov dword ptr [ebp - 18h], 377h
        mov dword ptr [ebp - 14h], 0eb1h
        mov dword ptr [ebp - 10h], 3a7h
        mov dword ptr [ebp - 0ch], 76fh
        mov dword ptr [ebp - 8], 541h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 10ae8h], ecx
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x585e954c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 6
        ; Exact mapped bytes 0F 8D 82 00 00 00: jge 0x585e95d8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 10ae8h]
        mov edx, dword ptr [ebp - 24h]
        add ecx, dword ptr [ebp + edx*4 - 1ch]
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, 58962178h
        ; Exact mapped bytes E8 39 27 EA FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x27
        __asm _emit 0xea
        __asm _emit 0xff
        add eax, 1
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + ecx*4 + 21e68h], eax
        mov dword ptr [ebp - 2ch], 1
        ; Exact mapped bytes EB 09: jmp 0x585e9599
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 2ch]
        add eax, 1
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 4
        ; Exact mapped bytes 7D 34: jge 0x585e95d3
        __asm _emit 0x7d
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, 58962178h
        ; Exact mapped bytes E8 03 27 EA FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x27
        __asm _emit 0xea
        __asm _emit 0xff
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 21e68h]
        imul ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + edx*4 + 21e68h], ecx
        ; Exact mapped bytes EB BD: jmp 0x585e9590
        __asm _emit 0xeb
        __asm _emit 0xbd
        ; Exact mapped bytes E9 6B FF FF FF: jmp 0x585e9543
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + edx + 21e68h]
        mov dword ptr [eax + 21e50h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + eax + 21e68h]
        mov dword ptr [ecx + 21e54h], eax
        mov ecx, 4
        shl ecx, 1
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 20h]
        mov esi, dword ptr [ebp - 20h]
        mov ecx, dword ptr [esi + ecx + 21e68h]
        mov dword ptr [edx + eax + 21e58h], ecx
        mov edx, 4
        imul eax, edx, 3
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 20h]
        mov esi, dword ptr [ebp - 20h]
        mov eax, dword ptr [esi + eax + 21e68h]
        mov dword ptr [edx + ecx + 21e58h], eax
        mov ecx, 4
        shl ecx, 2
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 20h]
        mov esi, dword ptr [ebp - 20h]
        mov ecx, dword ptr [esi + ecx + 21e68h]
        mov dword ptr [eax + edx + 21e58h], ecx
        mov edx, 4
        imul eax, edx, 5
        mov ecx, 4
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp - 20h]
        mov esi, dword ptr [ebp - 20h]
        mov eax, dword ptr [esi + eax + 21e68h]
        mov dword ptr [ecx + edx + 21e58h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + ecx + 21e68h]
        mov dword ptr [edx + 21e80h], ecx
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 8E 79 24 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x79
        __asm _emit 0x24
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
