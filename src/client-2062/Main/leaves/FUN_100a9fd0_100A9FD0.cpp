// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A9FD0 .. +0x106 bytes.
extern "C" __declspec(naked) void FUN_100a9fd0_100A9FD0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov eax, dword ptr [esi + 110h]
        mov byte ptr [esi + 190h], bl
        and eax, 0fh
        mov dword ptr [esi + 198h], 0ffffffffh
        lea ecx, [eax + eax*4]
        lea edx, [eax + ecx*8]
        mov ecx, dword ptr [esi + 154h]
        shr ecx, 1
        lea eax, [eax + edx*2]
        add eax, ecx
        lea edx, [eax + eax*4]
        lea eax, [eax + edx*2]
        xor edx, edx
        lea eax, [eax + eax*4]
        mov ecx, dword ptr [eax*4 + 101816cch]
        mov dword ptr [esi + 194h], ecx
        mov dword ptr [esi + 19ch], edx
        mov dword ptr [esi + 1a0h], edx
        mov dword ptr [esi + 1a4h], edx
        mov dword ptr [esi + 1a8h], edx
        mov eax, dword ptr [esi + 0fch]
        mov dword ptr [esi + 1c4h], ebx
        mov dword ptr [esi + 1c8h], ebx
        mov ecx, dword ptr [eax + 80h]
        lea edx, [esi + 1ach]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea edi, [esi + 1cch]
        mov ecx, 8
        xor eax, eax
        mov edx, 20h
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea eax, [esi + 270h]
        lea ecx, [esi + 1ech]
        mov dword ptr [ecx], ebx
        mov dword ptr [eax - 4], ebx
        mov dword ptr [eax], ebx
        mov dword ptr [eax + 0fch], ebx
        mov dword ptr [eax + 100h], ebx
        add ecx, 4
        add eax, 8
        dec edx
        ; Exact mapped bytes 75 E4: jne 0x100aa079
        __asm _emit 0x75
        __asm _emit 0xe4
        xor eax, eax
        mov dword ptr [esi + 46ch], ebx
        mov dword ptr [esi + 470h], eax
        mov dword ptr [esi + 474h], eax
        mov dword ptr [esi + 478h], eax
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add esi, 100h
        push esi
        ; Exact mapped bytes E8 6F 0C 05 00: call 0x100fad30
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 0d48h]
        ; Exact mapped bytes E8 0E 6E 00 00: call 0x100b0ee0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
    }
}
