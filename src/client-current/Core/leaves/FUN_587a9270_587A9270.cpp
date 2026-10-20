// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A9270 .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_587a9270_587A9270() {
    __asm {
        sub esp, 14h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 10h], eax
        push esi
        mov esi, dword ptr [esp + 1ch]
        push edi
        mov edi, dword ptr [esp + 24h]
        mov eax, dword ptr [esi + 74h]
        test al, 4
        ; Exact mapped bytes 74 06: je 0x587a9295
        __asm _emit 0x74
        __asm _emit 0x06
        or eax, 8
        mov dword ptr [esi + 74h], eax
        push 7
        lea eax, [esp + 14h]
        push eax
        push esi
        ; Exact mapped bytes E8 4E E0 FF FF: call 0x587a72f0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        push 7
        lea eax, [esp + 20h]
        push eax
        push esi
        ; Exact mapped bytes E8 01 63 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push esi
        ; Exact mapped bytes E8 77 06 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x587a92d3
        __asm _emit 0x74
        __asm _emit 0x13
        pop edi
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 10h]
        xor ecx, esp
        ; Exact mapped bytes E8 81 7D 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 14h
        ret
        movzx eax, byte ptr [esp + 16h]
        movzx ecx, byte ptr [esp + 10h]
        mov byte ptr [esp + 0eh], al
        movzx eax, byte ptr [esp + 15h]
        mov byte ptr [esp + 0dh], al
        movzx eax, byte ptr [esp + 14h]
        mov byte ptr [esp + 0ch], al
        movzx eax, byte ptr [esp + 13h]
        mov byte ptr [esp + 0bh], al
        movzx eax, byte ptr [esp + 12h]
        mov byte ptr [esp + 0ah], al
        mov eax, 100h
        imul ecx, eax
        movzx eax, byte ptr [esp + 11h]
        ; Exact mapped bytes 66 03 C8: add cx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc8
        lea eax, [esp + 8]
        push eax
        push edi
        push esi
        ; Exact mapped bytes 66 89 4C 24 14: mov word ptr [esp + 0x14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 BA 86 FF FF: call 0x587a19e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 24h]
        add esp, 0ch
        mov eax, 3
        pop edi
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 15 7D 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 14h
        ret
    }
}
