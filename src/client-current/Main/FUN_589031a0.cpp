// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589031A0 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_589031a0() {
    __asm {
        mov edx, dword ptr [esp + 0ch]
        xor eax, eax
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [esi + 4], ecx
        mov dword ptr [esi + 8], edx
        push edi
        mov edi, dword ptr [esp + 18h]
        sub edi, ecx
        mov ecx, dword ptr [esp + 1ch]
        sub ecx, edx
        mov dword ptr [esi + 20h], ecx
        mov dword ptr [esi + 1ch], edi
        mov edi, dword ptr [esp + 0ch]
        mov dword ptr [esi], 589a24e4h
        mov dword ptr [esi + 0ch], eax
        mov dword ptr [esi + 10h], eax
        mov dword ptr [esi + 14h], eax
        mov dword ptr [esi + 18h], eax
        ; Exact mapped bytes 66 83 4E 24 0F: or word ptr [esi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x0f
        mov edx, 0ffefh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, 0ffdfh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0ffbfh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 2000h
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, 4000h
        ; Exact mapped bytes 66 09 4E 24: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 4C 24 20: mov cx, word ptr [esp + 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        mov edx, 8000h
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 66 89 4E 26: mov word ptr [esi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x26
        mov dword ptr [esi + 28h], 100h
        mov dword ptr [esi + 2ch], eax
        mov dword ptr [esi + 3ch], eax
        mov dword ptr [esi + 34h], esi
        mov dword ptr [esi + 38h], esi
        mov dword ptr [esi + 30h], eax
        mov dword ptr [esi + 4ch], eax
        mov dword ptr [esi + 44h], eax
        mov dword ptr [esi + 48h], eax
        mov dword ptr [esi + 40h], eax
        cmp edi, eax
        ; Exact mapped bytes 74 10: je 0x5890325f
        __asm _emit 0x74
        __asm _emit 0x10
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 89 FC FF FF: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F1 FC FF FF: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        mov eax, esi
        pop esi
        ret 18h
    }
}
