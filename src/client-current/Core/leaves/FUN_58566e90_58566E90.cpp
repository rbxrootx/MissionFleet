// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58566E90 .. +0x113 bytes.
extern "C" __declspec(naked) void FUN_58566e90_58566E90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, 0ffh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 81 08 03 00 00: and ax, word ptr [ecx + 0x308]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, ax
        imul edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 31ch], edx
        mov ecx, 0ffh
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 8A BC 03 00 00: and cx, word ptr [edx + 0x3bc]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x8a
        __asm _emit 0xbc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, cx
        imul eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3d0h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 31ch], 0
        ; Exact mapped bytes 75 1A: jne 0x58566efb
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 104h], 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f8h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 31ch]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 31ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3d0h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3d0h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C FA F1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfa
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 88h], eax
        ; Exact mapped bytes 75 5E: jne 0x58566f9d
        __asm _emit 0x75
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 104h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 104h
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 6E FE FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 31ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 31ch
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 6E FE FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3d0h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 3d0h
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 6E FE FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
