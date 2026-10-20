// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587556A0 .. +0x4F3 bytes.
extern "C" __declspec(naked) void FUN_587556a0_587556A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 21ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20ch], ecx
        mov dword ptr [ebp - 208h], 0
        ; Exact mapped bytes EB 0F: jmp 0x587556d4
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 208h]
        add eax, 1
        mov dword ptr [ebp - 208h], eax
        cmp dword ptr [ebp - 208h], 20h
        ; Exact mapped bytes 0F 8D 68 03 00 00: jge 0x58755a49
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20ch]
        movzx eax, byte ptr [edx + ecx + 2cah]
        test eax, eax
        ; Exact mapped bytes 0F 84 44 03 00 00: je 0x58755a44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20ch]
        mov eax, dword ptr [edx + ecx + 2dch]
        and eax, 3ffh
        mov ecx, dword ptr [ebp - 208h]
        shl ecx, 4
        mov dword ptr [ebp + ecx - 204h], eax
        mov edx, dword ptr [ebp - 208h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20ch]
        mov ecx, dword ptr [eax + edx + 2dch]
        shr ecx, 0ah
        and ecx, 3ffh
        mov edx, dword ptr [ebp - 208h]
        shl edx, 4
        mov dword ptr [ebp + edx - 200h], ecx
        mov eax, dword ptr [ebp - 208h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20ch]
        mov edx, dword ptr [ecx + eax + 2dch]
        shr edx, 14h
        and edx, 3ffh
        mov eax, dword ptr [ebp - 208h]
        shl eax, 4
        mov dword ptr [ebp + eax - 1fch], edx
        mov ecx, dword ptr [ebp - 208h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 208h]
        shl edx, 4
        mov eax, dword ptr [ebp - 20ch]
        mov ecx, dword ptr [eax + ecx + 2cch]
        mov dword ptr [ebp + edx - 1f8h], ecx
        mov edx, dword ptr [ebp - 208h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20ch]
        mov ecx, dword ptr [eax + edx + 2cch]
        xor ecx, 55h
        mov dword ptr [ebp - 210h], ecx
        ; Exact mapped bytes F2 0F 2A 85 F0 FD FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x210]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 214h], edx
        ; Exact mapped bytes F2 0F 2A 8D EC FD FF FF: cvtsi2sd xmm1, dword ptr [ebp - 0x214]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 214h]
        shr eax, 1fh
        ; Exact mapped bytes F2 0F 58 0C C5 70 4D 89 58: addsd xmm1, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E 0D D8 51 89 58: divsd xmm1, qword ptr [0x588951d8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 C1: mulsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        ; Exact mapped bytes E8 96 BD 0D 00: call 0x588315a0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xbd
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        shl ecx, 5
        and eax, 3ffh
        mov edx, dword ptr [ebp - 20ch]
        mov ecx, dword ptr [edx + ecx + 2dch]
        and ecx, 0fffffc00h
        or ecx, eax
        mov edx, dword ptr [ebp - 208h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20ch]
        mov dword ptr [eax + edx + 2dch], ecx
        ; Exact mapped bytes F2 0F 2A 85 F0 FD FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x210]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 218h], ecx
        ; Exact mapped bytes F2 0F 2A 8D E8 FD FF FF: cvtsi2sd xmm1, dword ptr [ebp - 0x218]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x8d
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 218h]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 0C D5 70 4D 89 58: addsd xmm1, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E 0D D8 51 89 58: divsd xmm1, qword ptr [0x588951d8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 C1: mulsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        ; Exact mapped bytes E8 21 BD 0D 00: call 0x588315a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xbd
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        shl ecx, 5
        and eax, 3ffh
        shl eax, 0ah
        mov edx, dword ptr [ebp - 20ch]
        mov ecx, dword ptr [edx + ecx + 2dch]
        and ecx, 0fff003ffh
        or ecx, eax
        mov edx, dword ptr [ebp - 208h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20ch]
        mov dword ptr [eax + edx + 2dch], ecx
        ; Exact mapped bytes F2 0F 2A 85 F0 FD FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x210]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 21ch], ecx
        ; Exact mapped bytes F2 0F 2A 8D E4 FD FF FF: cvtsi2sd xmm1, dword ptr [ebp - 0x21c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 21ch]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 0C D5 70 4D 89 58: addsd xmm1, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E 0D D8 51 89 58: divsd xmm1, qword ptr [0x588951d8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 C1: mulsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        ; Exact mapped bytes E8 A9 BC 0D 00: call 0x588315a0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xbc
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        shl ecx, 5
        and eax, 3ffh
        shl eax, 14h
        mov edx, dword ptr [ebp - 20ch]
        mov ecx, dword ptr [edx + ecx + 2dch]
        and ecx, 0c00fffffh
        or ecx, eax
        mov edx, dword ptr [ebp - 208h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20ch]
        mov dword ptr [eax + edx + 2dch], ecx
        mov ecx, dword ptr [ebp - 208h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20ch]
        mov eax, dword ptr [edx + ecx + 2dch]
        and eax, 3ffh
        xor eax, 55h
        mov ecx, dword ptr [ebp - 208h]
        shl ecx, 5
        and eax, 3ffh
        mov edx, dword ptr [ebp - 20ch]
        mov ecx, dword ptr [edx + ecx + 2dch]
        and ecx, 0fffffc00h
        or ecx, eax
        mov edx, dword ptr [ebp - 208h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20ch]
        mov dword ptr [eax + edx + 2dch], ecx
        mov ecx, dword ptr [ebp - 208h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20ch]
        mov eax, dword ptr [edx + ecx + 2dch]
        shr eax, 0ah
        and eax, 3ffh
        xor eax, 55h
        mov ecx, dword ptr [ebp - 208h]
        shl ecx, 5
        and eax, 3ffh
        shl eax, 0ah
        mov edx, dword ptr [ebp - 20ch]
        mov ecx, dword ptr [edx + ecx + 2dch]
        and ecx, 0fff003ffh
        or ecx, eax
        mov edx, dword ptr [ebp - 208h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20ch]
        mov dword ptr [eax + edx + 2dch], ecx
        mov ecx, dword ptr [ebp - 208h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20ch]
        mov eax, dword ptr [edx + ecx + 2dch]
        shr eax, 14h
        and eax, 3ffh
        xor eax, 55h
        mov ecx, dword ptr [ebp - 208h]
        shl ecx, 5
        and eax, 3ffh
        shl eax, 14h
        mov edx, dword ptr [ebp - 20ch]
        mov ecx, dword ptr [edx + ecx + 2dch]
        and ecx, 0c00fffffh
        or ecx, eax
        mov edx, dword ptr [ebp - 208h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20ch]
        mov dword ptr [eax + edx + 2dch], ecx
        ; Exact mapped bytes E9 7C FC FF FF: jmp 0x587556c5
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 DC 96 FF FF: call 0x5874f130
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 208h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58755a70
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 208h]
        add ecx, 1
        mov dword ptr [ebp - 208h], ecx
        cmp dword ptr [ebp - 208h], 20h
        ; Exact mapped bytes 0F 8D 06 01 00 00: jge 0x58755b83
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20ch]
        movzx ecx, byte ptr [eax + edx + 2cah]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 E2 00 00 00: je 0x58755b7e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        shl edx, 4
        mov eax, dword ptr [ebp - 208h]
        shl eax, 5
        mov ecx, dword ptr [ebp + edx - 204h]
        and ecx, 3ffh
        mov edx, dword ptr [ebp - 20ch]
        mov eax, dword ptr [edx + eax + 2dch]
        and eax, 0fffffc00h
        or eax, ecx
        mov ecx, dword ptr [ebp - 208h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20ch]
        mov dword ptr [edx + ecx + 2dch], eax
        mov eax, dword ptr [ebp - 208h]
        shl eax, 4
        mov ecx, dword ptr [ebp - 208h]
        shl ecx, 5
        mov edx, dword ptr [ebp + eax - 200h]
        and edx, 3ffh
        shl edx, 0ah
        mov eax, dword ptr [ebp - 20ch]
        mov ecx, dword ptr [eax + ecx + 2dch]
        and ecx, 0fff003ffh
        or ecx, edx
        mov edx, dword ptr [ebp - 208h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20ch]
        mov dword ptr [eax + edx + 2dch], ecx
        mov ecx, dword ptr [ebp - 208h]
        shl ecx, 4
        mov edx, dword ptr [ebp - 208h]
        shl edx, 5
        mov eax, dword ptr [ebp + ecx - 1fch]
        and eax, 3ffh
        shl eax, 14h
        mov ecx, dword ptr [ebp - 20ch]
        mov edx, dword ptr [ecx + edx + 2dch]
        and edx, 0c00fffffh
        or edx, eax
        mov eax, dword ptr [ebp - 208h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20ch]
        mov dword ptr [ecx + eax + 2dch], edx
        ; Exact mapped bytes E9 DE FE FF FF: jmp 0x58755a61
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 C3 B4 0D 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xb4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
