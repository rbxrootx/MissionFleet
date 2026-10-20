// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58799850 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_58799850_58799850() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891878h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0bch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 8]
        and eax, 0ffh
        cmp eax, 5
        ; Exact mapped bytes 77 72: ja 0x587998fa
        __asm _emit 0x77
        __asm _emit 0x72
        ; Exact mapped bytes FF 24 85 3C 99 79 58: jmp dword ptr [eax*4 + 0x5879993c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0x99
        __asm _emit 0x79
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 07 7E 09 00: call 0x588316a0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x7e
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 11 45 D0: movsd qword ptr [ebp - 0x30], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes DD 45 D0: fld qword ptr [ebp - 0x30]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 9A 77 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x77
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 8C 7D 09 00: call 0x58831650
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x7d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 11 45 D0: movsd qword ptr [ebp - 0x30], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes DD 45 D0: fld qword ptr [ebp - 0x30]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes EB D3: jmp 0x587998a1
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes DD 01: fld qword ptr [ecx]
        __asm _emit 0xdd
        __asm _emit 0x01
        ; Exact mapped bytes EB CF: jmp 0x587998a1
        __asm _emit 0xeb
        __asm _emit 0xcf
        ; Exact mapped bytes D9 EE: fldz
        __asm _emit 0xd9
        __asm _emit 0xee
        ; Exact mapped bytes EB CB: jmp 0x587998a1
        __asm _emit 0xeb
        __asm _emit 0xcb
        cmp byte ptr [ecx], 0
        ; Exact mapped bytes 74 12: je 0x587998ed
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes F2 0F 10 05 C0 50 89 58: movsd xmm0, qword ptr [0x588950c0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 45 D0: movsd qword ptr [ebp - 0x30], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes DD 45 D0: fld qword ptr [ebp - 0x30]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes EB B4: jmp 0x587998a1
        __asm _emit 0xeb
        __asm _emit 0xb4
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 11 45 D0: movsd qword ptr [ebp - 0x30], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes DD 45 D0: fld qword ptr [ebp - 0x30]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes EB A7: jmp 0x587998a1
        __asm _emit 0xeb
        __asm _emit 0xa7
        push 1
        lea ecx, [ebp - 0c8h]
        ; Exact mapped bytes E8 F9 3A D8 FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x3a
        __asm _emit 0xd8
        __asm _emit 0xff
        lea eax, [ebp - 0c8h]
        mov dword ptr [ebp - 4], 0
        push 588b6f50h
        push eax
        ; Exact mapped bytes E8 D1 AC D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xac
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        lea ecx, [ebp - 0c8h]
        push eax
        ; Exact mapped bytes E8 CF 48 D8 FF: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x48
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 F5 13 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
