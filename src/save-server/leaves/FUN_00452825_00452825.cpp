// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00452825 .. +0x301 bytes.
extern "C" __declspec(naked) void FUN_00452825_00452825() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 74 18: je 0x45284f
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E7 02 00 00: call 0x452b26
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        ; Exact mapped bytes E9 D3 02 00 00: jmp 0x452b22
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 40h], 0
        ; Exact mapped bytes 74 71: je 0x4528c9
        __asm _emit 0x74
        __asm _emit 0x71
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x45286a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 38h]
        ; Exact mapped bytes 7D 17: jge 0x45288c
        __asm _emit 0x7d
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 10h]
        shl ecx, 4
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 40h]
        add eax, ecx
        push eax
        ; Exact mapped bytes FF 15 08 BB 68 00: call dword ptr [0x68bb08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB D5: jmp 0x452861
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 38h], 0
        ; Exact mapped bytes 7E 2A: jle 0x4528bf
        __asm _emit 0x7e
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 40h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 02 9C 07 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 ED 9B 07 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x9b
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 40h], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 38h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4528e5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 7D 25: jge 0x452915
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 28h
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + ecx + 24h]
        ; Exact mapped bytes E8 34 40 0D 00: call 0x526939
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 38h]
        add edx, eax
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 38h], edx
        ; Exact mapped bytes EB C7: jmp 0x4528dc
        __asm _emit 0xeb
        __asm _emit 0xc7
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 38h], 0
        ; Exact mapped bytes 7E 28: jle 0x452946
        __asm _emit 0x7e
        __asm _emit 0x28
        push 987h
        push 67702ch
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 38h]
        imul eax, eax, 30h
        push eax
        ; Exact mapped bytes E8 9C 97 07 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x97
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 3ch], edx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x45295f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 0F 8D F8 00 00 00: jge 0x452a66
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 14h]
        mov ecx, dword ptr [edx + eax + 24h]
        ; Exact mapped bytes E8 D4 40 0D 00: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 D1 00 00 00: je 0x452a61
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 28h
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + ecx + 24h]
        ; Exact mapped bytes E8 D0 40 0D 00: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x40
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 28h
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 14h]
        add ecx, edx
        push ecx
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 30h
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 3ch]
        add ecx, edx
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 9D FA FF FF: call 0x452471
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        shl edx, 4
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 30h
        mov ecx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ecx + 3ch]
        mov dword ptr [ecx + eax + 18h], edx
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 30h
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ecx + edx + 1ch], 0
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 30h
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ecx + edx + 24h], 0ffffffffh
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 30h
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ecx + edx + 20h], 0ffffffffh
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 30h
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ecx + edx + 28h], 1
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 30h
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 3ch]
        mov eax, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax + 98h]
        mov dword ptr [ecx + edx + 2ch], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E9 25 FF FF FF: jmp 0x452986
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F0 FE FF FF: jmp 0x452956
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 38h]
        shl eax, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 38h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 38h], 0
        ; Exact mapped bytes 74 28: je 0x452ac3
        __asm _emit 0x74
        __asm _emit 0x28
        push 99eh
        push 67702ch
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 38h]
        shl ecx, 4
        push ecx
        ; Exact mapped bytes E8 1F 96 07 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [edx + 40h], eax
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x452ad5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 38h]
        ; Exact mapped bytes 7D 2F: jge 0x452b0f
        __asm _emit 0x7d
        __asm _emit 0x2f
        push 10h
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 4
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 40h]
        add eax, ecx
        push eax
        ; Exact mapped bytes E8 C8 2D 01 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 4
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 40h]
        ; Exact mapped bytes 66 C7 04 08 00 00: mov word ptr [eax + ecx], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB BD: jmp 0x452acc
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 0F 00 00 00: call 0x452b26
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov esp, ebp
        pop ebp
        ret
    }
}
