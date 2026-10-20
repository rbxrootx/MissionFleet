// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888E340 .. +0x110 bytes.
extern "C" __declspec(naked) void FUN_5888e340() {
    __asm {
        sub esp, 404h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 400h], eax
        push ebx
        mov ebx, dword ptr [esp + 40ch]
        push ebp
        push esi
        push edi
        mov esi, ecx
        push 0
        mov dword ptr [esi + 0bch], 5
        mov dword ptr [esi + 0b8h], 2
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 2
        ; Exact mapped bytes E8 FC 78 F5 FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x78
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 5
        ; Exact mapped bytes E8 CF 98 F5 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0xf5
        __asm _emit 0xff
        push 3ffh
        lea eax, [esp + 15h]
        push 0
        push eax
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes E8 A1 E8 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        push ebx
        push 5899c0b8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 18h]
        push 400h
        push ecx
        ; Exact mapped bytes E8 97 D6 EB FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd6
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edi, dword ptr [esi + 154h]
        mov eax, dword ptr [edi + 80h]
        add esp, 10h
        lea edx, [esp + 10h]
        push edx
        push eax
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [edi + 80h]
        lea ebp, [eax + 1]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x5888e3f0
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, ebp
        mov dword ptr [edi + 8ch], eax
        mov dword ptr [edi + 94h], eax
        lea eax, [esi + 0c0h]
        mov edx, 18h
        sub ebx, eax
        lea ecx, [edx + 7fffffe6h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5888e42d
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [ebx + eax]
        test cl, cl
        ; Exact mapped bytes 74 0A: je 0x5888e42d
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [eax], cl
        inc eax
        sub edx, 1
        ; Exact mapped bytes 75 E7: jne 0x5888e412
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5888e431
        __asm _emit 0xeb
        __asm _emit 0x04
        test edx, edx
        ; Exact mapped bytes 75 01: jne 0x5888e432
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov ecx, dword ptr [esp + 410h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        mov byte ptr [eax], 0
        ; Exact mapped bytes E8 93 E7 0E 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xe7
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 404h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
