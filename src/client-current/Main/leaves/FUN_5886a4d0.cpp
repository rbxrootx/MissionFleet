// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886A4D0 .. +0x1B7 bytes.
extern "C" __declspec(naked) void FUN_5886a4d0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        movzx eax, word ptr [esi + 112h]
        mov edx, dword ptr [esi + 158h]
        and eax, 0fh
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        xor ebx, ebx
        imul eax, eax, 0e0h
        mov byte ptr [esi + 164h], bl
        mov dword ptr [esi + 16ch], 0ffffffffh
        mov ecx, dword ptr [eax + 589cfcech]
        mov dword ptr [esi + 168h], ecx
        lea eax, [esi + 172h]
        lea ecx, [ebx + 8]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        xor edx, edx
        mov byte ptr [eax - 2], bl
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov byte ptr [eax - 1], bl
        add eax, 4
        sub ecx, 1
        ; Exact mapped bytes 75 ED: jne 0x5886a520
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [esi + 100h]
        mov dword ptr [esi + 1bch], ebx
        mov dword ptr [esi + 1c0h], ebx
        mov ecx, dword ptr [eax + 80h]
        push ecx
        lea edx, [esi + 190h]
        push edx
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        xor eax, eax
        movzx ecx, ax
        mov eax, ecx
        shl ecx, 10h
        or eax, ecx
        mov dword ptr [esi + 1c4h], eax
        mov dword ptr [esi + 1c8h], eax
        mov dword ptr [esi + 1cch], eax
        mov dword ptr [esi + 1d0h], eax
        mov dword ptr [esi + 1d4h], eax
        mov dword ptr [esi + 1d8h], eax
        mov dword ptr [esi + 1dch], eax
        mov dword ptr [esi + 1e0h], eax
        mov dword ptr [esi + 1e4h], eax
        mov dword ptr [esi + 1e8h], eax
        mov dword ptr [esi + 1ech], eax
        mov dword ptr [esi + 1f0h], eax
        mov dword ptr [esi + 1f4h], eax
        mov dword ptr [esi + 1f8h], eax
        mov dword ptr [esi + 1fch], eax
        mov dword ptr [esi + 200h], eax
        mov dword ptr [esi + 22ch], ebx
        mov dword ptr [esi + 204h], ebx
        mov dword ptr [esi + 230h], ebx
        mov dword ptr [esi + 208h], ebx
        mov dword ptr [esi + 234h], ebx
        mov dword ptr [esi + 20ch], ebx
        mov dword ptr [esi + 238h], ebx
        mov dword ptr [esi + 210h], ebx
        mov dword ptr [esi + 23ch], ebx
        mov dword ptr [esi + 214h], ebx
        mov dword ptr [esi + 240h], ebx
        mov dword ptr [esi + 218h], ebx
        mov dword ptr [esi + 244h], ebx
        mov dword ptr [esi + 21ch], ebx
        mov dword ptr [esi + 248h], ebx
        mov dword ptr [esi + 220h], ebx
        mov dword ptr [esi + 24ch], ebx
        mov dword ptr [esi + 224h], ebx
        mov dword ptr [esi + 250h], ebx
        mov dword ptr [esi + 228h], ebx
        mov byte ptr [esi + 254h], bl
        mov byte ptr [esi + 278h], bl
        mov dword ptr [esi + 27ah], ebx
        mov dword ptr [esi + 27eh], ebx
        ; Exact mapped bytes 66 89 9E 82 02 00 00: mov word ptr [esi + 0x282], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 284h], bl
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        add esi, 104h
        push esi
        ; Exact mapped bytes E8 7C 9D 08 00: call 0x588f43f0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x9d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 98 45 A2 58: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 0db4h]
        pop esi
        pop ebx
        ; Exact mapped bytes E9 69 8A 00 00: jmp 0x588730f0
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
