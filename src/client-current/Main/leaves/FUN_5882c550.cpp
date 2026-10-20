// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882C550 .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_5882c550() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 170h], 0
        ; Exact mapped bytes 0F 84 F7 00 00 00: je 0x5882c657
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 100h]
        push ebx
        push ebp
        push edi
        ; Exact mapped bytes E8 02 BC 0D 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xbc
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + 170h]
        mov edi, ebx
        sub edi, eax
        ; Exact mapped bytes E8 1F 9F F5 FF: call 0x587864a0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x9f
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [eax + ebx*4 + 300h]
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 8C C5 F4 FF: call 0x58778b20
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc5
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ebp, eax
        push 0ff000000h
        push ebx
        test ebp, ebp
        ; Exact mapped bytes 74 50: je 0x5882c5f0
        __asm _emit 0x74
        __asm _emit 0x50
        lea ecx, [ebp + 33ch]
        push ecx
        mov ecx, dword ptr [esi + 104h]
        ; Exact mapped bytes E8 2E C4 0D 00: call 0x589089e0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xc4
        __asm _emit 0x0d
        __asm _emit 0x00
        movzx edx, word ptr [ebp + 4]
        push 0ff000000h
        and edx, 1fh
        push ebx
        push edx
        ; Exact mapped bytes FF 15 40 C0 98 58: call dword ptr [0x5898c040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 108h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 0B C4 0D 00: call 0x589089e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + edi*4 + 80h]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov edi, dword ptr [esi + edi*4 + 6ch]
        mov eax, 0fff0h
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        ; Exact mapped bytes EB 3F: jmp 0x5882c62f
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [esi + 104h]
        push 5898d61ch
        ; Exact mapped bytes E8 E0 C3 0D 00: call 0x589089e0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 108h]
        push 0ff000000h
        push ebx
        push 5898d61ch
        ; Exact mapped bytes E8 CA C3 0D 00: call 0x589089e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + edi*4 + 6ch]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov edi, dword ptr [esi + edi*4 + 80h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 170h]
        ; Exact mapped bytes E8 16 9B F5 FF: call 0x58786150
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x9b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 170h]
        ; Exact mapped bytes E8 0B 9C F5 FF: call 0x58786250
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x9c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 144h]
        movzx edx, ax
        push edx
        ; Exact mapped bytes E8 0C AD 0D 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xad
        __asm _emit 0x0d
        __asm _emit 0x00
        pop edi
        pop ebp
        pop ebx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
