// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586202F0 .. +0xFE bytes.
extern "C" __declspec(naked) void FUN_586202f0_586202F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 8F E9 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x8f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 92 E9 FF: call 0x584b95c0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x92
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 81 A0 0C 00 00: mov word ptr [ecx + 0xca0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 82 A0 0C 00 00: movsx eax, word ptr [edx + 0xca0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 0F 87 BA 00 00 00: ja 0x586203ea
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 8D F0 03 62 58: jmp dword ptr [ecx*4 + 0x586203f0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x62
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6E BD E6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xbd
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 66 E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x66
        __asm _emit 0xe6
        __asm _emit 0xff
        add eax, 0c3h
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CB 6A E9 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x6a
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 43 BD E6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xbd
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 48 66 E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x66
        __asm _emit 0xe6
        __asm _emit 0xff
        add eax, 0c3h
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 90 52 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x52
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 57: jmp 0x586203ea
        __asm _emit 0xeb
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 15 BD E6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xbd
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A 66 E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x66
        __asm _emit 0xe6
        __asm _emit 0xff
        sub eax, 1f4h
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 72 6A E9 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x6a
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EA BC E6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xbc
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EF 65 E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x65
        __asm _emit 0xe6
        __asm _emit 0xff
        sub eax, 1f4h
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 37 52 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x52
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
