// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875AF40 .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_5875af40() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x5875affe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 108h]
        test eax, eax
        ; Exact mapped bytes 75 32: jne 0x5875af8b
        __asm _emit 0x75
        __asm _emit 0x32
        mov eax, dword ptr [esi + 10ch]
        cmp eax, dword ptr [esi + 110h]
        ; Exact mapped bytes 7D 09: jge 0x5875af70
        __asm _emit 0x7d
        __asm _emit 0x09
        inc eax
        mov dword ptr [esi + 10ch], eax
        pop esi
        ret
        mov dword ptr [esi + 108h], 1
        mov dword ptr [esi + 10ch], 0
        ; Exact mapped bytes 66 83 4E 24 01: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x01
        pop esi
        ret
        cmp eax, 1
        ; Exact mapped bytes 75 6E: jne 0x5875affe
        __asm _emit 0x75
        __asm _emit 0x6e
        cmp dword ptr [esi + 28h], 0
        ; Exact mapped bytes 7E 52: jle 0x5875afe8
        __asm _emit 0x7e
        __asm _emit 0x52
        mov ecx, dword ptr [esi + 0fch]
        sub dword ptr [esi + 114h], ecx
        mov ecx, dword ptr [esi + 114h]
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 9F 83 1A 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x83
        __asm _emit 0x1a
        __asm _emit 0x00
        add dword ptr [esi + 0fch], -46h
        ; Exact mapped bytes 79 34: jns 0x5875affe
        __asm _emit 0x79
        __asm _emit 0x34
        mov eax, dword ptr [esi + 28h]
        sub eax, dword ptr [esi + 100h]
        mov ecx, 0
        sets cl
        dec ecx
        and eax, ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FA 7C 1A 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x7c
        __asm _emit 0x1a
        __asm _emit 0x00
        pop esi
        ret
        ; Exact mapped bytes E8 33 7C 1A 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x7c
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 7C 7C 1A 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x7c
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        ret
    }
}
