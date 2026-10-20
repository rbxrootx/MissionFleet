// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867BFC0 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_5867bfc0_5867BFC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB A9 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xa9
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD A9 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xa9
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CE 93 F8 FF: call 0x586053c0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x93
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx esi, al
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AF 67 F5 FF: call 0x585d27b0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x67
        __asm _emit 0xf5
        __asm _emit 0xff
        movzx edx, al
        lea eax, [esi + edx*2]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB A9 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xa9
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 24 04 E1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 35 10 E1 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0xe1
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 20h]
        lea ecx, [eax + edx*8 + 7ch]
        mov dword ptr [ebp - 24h], ecx
        movzx edx, word ptr [ebp - 4]
        cmp edx, 5
        ; Exact mapped bytes 75 09: jne 0x5867c04e
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 1F: jmp 0x5867c06d
        __asm _emit 0xeb
        __asm _emit 0x1f
        movzx eax, word ptr [ebp - 4]
        cmp eax, 6
        ; Exact mapped bytes 75 09: jne 0x5867c060
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x5867c067
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 2
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + edx*4]
        ; Exact mapped bytes E8 95 4B ED FF: call 0x58550c10
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x4b
        __asm _emit 0xed
        __asm _emit 0xff
        movzx eax, ax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
