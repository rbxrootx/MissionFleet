// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848BA60 .. +0xCA bytes.
extern "C" __declspec(naked) void FUN_5848ba60_5848BA60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 88 F0 00 00 00: movsx ecx, word ptr [eax + 0xf0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 4
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x5848bb0c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 04 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x5848baa5
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E 06 00 00: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 56: je 0x5848bb01
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FD 14 00 00: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 10h]
        movzx edx, byte ptr [ecx + 0ch]
        cmp eax, edx
        ; Exact mapped bytes 75 3E: jne 0x5848baff
        __asm _emit 0x75
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 87 5B 04 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x5b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x5848baff
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6B 09 00 00: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 04 8F FF FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 60h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 76 1B: jbe 0x5848baff
        __asm _emit 0x76
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4E 09 00 00: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E7 8E FF FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 99: jmp 0x5848ba9a
        __asm _emit 0xeb
        __asm _emit 0x99
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1ch], ecx
        ; Exact mapped bytes EB 1A: jmp 0x5848bb26
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 1ch], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 11ch], 2
        mov esp, ebp
        pop ebp
        ret
    }
}
