// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882F0D0 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_5882f0d0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        movzx ecx, byte ptr [esi + 21ch]
        cmp dword ptr [esi + ecx*4 + 120h], eax
        mov ecx, dword ptr [esi + 6ch]
        ; Exact mapped bytes 75 26: jne 0x5882f110
        __asm _emit 0x75
        __asm _emit 0x26
        push edi
        mov edi, dword ptr [esp + 10h]
        push edi
        ; Exact mapped bytes E8 8B 6D F5 FF: call 0x58785e80
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6d
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0dch]
        push edi
        ; Exact mapped bytes E8 5F 82 0D 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x82
        __asm _emit 0x0d
        __asm _emit 0x00
        pop edi
        mov dword ptr [esi + 0c0h], 0
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 CA 76 F5 FF: call 0x587867e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x76
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [esp + 0ch]
        mov ecx, dword ptr [esi + 6ch]
        push edx
        ; Exact mapped bytes E8 5D 6D F5 FF: call 0x58785e80
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x6d
        __asm _emit 0xf5
        __asm _emit 0xff
        movzx eax, byte ptr [esi + 21ch]
        mov ecx, dword ptr [esi + eax*4 + 120h]
        push ecx
        mov ecx, dword ptr [esi + 6ch]
        ; Exact mapped bytes E8 A6 76 F5 FF: call 0x587867e0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x76
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [esi + 0c0h], 0
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
