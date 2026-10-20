// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FD830 .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_588fd830() {
    __asm {
        ; Exact mapped bytes 66 83 7C 24 04 00: cmp word ptr [esp + 4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        push esi
        mov esi, ecx
        mov dword ptr [esi + 0a0h], 1
        ; Exact mapped bytes 75 0C: jne 0x588fd851
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 10h]
        push eax
        push ecx
        ; Exact mapped bytes EB 37: jmp 0x588fd888
        __asm _emit 0xeb
        __asm _emit 0x37
        mov edx, dword ptr [esp + 0ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 1D 35 EE FF: call 0x587e0d80
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x35
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0ach]
        ; Exact mapped bytes E8 62 F7 FB FF: call 0x588bcfd0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf7
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 C8 ED FF: call 0x587da120
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc8
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 76 0D: jbe 0x588fd88f
        __asm _emit 0x76
        __asm _emit 0x0d
        mov ecx, dword ptr [esp + 14h]
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C1 E7 FF FF: call 0x588fc050
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes E8 A6 12 00 00: call 0x588feb40
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        push 0
        push 0
        push 0
        xor edx, edx
        ; Exact mapped bytes 66 89 96 94 00 00 00: mov word ptr [esi + 0x94], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov dword ptr [esi + 98h], 1
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 7dh
        push 0
        ; Exact mapped bytes 66 89 96 94 00 00 00: mov word ptr [esi + 0x94], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 80015101h
        ; Exact mapped bytes E8 8F 33 07 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x33
        __asm _emit 0x07
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
