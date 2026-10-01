// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902F50 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_58902f50() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        cmp dword ptr [ecx + 40h], 0
        push edi
        ; Exact mapped bytes 74 05: je 0x58902f63
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 0D FD FF FF: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esi + 4ch]
        test edi, edi
        ; Exact mapped bytes 75 0B: jne 0x58902f75
        __asm _emit 0x75
        __asm _emit 0x0b
        mov dword ptr [esi + 4ch], ecx
        pop edi
        mov dword ptr [ecx + 40h], esi
        pop esi
        ret 4
        mov eax, edi
        ; Exact mapped bytes 66 8B 50 26: mov dx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x26
        ; Exact mapped bytes 66 3B 51 26: cmp dx, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x51
        __asm _emit 0x26
        ; Exact mapped bytes 7F 13: jg 0x58902f94
        __asm _emit 0x7f
        __asm _emit 0x13
        mov edx, dword ptr [eax + 48h]
        test edx, edx
        ; Exact mapped bytes 74 3B: je 0x58902fc3
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, edx
        ; Exact mapped bytes 66 8B 50 26: mov dx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x26
        ; Exact mapped bytes 66 3B 51 26: cmp dx, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x51
        __asm _emit 0x26
        ; Exact mapped bytes 7E ED: jle 0x58902f81
        __asm _emit 0x7e
        __asm _emit 0xed
        cmp edi, eax
        ; Exact mapped bytes 75 11: jne 0x58902fa9
        __asm _emit 0x75
        __asm _emit 0x11
        mov dword ptr [esi + 4ch], ecx
        mov dword ptr [ecx + 48h], eax
        mov dword ptr [eax + 44h], ecx
        pop edi
        mov dword ptr [ecx + 40h], esi
        pop esi
        ret 4
        mov edx, dword ptr [eax + 44h]
        mov dword ptr [ecx + 44h], edx
        mov edx, dword ptr [eax + 44h]
        mov dword ptr [edx + 48h], ecx
        mov dword ptr [ecx + 48h], eax
        mov dword ptr [eax + 44h], ecx
        pop edi
        mov dword ptr [ecx + 40h], esi
        pop esi
        ret 4
        mov dword ptr [ecx + 44h], eax
        mov dword ptr [eax + 48h], ecx
        pop edi
        mov dword ptr [ecx + 40h], esi
        pop esi
        ret 4
    }
}
