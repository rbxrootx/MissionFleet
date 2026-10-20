// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DC0D0 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_588dc0d0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 23ch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 23ch]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [esi + 6028h]
        xor ecx, 0aaaaaaaah
        mov dword ptr [edx + 9ch], ecx
        mov ecx, dword ptr [esi + 6028h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 6028h]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [eax + 84h]
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 6C 71 02 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        mov edi, dword ptr [esi + 6028h]
        mov ecx, dword ptr [edi + 0ach]
        sub ecx, 384h
        mov eax, 6e5d4c3bh
        imul ecx
        sub edx, ecx
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, eax, 0e10h
        add ecx, eax
        ; Exact mapped bytes 79 06: jns 0x588dc159
        __asm _emit 0x79
        __asm _emit 0x06
        add ecx, 0e10h
        mov dword ptr [esi + 6060h], ecx
        mov eax, dword ptr [edi + 108h]
        xor ecx, ecx
        cmp eax, ecx
        ; Exact mapped bytes 75 19: jne 0x588dc184
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [esi + 23ch]
        mov eax, dword ptr [edx + 50h]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 7F 24: jg 0x588dc19f
        __asm _emit 0x7f
        __asm _emit 0x24
        mov dword ptr [edi + 104h], ecx
        pop edi
        pop esi
        ret
        cmp eax, 1
        ; Exact mapped bytes 75 16: jne 0x588dc19f
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [esi + 23ch]
        mov eax, dword ptr [edx + 50h]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 7C 06: jl 0x588dc19f
        __asm _emit 0x7c
        __asm _emit 0x06
        mov dword ptr [edi + 104h], ecx
        pop edi
        pop esi
        ret
    }
}
