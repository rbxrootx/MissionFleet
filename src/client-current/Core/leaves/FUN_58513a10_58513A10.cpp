// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58513A10 .. +0x2830 bytes.
extern "C" __declspec(naked) void FUN_58513a10_58513A10() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588810fah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 3e8h
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
        mov dword ptr [ebp - 10h], ecx
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3B 0F 2A 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a3ecch
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 50h], edx
        mov dword ptr [ebp - 3f4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0bch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 0c4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 0cch], 0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 0ceh], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0d0h], 0
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 0F 8D E4 08 00 00: jge 0x5851439e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 14h], 0ffffff9ch
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 18h], 0ffffff9ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1ch], 64h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 20h], 64h
        push 58h
        ; Exact mapped bytes E8 1B D5 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xd5
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 23: je 0x58513b1c
        __asm _emit 0x74
        __asm _emit 0x23
        push 1f3h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 0ah
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 F9 2C F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x2c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x58513b23
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 190h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 190h]
        mov dword ptr [ecx + 54h], edx
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58513b4e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 2ch]
        add eax, 1
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 8
        ; Exact mapped bytes 7D 7C: jge 0x58513bd0
        __asm _emit 0x7d
        __asm _emit 0x7c
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x58513b66
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 1
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 2
        ; Exact mapped bytes 7D 5F: jge 0x58513bcb
        __asm _emit 0x7d
        __asm _emit 0x5f
        push 58h
        ; Exact mapped bytes E8 91 D4 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd4
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 1C: je 0x58513b9f
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1f3h
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 76 2C F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x2c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58513ba6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 194h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 68h]
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 194h]
        mov dword ptr [eax + ecx*4], edx
        ; Exact mapped bytes EB 92: jmp 0x58513b5d
        __asm _emit 0xeb
        __asm _emit 0x92
        ; Exact mapped bytes E9 75 FF FF FF: jmp 0x58513b45
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58513be2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 37: jge 0x58513c1f
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 68h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 198h], eax
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, 32h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 37h
        push edx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 04 1A 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x1a
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x58513bd9
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58513c31
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 34: jge 0x58513c6b
        __asm _emit 0x7d
        __asm _emit 0x34
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 68h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 19ch], edx
        mov eax, dword ptr [ebp + 14h]
        sub eax, 23h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 B8 19 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x19
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BD: jmp 0x58513c28
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58513c7d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 36: jge 0x58513cb9
        __asm _emit 0x7d
        __asm _emit 0x36
        mov eax, 8
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 68h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 1a0h], ecx
        mov edx, dword ptr [ebp + 14h]
        sub edx, 14h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 37h
        push eax
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 6A 19 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x19
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BB: jmp 0x58513c74
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58513ccb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 37: jge 0x58513d08
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, 8
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 68h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 1a4h], ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, 0ah
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 46h
        push eax
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 1B 19 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x19
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x58513cc2
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58513d1a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 31: jge 0x58513d51
        __asm _emit 0x7d
        __asm _emit 0x31
        mov edx, 8
        shl edx, 2
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 68h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 1a8h], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 D2 18 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x18
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C0: jmp 0x58513d11
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58513d63
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 34: jge 0x58513d9d
        __asm _emit 0x7d
        __asm _emit 0x34
        mov ecx, 8
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 68h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 1ach], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 23h
        push edx
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 86 18 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BD: jmp 0x58513d5a
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58513daf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 37: jge 0x58513dec
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, 8
        imul edx, ecx, 6
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 68h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 1b0h], eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 23h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 3ch
        push edx
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 37 18 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x18
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x58513da6
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58513dfe
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 37: jge 0x58513e3b
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, 8
        imul edx, ecx, 7
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 68h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 1b4h], eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 2dh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 41h
        push edx
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 E8 17 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x58513df5
        __asm _emit 0xeb
        __asm _emit 0xba
        cmp dword ptr [ebp + 18h], -1
        ; Exact mapped bytes 0F 85 59 01 00 00: jne 0x58513f9e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 B8 D1 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xd1
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 34: je 0x58513e90
        __asm _emit 0x74
        __asm _emit 0x34
        push 0ah
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 0C F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x0c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], eax
        push 1f3h
        push 0
        push 0
        mov eax, dword ptr [ebp - 1b8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 85 29 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x58513e97
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 1bch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1bch]
        mov dword ptr [eax + 0b0h], ecx
        push 54h
        ; Exact mapped bytes E8 4A D1 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd1
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 37: je 0x58513f01
        __asm _emit 0x74
        __asm _emit 0x37
        push 0c1h
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 0C F7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x0c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        push 40h
        push 1f2h
        push 0
        mov edx, dword ptr [ebp - 1c0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 24 E4 F6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58513f08
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 1c4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1c4h]
        mov dword ptr [edx + 0b4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0b8h], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 1c8h], eax
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, 0e6h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 0b4h
        push edx
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 C1 16 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x16
        __asm _emit 0x2a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 1cch], ecx
        mov edx, dword ptr [ebp + 14h]
        sub edx, 0e6h
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 0b4h
        push eax
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 94 16 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x16
        __asm _emit 0x2a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0c0h], 14h
        ; Exact mapped bytes E9 0E 03 00 00: jmp 0x585142ac
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], -1
        ; Exact mapped bytes 0F 84 82 01 00 00: je 0x5851412a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], -6
        ; Exact mapped bytes 0F 84 78 01 00 00: je 0x5851412a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 4B D0 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd0
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 37: je 0x58514000
        __asm _emit 0x74
        __asm _emit 0x37
        push 6
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 0A F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x0a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 1d0h], eax
        push 1f3h
        push 0
        push 0
        mov edx, dword ptr [ebp - 1d0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 18 28 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x28
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5851400a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 1d4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1d4h]
        mov dword ptr [edx + 0b0h], eax
        push 54h
        ; Exact mapped bytes E8 D4 CF 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xcf
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 3D: je 0x58514083
        __asm _emit 0x74
        __asm _emit 0x3d
        push 0c2h
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA 0A F7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x0a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        push 40h
        push 1f2h
        push 0
        mov ecx, dword ptr [ebp - 1d8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 A5 E2 F6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe2
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5851408d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 1dch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1dch]
        mov dword ptr [ecx + 0b4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b8h], 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 1e0h], edx
        mov eax, dword ptr [ebp + 14h]
        sub eax, 8ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 6eh
        push ecx
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 3D 15 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x15
        __asm _emit 0x2a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 1e4h], eax
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, 8ch
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 6eh
        push edx
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 12 15 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x15
        __asm _emit 0x2a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0c0h], 14h
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 0c4h], 1
        ; Exact mapped bytes E9 82 01 00 00: jmp 0x585142ac
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], -6
        ; Exact mapped bytes 0F 85 78 01 00 00: jne 0x585142ac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 C9 CE 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xce
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 3A: je 0x5851418b
        __asm _emit 0x74
        __asm _emit 0x3a
        push 9
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 09 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x09
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        push 1f3h
        push 0
        push 0
        mov edx, dword ptr [ebp - 1e8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 8D 26 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x26
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58514195
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 1ech], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ech]
        mov dword ptr [edx + 0b0h], eax
        push 54h
        ; Exact mapped bytes E8 49 CE 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xce
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 3D: je 0x5851420e
        __asm _emit 0x74
        __asm _emit 0x3d
        push 0c1h
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F 09 F7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        push 40h
        push 1f2h
        push 0
        mov ecx, dword ptr [ebp - 1f0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 1A E1 F6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xe1
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58514218
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov eax, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 1f4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1f4h]
        mov dword ptr [ecx + 0b4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 1f8h], edx
        mov eax, dword ptr [ebp + 14h]
        sub eax, 0e6h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 0afh
        push ecx
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 AF 13 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x13
        __asm _emit 0x2a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 1fch], eax
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, 0e6h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 0afh
        push edx
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 81 13 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x13
        __asm _emit 0x2a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0c0h], 14h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 200h], edx
        push 0
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 78 B5 F8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xb5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 204h], ecx
        push 0
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 6C B2 F8 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xb2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 208h], eax
        push 0
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 E0 1B F7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x1b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 20ch], edx
        push 0
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 C4 1B F7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x1b
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 0c0h]
        imul edx, dword ptr [ecx + 0c0h]
        push edx
        ; Exact mapped bytes E8 0C CD 31 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xcd
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 210h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 210h]
        mov dword ptr [eax + 0bch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 0c0h]
        imul ecx, dword ptr [eax + 0c0h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0bch]
        push eax
        ; Exact mapped bytes E8 9D 8A 33 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x8a
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 0ch
        push 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0bch]
        push eax
        ; Exact mapped bytes E8 C5 01 FD FF: call 0x584e4560
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        cmp dword ptr [ebp + 18h], 1
        ; Exact mapped bytes 0F 85 23 08 00 00: jne 0x58514bcb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D 14 F8 FF: call 0x58495830
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x14
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        sub ecx, 1
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 15h
        ; Exact mapped bytes 0F 87 DC 04 00 00: ja 0x585148a5
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        movzx eax, byte ptr [edx + 58516264h]
        ; Exact mapped bytes FF 24 85 40 62 51 58: jmp dword ptr [eax*4 + 0x58516240]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x62
        __asm _emit 0x51
        __asm _emit 0x58
        push 58h
        ; Exact mapped bytes E8 23 CC 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xcc
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 52: je 0x58514449
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C1 25 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x25
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        push 0f6h
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 BB 06 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x06
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        push 1f3h
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 0ah
        push edx
        mov eax, dword ptr [ebp - 218h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 CF 23 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x23
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58514453
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 21ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 21ch]
        mov dword ptr [eax + 54h], ecx
        ; Exact mapped bytes E9 31 04 00 00: jmp 0x585148a5
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 89 CB 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xcb
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 52: je 0x585144e3
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 25 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x25
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        push 0eah
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 21 06 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x06
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 224h], eax
        push 1f3h
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 224h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 35 23 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x23
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x585144ed
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov eax, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 228h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 228h]
        mov dword ptr [ecx + 54h], edx
        ; Exact mapped bytes E9 97 03 00 00: jmp 0x585148a5
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 EF CA 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xca
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 52: je 0x5851457d
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D 24 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x24
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        push 0f9h
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 87 05 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        push 1f3h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp - 230h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 9B 22 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x22
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58514587
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov ecx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 234h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 234h]
        mov dword ptr [edx + 54h], eax
        ; Exact mapped bytes E9 FD 02 00 00: jmp 0x585148a5
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 55 CA 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xca
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 52: je 0x58514617
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F3 23 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x23
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        push 0f3h
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 ED 04 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 23ch], eax
        push 1f3h
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 0ah
        push edx
        mov eax, dword ptr [ebp - 23ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 01 22 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x22
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58514621
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov edx, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 240h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 240h]
        mov dword ptr [eax + 54h], ecx
        ; Exact mapped bytes E9 63 02 00 00: jmp 0x585148a5
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 BB C9 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc9
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 52: je 0x585146b1
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 59 23 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x23
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        push 0e1h
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 53 04 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 248h], eax
        push 1f3h
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 248h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 67 21 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x21
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585146bb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov eax, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 24ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 24ch]
        mov dword ptr [ecx + 54h], edx
        ; Exact mapped bytes E9 C9 01 00 00: jmp 0x585148a5
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 21 C9 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc9
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 52: je 0x5851474b
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BF 22 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x22
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        push 0e4h
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 B9 03 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 254h], eax
        push 1f3h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp - 254h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 CD 20 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x20
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58514755
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov ecx, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 258h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 258h]
        mov dword ptr [edx + 54h], eax
        ; Exact mapped bytes E9 2F 01 00 00: jmp 0x585148a5
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 87 C8 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc8
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 52: je 0x585147e5
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 25 22 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x22
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 25ch], eax
        push 0e7h
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 1F 03 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x03
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        push 1f3h
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 0ah
        push edx
        mov eax, dword ptr [ebp - 260h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 33 20 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x20
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585147ef
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov edx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 264h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 264h]
        mov dword ptr [eax + 54h], ecx
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x585148a5
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 ED C7 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc7
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 52: je 0x5851487f
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8B 21 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x21
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        push 0e7h
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 85 02 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 26ch], eax
        push 1f3h
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 26ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 99 1F F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x1f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58514889
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov eax, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 270h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 270h]
        mov dword ptr [ecx + 54h], edx
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x585148b7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 38h]
        add eax, 1
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 8
        ; Exact mapped bytes 0F 8D 8E 00 00 00: jge 0x5851494f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585148d3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 1
        mov dword ptr [ebp - 3ch], ecx
        cmp dword ptr [ebp - 3ch], 2
        ; Exact mapped bytes 7D 71: jge 0x5851494a
        __asm _emit 0x7d
        __asm _emit 0x71
        push 58h
        ; Exact mapped bytes E8 24 C7 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc7
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 22: je 0x58514918
        __asm _emit 0x74
        __asm _emit 0x22
        push 1f3h
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 00 1F F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58514922
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov eax, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 274h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 68h]
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp - 274h]
        mov dword ptr [eax + ecx*4], edx
        ; Exact mapped bytes EB 80: jmp 0x585148ca
        __asm _emit 0xeb
        __asm _emit 0x80
        ; Exact mapped bytes E9 5F FF FF FF: jmp 0x585148ae
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58514961
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 7D 37: jge 0x5851499e
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 68h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 278h], eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 0bh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 29h
        push edx
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 85 0C 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x58514958
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585149b0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 7D 37: jge 0x585149ed
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 68h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 27ch], edx
        mov eax, dword ptr [ebp + 14h]
        sub eax, 10h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 1dh
        push ecx
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 36 0C 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0c
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x585149a7
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585149ff
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 7D 36: jge 0x58514a3b
        __asm _emit 0x7d
        __asm _emit 0x36
        mov eax, 8
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 68h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 280h], ecx
        mov edx, dword ptr [ebp + 14h]
        sub edx, 6
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes E8 E8 0B 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BB: jmp 0x585149f6
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58514a4d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 7D 37: jge 0x58514a8a
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, 8
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 68h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 284h], ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, 1fh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 19h
        push eax
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 99 0B 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x0b
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x58514a44
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58514a9c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 7D 37: jge 0x58514ad9
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, 8
        shl edx, 2
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 68h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 288h], eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 2bh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 30h
        push edx
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 4A 0B 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x0b
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x58514a93
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58514aeb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 7D 37: jge 0x58514b28
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, 8
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 68h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 28ch], eax
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, 1
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 11h
        push edx
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 FB 0A 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x0a
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x58514ae2
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58514b3a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 7D 37: jge 0x58514b77
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, 8
        imul edx, ecx, 6
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 68h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 290h], eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 22h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 26h
        push edx
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 AC 0A 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x0a
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x58514b31
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58514b89
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 7D 37: jge 0x58514bc6
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, 8
        imul edx, ecx, 7
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 68h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 294h], eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 23h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 7
        push edx
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 5D 0A 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x0a
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x58514b80
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes E9 E7 13 00 00: jmp 0x58515fb2
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 2
        ; Exact mapped bytes 0F 85 23 08 00 00: jne 0x585153f8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 0C F8 FF: call 0x58495830
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x0c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        sub eax, 1
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 15h
        ; Exact mapped bytes 0F 87 DC 04 00 00: ja 0x585150d2
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        movzx edx, byte ptr [ecx + 585162a0h]
        ; Exact mapped bytes FF 24 95 7C 62 51 58: jmp dword ptr [edx*4 + 0x5851627c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0x62
        __asm _emit 0x51
        __asm _emit 0x58
        push 58h
        ; Exact mapped bytes E8 F6 C3 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xc3
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 52: je 0x58514c76
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 94 1D F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x1d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 298h], eax
        push 0f7h
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 8E FE F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 29ch], eax
        push 1f3h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp - 29ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 A2 1B F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x1b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x58514c80
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov ecx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 2a0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2a0h]
        mov dword ptr [edx + 54h], eax
        ; Exact mapped bytes E9 31 04 00 00: jmp 0x585150d2
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 5C C3 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xc3
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 52: je 0x58514d10
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FA 1C F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x1c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 2a4h], eax
        push 0ebh
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 F4 FD F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 2a8h], eax
        push 1f3h
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 0ah
        push edx
        mov eax, dword ptr [ebp - 2a8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 08 1B F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x1b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58514d1a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov edx, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 2ach], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2ach]
        mov dword ptr [eax + 54h], ecx
        ; Exact mapped bytes E9 97 03 00 00: jmp 0x585150d2
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 C2 C2 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc2
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 52: je 0x58514daa
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 60 1C F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x1c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 2b0h], eax
        push 0fah
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 5A FD F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xfd
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 2b4h], eax
        push 1f3h
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 2b4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 6E 1A F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x1a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58514db4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov eax, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 2b8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2b8h]
        mov dword ptr [ecx + 54h], edx
        ; Exact mapped bytes E9 FD 02 00 00: jmp 0x585150d2
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 28 C2 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc2
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 52: je 0x58514e44
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C6 1B F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x1b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 2bch], eax
        push 0f4h
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 C0 FC F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 2c0h], eax
        push 1f3h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp - 2c0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 D4 19 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x19
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58514e4e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov ecx, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 2c4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2c4h]
        mov dword ptr [edx + 54h], eax
        ; Exact mapped bytes E9 63 02 00 00: jmp 0x585150d2
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 8E C1 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc1
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 52: je 0x58514ede
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2C 1B F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x1b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 2c8h], eax
        push 0e2h
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 26 FC F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xfc
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 2cch], eax
        push 1f3h
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 0ah
        push edx
        mov eax, dword ptr [ebp - 2cch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 3A 19 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x19
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58514ee8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov edx, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 2d0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2d0h]
        mov dword ptr [eax + 54h], ecx
        ; Exact mapped bytes E9 C9 01 00 00: jmp 0x585150d2
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 F4 C0 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc0
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 52: je 0x58514f78
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 92 1A F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x1a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 2d4h], eax
        push 0e5h
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 8C FB F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfb
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 2d8h], eax
        push 1f3h
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 2d8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 A0 18 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x18
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58514f82
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 2dch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2dch]
        mov dword ptr [ecx + 54h], edx
        ; Exact mapped bytes E9 2F 01 00 00: jmp 0x585150d2
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 5A C0 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xc0
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 52: je 0x58515012
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F8 19 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x19
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 2e0h], eax
        push 0e8h
        mov ecx, dword ptr [ebp - 2e0h]
        ; Exact mapped bytes E8 F2 FA F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xfa
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 2e4h], eax
        push 1f3h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp - 2e4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 06 18 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x18
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5851501c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov ecx, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 2e8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2e8h]
        mov dword ptr [edx + 54h], eax
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x585150d2
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 C0 BF 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xbf
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 52: je 0x585150ac
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5E 19 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x19
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 2ech], eax
        push 0e8h
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 58 FA F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xfa
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 2f0h], eax
        push 1f3h
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 0ah
        push edx
        mov eax, dword ptr [ebp - 2f0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 6C 17 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585150b6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 2f4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2f4h]
        mov dword ptr [eax + 54h], ecx
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 09: jmp 0x585150e4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 44h]
        add edx, 1
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 44h], 8
        ; Exact mapped bytes 0F 8D 8E 00 00 00: jge 0x5851517c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 09: jmp 0x58515100
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 48h]
        add eax, 1
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 2
        ; Exact mapped bytes 7D 71: jge 0x58515177
        __asm _emit 0x7d
        __asm _emit 0x71
        push 58h
        ; Exact mapped bytes E8 F7 BE 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xbe
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 22: je 0x58515145
        __asm _emit 0x74
        __asm _emit 0x22
        push 1f3h
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 D3 16 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x16
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5851514f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 2f8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 68h]
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 2f8h]
        mov dword ptr [edx + eax*4], ecx
        ; Exact mapped bytes EB 80: jmp 0x585150f7
        __asm _emit 0xeb
        __asm _emit 0x80
        ; Exact mapped bytes E9 5F FF FF FF: jmp 0x585150db
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5851518e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 37: jge 0x585151cb
        __asm _emit 0x7d
        __asm _emit 0x37
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 68h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 2fch], edx
        mov eax, dword ptr [ebp + 14h]
        add eax, 16h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 23h
        push ecx
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes E8 58 04 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x58515185
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585151dd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 37: jge 0x5851521a
        __asm _emit 0x7d
        __asm _emit 0x37
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 68h]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 300h], ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, 1fh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 09 04 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x04
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x585151d4
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5851522c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 36: jge 0x58515268
        __asm _emit 0x7d
        __asm _emit 0x36
        mov edx, 8
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 68h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 304h], eax
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, 17h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 1ah
        push edx
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 BB 03 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BB: jmp 0x58515223
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5851527a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 37: jge 0x585152b7
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, 8
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 68h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 308h], eax
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, 24h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 7
        push edx
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 6C 03 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x58515271
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585152c9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 37: jge 0x58515306
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, 8
        shl ecx, 2
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 68h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 30ch], edx
        mov eax, dword ptr [ebp + 14h]
        sub eax, 2
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 4ah
        push ecx
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 1D 03 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x03
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x585152c0
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58515318
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 37: jge 0x58515355
        __asm _emit 0x7d
        __asm _emit 0x37
        mov eax, 8
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 68h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 310h], edx
        mov eax, dword ptr [ebp + 14h]
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 5
        push ecx
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 CE 02 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x5851530f
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58515367
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 37: jge 0x585153a4
        __asm _emit 0x7d
        __asm _emit 0x37
        mov eax, 8
        imul ecx, eax, 6
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 68h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 314h], edx
        mov eax, dword ptr [ebp + 14h]
        sub eax, 1bh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 11h
        push ecx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 7F 02 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x5851535e
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585153b6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 37: jge 0x585153f3
        __asm _emit 0x7d
        __asm _emit 0x37
        mov eax, 8
        imul ecx, eax, 7
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 68h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 318h], edx
        mov eax, dword ptr [ebp + 14h]
        sub eax, 3
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 37h
        push ecx
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 30 02 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x585153ad
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes E9 BA 0B 00 00: jmp 0x58515fb2
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 3
        ; Exact mapped bytes 0F 85 20 08 00 00: jne 0x58515c22
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 04 F8 FF: call 0x58495830
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x04
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4ch]
        sub edx, 1
        mov dword ptr [ebp - 4ch], edx
        cmp dword ptr [ebp - 4ch], 15h
        ; Exact mapped bytes 0F 87 DC 04 00 00: ja 0x585158ff
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        movzx ecx, byte ptr [eax + 585162dch]
        ; Exact mapped bytes FF 24 8D B8 62 51 58: jmp dword ptr [ecx*4 + 0x585162b8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0x62
        __asm _emit 0x51
        __asm _emit 0x58
        push 58h
        ; Exact mapped bytes E8 C9 BB 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xbb
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 52: je 0x585154a3
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 67 15 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x15
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 31ch], eax
        push 0f8h
        mov ecx, dword ptr [ebp - 31ch]
        ; Exact mapped bytes E8 61 F6 F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf6
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 320h], eax
        push 1f3h
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 320h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 75 13 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x13
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585154ad
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov eax, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 324h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 324h]
        mov dword ptr [ecx + 54h], edx
        ; Exact mapped bytes E9 31 04 00 00: jmp 0x585158ff
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 2F BB 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xbb
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 52: je 0x5851553d
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD 14 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x14
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 328h], eax
        push 0ech
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 C7 F5 F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf5
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 32ch], eax
        push 1f3h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp - 32ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 DB 12 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x12
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58515547
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov ecx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 330h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 330h]
        mov dword ptr [edx + 54h], eax
        ; Exact mapped bytes E9 97 03 00 00: jmp 0x585158ff
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 95 BA 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xba
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 52: je 0x585155d7
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 33 14 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x14
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 334h], eax
        push 0fbh
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 2D F5 F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xf5
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 338h], eax
        push 1f3h
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 0ah
        push edx
        mov eax, dword ptr [ebp - 338h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 41 12 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x12
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585155e1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov edx, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 33ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 33ch]
        mov dword ptr [eax + 54h], ecx
        ; Exact mapped bytes E9 FD 02 00 00: jmp 0x585158ff
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 FB B9 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xb9
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 52: je 0x58515671
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 99 13 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x13
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 340h], eax
        push 0f5h
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 93 F4 F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf4
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 344h], eax
        push 1f3h
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 344h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 A7 11 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x11
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5851567b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov eax, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 348h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 348h]
        mov dword ptr [ecx + 54h], edx
        ; Exact mapped bytes E9 63 02 00 00: jmp 0x585158ff
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 61 B9 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xb9
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 150h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 150h], 0
        ; Exact mapped bytes 74 52: je 0x5851570b
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FF 12 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x12
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 34ch], eax
        push 0e3h
        mov ecx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes E8 F9 F3 F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf3
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 350h], eax
        push 1f3h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp - 350h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 0D 11 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x11
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58515715
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov ecx, dword ptr [ebp - 154h]
        mov dword ptr [ebp - 354h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 354h]
        mov dword ptr [edx + 54h], eax
        ; Exact mapped bytes E9 C9 01 00 00: jmp 0x585158ff
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 C7 B8 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xb8
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 158h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 158h], 0
        ; Exact mapped bytes 74 52: je 0x585157a5
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 65 12 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x12
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 358h], eax
        push 0e6h
        mov ecx, dword ptr [ebp - 358h]
        ; Exact mapped bytes E8 5F F3 F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf3
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 35ch], eax
        push 1f3h
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 0ah
        push edx
        mov eax, dword ptr [ebp - 35ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 73 10 F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x10
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585157af
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        mov edx, dword ptr [ebp - 15ch]
        mov dword ptr [ebp - 360h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 360h]
        mov dword ptr [eax + 54h], ecx
        ; Exact mapped bytes E9 2F 01 00 00: jmp 0x585158ff
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 2D B8 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xb8
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 160h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 160h], 0
        ; Exact mapped bytes 74 52: je 0x5851583f
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CB 11 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x11
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 364h], eax
        push 0e9h
        mov ecx, dword ptr [ebp - 364h]
        ; Exact mapped bytes E8 C5 F2 F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf2
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 368h], eax
        push 1f3h
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 368h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 D9 0F F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x0f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58515849
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 164h], 0
        mov eax, dword ptr [ebp - 164h]
        mov dword ptr [ebp - 36ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 36ch]
        mov dword ptr [ecx + 54h], edx
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x585158ff
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 93 B7 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xb7
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 168h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 168h], 0
        ; Exact mapped bytes 74 52: je 0x585158d9
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 31 11 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x11
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 370h], eax
        push 0e9h
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 2B F2 F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf2
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 374h], eax
        push 1f3h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp - 374h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 3F 0F F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x0f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585158e3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 16ch], 0
        mov ecx, dword ptr [ebp - 16ch]
        mov dword ptr [ebp - 378h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 378h]
        mov dword ptr [edx + 54h], eax
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes EB 09: jmp 0x58515911
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 1
        mov dword ptr [ebp - 50h], ecx
        cmp dword ptr [ebp - 50h], 8
        ; Exact mapped bytes 0F 8D 8E 00 00 00: jge 0x585159a9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], 0
        ; Exact mapped bytes EB 09: jmp 0x5851592d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 54h]
        add edx, 1
        mov dword ptr [ebp - 54h], edx
        cmp dword ptr [ebp - 54h], 2
        ; Exact mapped bytes 7D 71: jge 0x585159a4
        __asm _emit 0x7d
        __asm _emit 0x71
        push 58h
        ; Exact mapped bytes E8 CA B6 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xb6
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 170h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 170h], 0
        ; Exact mapped bytes 74 22: je 0x58515972
        __asm _emit 0x74
        __asm _emit 0x22
        push 1f3h
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 A6 0E F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x0e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5851597c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 174h], 0
        mov ecx, dword ptr [ebp - 174h]
        mov dword ptr [ebp - 37ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 68h]
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [ebp - 37ch]
        mov dword ptr [ecx + edx*4], eax
        ; Exact mapped bytes EB 80: jmp 0x58515924
        __asm _emit 0xeb
        __asm _emit 0x80
        ; Exact mapped bytes E9 5F FF FF FF: jmp 0x58515908
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x585159bb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 7D 37: jge 0x585159f8
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 68h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 380h], ecx
        mov edx, dword ptr [ebp + 14h]
        sub edx, 18h
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 2eh
        push eax
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes E8 2B FC 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xfc
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x585159b2
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x58515a0a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 7D 37: jge 0x58515a47
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 68h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 384h], eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 0dh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 23h
        push edx
        mov ecx, dword ptr [ebp - 384h]
        ; Exact mapped bytes E8 DC FB 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfb
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x58515a01
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x58515a59
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 7D 36: jge 0x58515a95
        __asm _emit 0x7d
        __asm _emit 0x36
        mov ecx, 8
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 68h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 388h], edx
        mov eax, dword ptr [ebp + 14h]
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0dh
        push ecx
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 8E FB 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfb
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BB: jmp 0x58515a50
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x58515aa7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 7D 37: jge 0x58515ae4
        __asm _emit 0x7d
        __asm _emit 0x37
        mov eax, 8
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 68h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 38ch], edx
        mov eax, dword ptr [ebp + 14h]
        sub eax, 5
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1ch
        push ecx
        mov ecx, dword ptr [ebp - 38ch]
        ; Exact mapped bytes E8 3F FB 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfb
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x58515a9e
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x58515af6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 7D 37: jge 0x58515b33
        __asm _emit 0x7d
        __asm _emit 0x37
        mov eax, 8
        shl eax, 2
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 68h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 390h], ecx
        mov edx, dword ptr [ebp + 14h]
        sub edx, 19h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 F0 FA 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xfa
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x58515aed
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x58515b45
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 7D 37: jge 0x58515b82
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, 8
        imul eax, edx, 5
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 68h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 394h], ecx
        mov edx, dword ptr [ebp + 14h]
        sub edx, 21h
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 21h
        push eax
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 A1 FA 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xfa
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x58515b3c
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x58515b94
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 7D 34: jge 0x58515bce
        __asm _emit 0x7d
        __asm _emit 0x34
        mov edx, 8
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 68h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 398h], ecx
        mov edx, dword ptr [ebp + 14h]
        sub edx, 29h
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 398h]
        ; Exact mapped bytes E8 55 FA 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfa
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BD: jmp 0x58515b8b
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x58515be0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 7D 37: jge 0x58515c1d
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, 8
        imul eax, edx, 7
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 68h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 39ch], ecx
        mov edx, dword ptr [ebp + 14h]
        sub edx, 5
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 6
        push eax
        mov ecx, dword ptr [ebp - 39ch]
        ; Exact mapped bytes E8 06 FA 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xfa
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x58515bd7
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes E9 90 03 00 00: jmp 0x58515fb2
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 4
        ; Exact mapped bytes 0F 85 86 03 00 00: jne 0x58515fb2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 D1 B3 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb3
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 178h], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 178h], 0
        ; Exact mapped bytes 74 52: je 0x58515c9b
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6F 0D F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x0d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 3a0h], eax
        push 0edh
        mov ecx, dword ptr [ebp - 3a0h]
        ; Exact mapped bytes E8 69 EE F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xee
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 3a4h], eax
        push 1f3h
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 0ah
        push edx
        mov eax, dword ptr [ebp - 3a4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 7D 0B F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x0b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58515ca5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 17ch], 0
        mov edx, dword ptr [ebp - 17ch]
        mov dword ptr [ebp - 3a8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 3a8h]
        mov dword ptr [eax + 54h], ecx
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 09: jmp 0x58515cd3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 58h]
        add edx, 1
        mov dword ptr [ebp - 58h], edx
        cmp dword ptr [ebp - 58h], 8
        ; Exact mapped bytes 0F 8D 8E 00 00 00: jge 0x58515d6b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58515cef
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 5ch]
        add eax, 1
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 5ch], 2
        ; Exact mapped bytes 7D 71: jge 0x58515d66
        __asm _emit 0x7d
        __asm _emit 0x71
        push 58h
        ; Exact mapped bytes E8 08 B3 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb3
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 180h], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 180h], 0
        ; Exact mapped bytes 74 22: je 0x58515d34
        __asm _emit 0x74
        __asm _emit 0x22
        push 1f3h
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 E4 0A F7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x0a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58515d3e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 184h], 0
        mov edx, dword ptr [ebp - 184h]
        mov dword ptr [ebp - 3ach], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 68h]
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp - 3ach]
        mov dword ptr [edx + eax*4], ecx
        ; Exact mapped bytes EB 80: jmp 0x58515ce6
        __asm _emit 0xeb
        __asm _emit 0x80
        ; Exact mapped bytes E9 5F FF FF FF: jmp 0x58515cca
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58515d7d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 7D 31: jge 0x58515db4
        __asm _emit 0x7d
        __asm _emit 0x31
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 68h]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 3b0h], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 6F F8 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xf8
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C0: jmp 0x58515d74
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58515dc6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 7D 31: jge 0x58515dfd
        __asm _emit 0x7d
        __asm _emit 0x31
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 68h]
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 3b4h], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 3b4h]
        ; Exact mapped bytes E8 26 F8 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf8
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C0: jmp 0x58515dbd
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58515e0f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 7D 30: jge 0x58515e45
        __asm _emit 0x7d
        __asm _emit 0x30
        mov edx, 8
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 68h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 3b8h], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 3b8h]
        ; Exact mapped bytes E8 DE F7 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xf7
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C1: jmp 0x58515e06
        __asm _emit 0xeb
        __asm _emit 0xc1
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58515e57
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 7D 31: jge 0x58515e8e
        __asm _emit 0x7d
        __asm _emit 0x31
        mov ecx, 8
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 68h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 3bch], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 3bch]
        ; Exact mapped bytes E8 95 F7 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf7
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C0: jmp 0x58515e4e
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58515ea0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 7D 31: jge 0x58515ed7
        __asm _emit 0x7d
        __asm _emit 0x31
        mov ecx, 8
        shl ecx, 2
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 68h]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 3c0h], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 3c0h]
        ; Exact mapped bytes E8 4C F7 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf7
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C0: jmp 0x58515e97
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58515ee9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 7D 31: jge 0x58515f20
        __asm _emit 0x7d
        __asm _emit 0x31
        mov eax, 8
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 68h]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 3c4h], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 03 F7 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf7
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C0: jmp 0x58515ee0
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58515f32
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 7D 31: jge 0x58515f69
        __asm _emit 0x7d
        __asm _emit 0x31
        mov eax, 8
        imul ecx, eax, 6
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 68h]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 3c8h], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 3c8h]
        ; Exact mapped bytes E8 BA F6 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf6
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C0: jmp 0x58515f29
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58515f7b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 7D 31: jge 0x58515fb2
        __asm _emit 0x7d
        __asm _emit 0x31
        mov eax, 8
        imul ecx, eax, 7
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 68h]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 3cch], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 3cch]
        ; Exact mapped bytes E8 71 F6 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf6
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C0: jmp 0x58515f72
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x58515fc4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 8
        ; Exact mapped bytes 7D 59: jge 0x58516023
        __asm _emit 0x7d
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 68h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 3d0h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes E8 BB F5 29 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf5
        __asm _emit 0x29
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 68h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 3d4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3d4h]
        ; Exact mapped bytes E8 90 F5 29 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf5
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 98: jmp 0x58515fbb
        __asm _emit 0xeb
        __asm _emit 0x98
        push 54h
        ; Exact mapped bytes E8 DA AF 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xaf
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 188h], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 188h], 0
        ; Exact mapped bytes 74 44: je 0x58516084
        __asm _emit 0x74
        __asm _emit 0x44
        push 135h
        ; Exact mapped bytes 8B 0D E4 07 96 58: mov ecx, dword ptr [0x589607e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 EA F6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xea
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 3d8h], eax
        push 1f3h
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 3d8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 A4 C2 F6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc2
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5851608e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 18ch], 0
        mov eax, dword ptr [ebp - 18ch]
        mov dword ptr [ebp - 3dch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3dch]
        mov dword ptr [ecx + 58h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 3e0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes E8 8D 94 F8 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ebp - 3e4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes E8 D1 F4 29 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf4
        __asm _emit 0x29
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 3e8h], edx
        push 0
        mov ecx, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes E8 E8 FD F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x5851610b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 28h]
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 8
        ; Exact mapped bytes 7D 0C: jge 0x5851611d
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp - 28h]
        mov byte ptr [ecx + 5dh], 0
        ; Exact mapped bytes EB E5: jmp 0x58516102
        __asm _emit 0xeb
        __asm _emit 0xe5
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 10 FC FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, word ptr [eax + 84h]
        cmp edx, 0fh
        ; Exact mapped bytes 75 4D: jne 0x58516181
        __asm _emit 0x75
        __asm _emit 0x4d
        cmp dword ptr [ebp + 18h], -1
        ; Exact mapped bytes 74 06: je 0x58516140
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 18h], -6
        ; Exact mapped bytes 75 0F: jne 0x5851614f
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a8h], 0fde8h
        ; Exact mapped bytes EB 19: jmp 0x58516168
        __asm _emit 0xeb
        __asm _emit 0x19
        cmp dword ptr [ebp + 18h], -1
        ; Exact mapped bytes 74 13: je 0x58516168
        __asm _emit 0x74
        __asm _emit 0x13
        cmp dword ptr [ebp + 18h], -6
        ; Exact mapped bytes 74 0D: je 0x58516168
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a8h], 4e20h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ach], 0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 0cdh], 1
        ; Exact mapped bytes EB 23: jmp 0x585161a4
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 8B 15 24 8D 94 58: mov edx, dword ptr [0x58948d24]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ecx + 0a8h], edx
        ; Exact mapped bytes A1 24 8D 94 58: mov eax, dword ptr [0x58948d24]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 2B 05 28 8D 94 58: sub eax, dword ptr [0x58948d28]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ach], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ach]
        xor edx, edx
        mov ecx, 3
        div ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ach], eax
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 5ch], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 62 F7 FF: call 0x5848c420
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x62
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 25h
        div ecx
        mov eax, dword ptr [ebp - 10h]
        add edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 3ech], edx
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 3f0h], edx
        mov eax, dword ptr [ebp - 3ech]
        push eax
        mov ecx, dword ptr [ebp - 3f0h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 35 0B 00 00: call 0x58516d40
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0d4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0d8h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
