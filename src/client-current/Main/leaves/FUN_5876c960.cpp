// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876C960 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_5876c960() {
    __asm {
        sub esp, 14h
        ; Exact mapped bytes 83 3D DC 8E 9C 58 00: cmp dword ptr [0x589c8edc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes 0F 84 F0 00 00 00: je 0x5876ca64
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 28h]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 E4 00 00 00: je 0x5876ca64
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 2ch], 0
        ; Exact mapped bytes 0F 84 D9 00 00 00: je 0x5876ca64
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 80 45 A2 58: mov edi, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [eax + 10524h]
        mov eax, dword ptr [edi + 1ch]
        sub eax, dword ptr [edi + 14h]
        mov ebx, dword ptr [esi + 114h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ebx
        mov ecx, dword ptr [ebp]
        sub ecx, eax
        mov eax, dword ptr [edi + 20h]
        sub eax, dword ptr [edi + 18h]
        sub ecx, dword ptr [esi + 50h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ebx
        mov dword ptr [esp + 10h], ecx
        add ecx, 27fh
        sub eax, dword ptr [ebp + 4]
        add eax, dword ptr [esi + 54h]
        mov dword ptr [esp + 14h], eax
        cmp ecx, 4feh
        ; Exact mapped bytes 77 7C: ja 0x5876ca64
        __asm _emit 0x77
        __asm _emit 0x7c
        add eax, 1ffh
        cmp eax, 3feh
        ; Exact mapped bytes 77 70: ja 0x5876ca64
        __asm _emit 0x77
        __asm _emit 0x70
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov esi, dword ptr [esp + 2ch]
        ; Exact mapped bytes DD 05 08 CF 98 58: fld qword ptr [0x5898cf08]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        sub esp, 8
        mov ecx, esi
        ; Exact mapped bytes DC F9: fdiv st(1), st(0)
        __asm _emit 0xdc
        __asm _emit 0xf9
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes D9 5C 24 20: fstp dword ptr [esp + 0x20]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DB 05 F8 48 A2 58: fild dword ptr [0x58a248f8]
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes D9 5C 24 24: fstp dword ptr [esp + 0x24]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes DA 7C 24 1C: fidivr dword ptr [esp + 0x1c]
        __asm _emit 0xda
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes D9 5C 24 28: fstp dword ptr [esp + 0x28]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes D9 05 14 5B 99 58: fld dword ptr [0x58995b14]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x5b
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes D9 5C 24 04: fstp dword ptr [esp + 4]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes D9 05 78 D7 98 58: fld dword ptr [0x5898d778]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 1C 24: fstp dword ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 17 AF 19 00: call 0x58907950
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xaf
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1ch]
        sub esp, 0ch
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 2ch]
        mov dword ptr [eax + 4], edx
        mov dword ptr [eax + 8], ecx
        mov ecx, esi
        ; Exact mapped bytes E8 C7 AD 19 00: call 0x58907820
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xad
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 4]
        push 0
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ret
    }
}
