// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874BBA0 .. +0x14D bytes.
extern "C" __declspec(naked) void FUN_5874bba0() {
    __asm {
        sub esp, 34h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 30h], eax
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 98h], 0
        ; Exact mapped bytes 0F 84 1F 01 00 00: je 0x5874bcdd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 16ah]
        push ebp
        mov ebp, 1
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 74 65: je 0x5874bc36
        __asm _emit 0x74
        __asm _emit 0x65
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 74 5F: je 0x5874bc36
        __asm _emit 0x74
        __asm _emit 0x5f
        mov eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        movzx eax, byte ptr [esi + 190h]
        mov ecx, dword ptr [esi + 0cch]
        push eax
        ; Exact mapped bytes E8 58 B7 1B 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xb7
        __asm _emit 0x1b
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 165h]
        and ecx, 7fh
        add ecx, ebp
        push ecx
        mov ecx, dword ptr [esi + 0d0h]
        ; Exact mapped bytes E8 40 B7 1B 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xb7
        __asm _emit 0x1b
        __asm _emit 0x00
        movzx edx, byte ptr [esi + 166h]
        mov ecx, dword ptr [esi + 0d4h]
        and edx, 0fh
        push edx
        ; Exact mapped bytes E8 2A B7 1B 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xb7
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 1ch]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test al, al
        ; Exact mapped bytes 75 21: jne 0x5874bc64
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [esi + 0c8h]
        push 5898c922h
        ; Exact mapped bytes E8 8D 60 FE FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ebp
        pop esi
        mov ecx, dword ptr [esp + 30h]
        xor ecx, esp
        ; Exact mapped bytes E8 7A 0F 23 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x0f
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 34h
        ret
        mov ecx, dword ptr [esi + 1bch]
        push edi
        lea edi, [esi + 0e4h]
        push edi
        ; Exact mapped bytes E8 B9 52 00 00: call 0x58750f30
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1bch]
        ; Exact mapped bytes E8 5E 52 00 00: call 0x58750ee0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        cmp eax, 0ch
        push edi
        ; Exact mapped bytes 7E 37: jle 0x5874bcc6
        __asm _emit 0x7e
        __asm _emit 0x37
        push 5898d0d4h
        lea eax, [esp + 14h]
        push 30h
        push eax
        mov dword ptr [esi + 1c0h], ebp
        ; Exact mapped bytes E8 BA FD FF FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        push 5898d0d0h
        push 30h
        lea ecx, [esp + 14h]
        push ecx
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 11 5F FE FF: call 0x58731bd0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        lea edx, [esp + 0ch]
        push edx
        ; Exact mapped bytes EB 0A: jmp 0x5874bcd0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esi + 1c0h], 0
        mov ecx, dword ptr [esi + 0c8h]
        ; Exact mapped bytes E8 05 60 FE FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop ebp
        mov ecx, dword ptr [esp + 34h]
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 F1 0E 23 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x0e
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 34h
        ret
    }
}
