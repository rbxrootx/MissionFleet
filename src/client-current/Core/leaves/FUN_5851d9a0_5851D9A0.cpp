// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851D9A0 .. +0x182 bytes.
extern "C" __declspec(naked) void FUN_5851d9a0_5851D9A0() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff8h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        push -1
        push 58881525h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ebx
        push ecx
        sub esp, 6ch
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 20h]
        push eax
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 5A 92 FE FF: call 0x58506c50
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 7B 9D FE FF: call 0x58507780
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 49 01 00 00: je 0x5851db59
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        add ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 30h], ecx
        lea edx, [ebp - 70h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 26 D9 FE FF: call 0x5850b350
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 C0 81 FE FF: call 0x58505c00
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 EE 98 FE FF: call 0x58507340
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        add ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 AD A1 F6 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa1
        __asm _emit 0xf6
        __asm _emit 0xff
        and eax, 0e00h
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 400h
        ; Exact mapped bytes 74 09: je 0x5851da7d
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 28h], 800h
        ; Exact mapped bytes 75 08: jne 0x5851da85
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebx + 8]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 06: jmp 0x5851da8b
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebx + 8]
        mov dword ptr [ebp - 2ch], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        add edx, dword ptr [ecx + 4]
        mov ecx, edx
        ; Exact mapped bytes E8 9F D6 FE FF: call 0x5850b140
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 19h], al
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        add edx, dword ptr [ecx + 4]
        mov ecx, edx
        ; Exact mapped bytes E8 1C E2 FE FF: call 0x5850bce0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 13 8C FE FF: call 0x585066e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 58h], ecx
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        movzx eax, byte ptr [ebp - 19h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        lea ecx, [ebp - 80h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 BB 06 00 00: call 0x5851e1c0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 A0 D5 FE FF: call 0x5850b0b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd5
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x5851db20
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        or eax, 4
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 24: jmp 0x5851db46
        __asm _emit 0xeb
        __asm _emit 0x24
    }
}
