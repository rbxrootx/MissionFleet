// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58859AA0 .. +0x10D bytes.
extern "C" __declspec(naked) void FUN_58859aa0() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        mov eax, dword ptr [esi + edi*8 + 158h]
        add eax, -1
        ; Exact mapped bytes 78 07: js 0x58859abb
        __asm _emit 0x78
        __asm _emit 0x07
        mov dword ptr [esi + edi*8 + 158h], eax
        xor dword ptr [esi + edi*8 + 198h], 3a9e2b0dh
        mov eax, dword ptr [esi + edi*8 + 198h]
        mov ecx, dword ptr [esi + edi*8 + 158h]
        xor dword ptr [esi + edi*8 + 19ch], 3a9e2b0dh
        add eax, -1
        mov dword ptr [esi + edi*8 + 15ch], ecx
        ; Exact mapped bytes 78 07: js 0x58859af2
        __asm _emit 0x78
        __asm _emit 0x07
        mov dword ptr [esi + edi*8 + 198h], eax
        mov eax, dword ptr [esi + edi*8 + 198h]
        mov dword ptr [esi + edi*8 + 19ch], eax
        xor dword ptr [esi + edi*8 + 19ch], 3a9e2b0dh
        xor eax, 3a9e2b0dh
        mov dword ptr [esi + edi*8 + 198h], eax
        push ecx
        mov ecx, dword ptr [esi + 0a48h]
        ; Exact mapped bytes E8 3D D8 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a48h]
        mov ecx, dword ptr [esi + edi*8 + 15ch]
        mov dword ptr [eax + 64h], ecx
        cmp dword ptr [esi + edi*8 + 158h], 0
        ; Exact mapped bytes 75 14: jne 0x58859b51
        __asm _emit 0x75
        __asm _emit 0x14
        push 0
        mov ecx, esi
        mov dword ptr [esi + edi*4 + 138h], 10h
        ; Exact mapped bytes E8 7F F0 FF FF: call 0x58858bd0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 194h]
        add eax, dword ptr [esi + 18ch]
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, dword ptr [esi + 184h]
        mov ecx, dword ptr [edx + 4]
        add eax, dword ptr [esi + 17ch]
        mov edx, dword ptr [ecx + 100ch]
        add eax, dword ptr [esi + 174h]
        movzx ecx, word ptr [edx + 10h]
        add eax, dword ptr [esi + 16ch]
        and ecx, 0ffh
        add eax, dword ptr [esi + 164h]
        add eax, dword ptr [esi + 15ch]
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [esi + 0a60h]
        ; Exact mapped bytes E8 B8 D7 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
