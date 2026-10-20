// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005E060 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_1005e060_1005E060() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        ; Exact mapped bytes 66 83 FB 04: cmp bx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x04
        push edi
        mov esi, ecx
        ; Exact mapped bytes 75 1B: jne 0x1005e08a
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 14h]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0d5ch]
        ; Exact mapped bytes E8 4C EE 01 00: call 0x1007ced0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d3ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov edi, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 85 FF: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 29: je 0x1005e0c7
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [esi + 0d44h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [esp + 18h]
        and edi, 0ffffh
        push ecx
        mov ecx, dword ptr [esi + 0d44h]
        push edi
        push ebx
        ; Exact mapped bytes E8 0F 85 FD FF: call 0x100365d0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        or byte ptr [esi + 24h], 2
        push 0fh
        mov ecx, esi
        ; Exact mapped bytes E8 AC EE FF FF: call 0x1005cf80
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 0bh
        ; Exact mapped bytes E8 C9 F9 FB FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf9
        __asm _emit 0xfb
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
