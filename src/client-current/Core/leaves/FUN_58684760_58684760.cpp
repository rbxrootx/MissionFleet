// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58684760 .. +0x240 bytes.
extern "C" __declspec(naked) void FUN_58684760_58684760() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5868477c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 0F 84 EC 01 00 00: je 0x58684972
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 138h], 1
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4F 05 00 00: call 0x58684cf0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 0a8h], 0
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 0c8h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 0f8h], 0
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*4 + 0f8h]
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF 95 EC FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 158h]
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 158h]
        mov edx, 4
        shl edx, 0
        mov dword ptr [ecx + edx], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 198h]
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 198h]
        mov edx, 4
        shl edx, 0
        mov dword ptr [ecx + edx], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 198h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        xor edx, 3a9e2b0dh
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 198h]
        mov dword ptr [eax + ecx], edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 198h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        xor edx, 3a9e2b0dh
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 198h]
        mov dword ptr [ecx + eax], edx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 92ch]
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ecx + eax], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 92ch]
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [eax + ecx], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9e0h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 21 AF E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xaf
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9c0h]
        ; Exact mapped bytes E8 FF 03 EB FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 8c8h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 978h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 34 16 E0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x16
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 9a0h], 0
        ; Exact mapped bytes E9 01 FE FF FF: jmp 0x58684773
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a7ch]
        mov dword ptr [ebp - 18h], eax
        push 17h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 01 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C6 22 E0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x22
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
