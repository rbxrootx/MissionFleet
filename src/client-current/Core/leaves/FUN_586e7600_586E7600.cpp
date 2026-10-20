// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E7600 .. +0x295 bytes.
extern "C" __declspec(naked) void FUN_586e7600_586E7600() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 6ch
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 6ch], 0
        mov dword ptr [ebp - 68h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 68h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 68h]
        ; Exact mapped bytes E8 7D 4A DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x4a
        __asm _emit 0xda
        __asm _emit 0xff
        add eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 68h]
        ; Exact mapped bytes E8 78 F3 D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf3
        __asm _emit 0xd9
        __asm _emit 0xff
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C2 DF 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xdf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 84h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 84h]
        ; Exact mapped bytes E8 30 4A DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x4a
        __asm _emit 0xda
        __asm _emit 0xff
        add eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 84h]
        ; Exact mapped bytes E8 28 F3 D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf3
        __asm _emit 0xd9
        __asm _emit 0xff
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 72 DF 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xdf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0a0h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 0a0h]
        ; Exact mapped bytes E8 E0 49 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x49
        __asm _emit 0xda
        __asm _emit 0xff
        add eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0a0h]
        ; Exact mapped bytes E8 D8 F2 D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf2
        __asm _emit 0xd9
        __asm _emit 0xff
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 22 DF 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xdf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0bch]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 0bch]
        ; Exact mapped bytes E8 90 49 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x49
        __asm _emit 0xda
        __asm _emit 0xff
        add eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0bch]
        ; Exact mapped bytes E8 88 F2 D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf2
        __asm _emit 0xd9
        __asm _emit 0xff
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D2 DE 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xde
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0d8h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 0d8h]
        ; Exact mapped bytes E8 40 49 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x49
        __asm _emit 0xda
        __asm _emit 0xff
        add eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0d8h]
        ; Exact mapped bytes E8 38 F2 D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf2
        __asm _emit 0xd9
        __asm _emit 0xff
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 82 DE 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xde
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0f4h]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 0f4h]
        ; Exact mapped bytes E8 F0 48 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x48
        __asm _emit 0xda
        __asm _emit 0xff
        add eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0f4h]
        ; Exact mapped bytes E8 E8 F1 D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd9
        __asm _emit 0xff
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 32 DE 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xde
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 110h]
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 110h]
        ; Exact mapped bytes E8 A0 48 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x48
        __asm _emit 0xda
        __asm _emit 0xff
        add eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 110h]
        ; Exact mapped bytes E8 98 F1 D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf1
        __asm _emit 0xd9
        __asm _emit 0xff
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 E2 DD 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xdd
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 12ch]
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 12ch]
        ; Exact mapped bytes E8 50 48 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x48
        __asm _emit 0xda
        __asm _emit 0xff
        add eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 5ch], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 12ch]
        ; Exact mapped bytes E8 48 F1 D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf1
        __asm _emit 0xd9
        __asm _emit 0xff
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 92 DD 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xdd
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
