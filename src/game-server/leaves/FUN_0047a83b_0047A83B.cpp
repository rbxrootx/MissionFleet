// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047A83B .. +0x1F3 bytes.
extern "C" __declspec(naked) void FUN_0047a83b_0047A83B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov al, byte ptr [edx + 0b2h]
        shr al, 5
        and al, 1
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 85 79 01 00 00: jne 0x47a9fb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x47a89b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov dl, byte ptr [ecx + 0b2h]
        and dl, 0fh
        and edx, 0ffh
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 0F 8D C0 00 00 00: jge 0x47a97f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 8]
        shl edx, 6
        lea ecx, [ecx + edx + 0cb0h]
        ; Exact mapped bytes E8 F4 15 00 00: call 0x47becb
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x47a97a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 8]
        shl edx, 6
        lea ecx, [ecx + edx + 0cb0h]
        ; Exact mapped bytes E8 F9 90 F8 FF: call 0x4039f0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 7F 75: jg 0x47a971
        __asm _emit 0x7f
        __asm _emit 0x75
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 8]
        shl edx, 6
        lea ecx, [ecx + edx + 0cb0h]
        ; Exact mapped bytes E8 6C 0B 00 00: call 0x47b480
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 14: jmp 0x47a934
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B8 BD FB FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xbd
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 26: je 0x47a960
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [ebp - 10h], 80h
        ; Exact mapped bytes 7D 1D: jge 0x47a960
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 190h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 68 F9 F8 FF: call 0x40a2c0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf9
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x47a95e
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x47a960
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C0: jmp 0x47a920
        __asm _emit 0xeb
        __asm _emit 0xc0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 09: je 0x47a96f
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 09: jmp 0x47a97a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes E9 13 FF FF FF: jmp 0x47a892
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 7F 6D: jg 0x47a9f9
        __asm _emit 0x7f
        __asm _emit 0x6d
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 69 69 F8 FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x69
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 2B: je 0x47a9cb
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 188h], 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 2B 69 F8 FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x69
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 64h
        ; Exact mapped bytes 76 02: jbe 0x47a9c9
        __asm _emit 0x76
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x47a9cb
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB CF: jmp 0x47a99a
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov dword ptr [edx + 0fch], 10h
        push 0
        push 0
        push 0
        push 0
        push 80000300h
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 FD F0 00 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 25: jmp 0x47aa20
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 6A 8F F8 FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x47aa20
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov dword ptr [ecx + 0fch], 10h
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 B6 DD 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xdd
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
