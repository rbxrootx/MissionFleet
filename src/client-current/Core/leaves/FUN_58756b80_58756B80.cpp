// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58756B80 .. +0x128 bytes.
extern "C" __declspec(naked) void FUN_58756b80_58756B80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58756b9c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 200h
        ; Exact mapped bytes 0F 8D F5 00 00 00: jge 0x58756c9e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 4], 0ch
        mov edx, dword ptr [ebp - 0ch]
        lea ecx, [edx + ecx + 1814h]
        ; Exact mapped bytes E8 84 16 D3 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x58756c99
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 4], 0ch
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 1814h]
        mov dword ptr [ebp - 10h], edx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9F 14 D3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x14
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58756bf3
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea ecx, [ebp - 28h]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 8E 0E D3 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x0e
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        imul edx, dword ptr [ebp - 4], 0ch
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 1814h]
        mov dword ptr [ebp - 14h], ecx
        lea edx, [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 80 15 D3 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x15
        __asm _emit 0xd3
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 B7 0D D3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 75: je 0x58756c95
        __asm _emit 0x74
        __asm _emit 0x75
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 18 0E D3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x0e
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 31 FF FF FF: call 0x58756b60
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 06 0E D3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x0e
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 FF FE FF FF: call 0x58756b40
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, 2
        imul esi, ecx, 0
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 EC 0D D3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x0d
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 E5 57 D3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x57
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7E DD D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xdd
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx edx, word ptr [eax + esi + 18h]
        mov dword ptr [ebp - 20h], edx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 CE 0D D3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x0d
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C1 FC FF FF: call 0x58756950
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x58756be4
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 0A: jmp 0x58756ca3
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes E9 F5 FE FF FF: jmp 0x58756b93
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
