// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BB520 .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_588bb520() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov cl, byte ptr [esp + 0ch]
        xor bl, bl
        mov byte ptr [esi + 13a7h], cl
        cmp byte ptr [esi + 0a0h], bl
        ; Exact mapped bytes 0F 86 94 00 00 00: jbe 0x588bb5d0
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        cmp bl, cl
        ; Exact mapped bytes 72 6A: jb 0x588bb5ae
        __asm _emit 0x72
        __asm _emit 0x6a
        movzx edx, cl
        movzx edi, bl
        lea eax, [edx + 5]
        cmp edi, eax
        ; Exact mapped bytes 7D 5D: jge 0x588bb5ae
        __asm _emit 0x7d
        __asm _emit 0x5d
        mov ecx, dword ptr [esi + 6ch]
        mov eax, dword ptr [ecx + 8]
        add eax, 3ah
        push eax
        mov eax, edi
        sub eax, edx
        mov edx, eax
        shl edx, 4
        add edx, eax
        mov eax, dword ptr [ecx + 4]
        lea ecx, [eax + edx*4 + 20h]
        push ecx
        mov ecx, dword ptr [esi + edi*4 + 0da4h]
        ; Exact mapped bytes E8 16 7D 04 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x7d
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + edi*4 + 11a4h], 0
        mov ecx, dword ptr [esi + edi*4 + 0da4h]
        ; Exact mapped bytes 74 07: je 0x588bb592
        __asm _emit 0x74
        __asm _emit 0x07
        push 100h
        ; Exact mapped bytes EB 05: jmp 0x588bb597
        __asm _emit 0xeb
        __asm _emit 0x05
        push 80h
        ; Exact mapped bytes E8 44 77 04 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [esi + edi*4 + 0da4h]
        ; Exact mapped bytes 66 83 4F 24 0F: or word ptr [edi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4f
        __asm _emit 0x24
        __asm _emit 0x0f
        mov cl, byte ptr [esp + 10h]
        ; Exact mapped bytes EB 13: jmp 0x588bb5c1
        __asm _emit 0xeb
        __asm _emit 0x13
        movzx edx, bl
        mov eax, dword ptr [esi + edx*4 + 0da4h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        inc bl
        cmp bl, byte ptr [esi + 0a0h]
        ; Exact mapped bytes 0F 82 71 FF FF FF: jb 0x588bb540
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
