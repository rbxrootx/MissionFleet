// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BE930 .. +0x13F bytes.
extern "C" __declspec(naked) void FUN_100be930_100BE930() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x100bea48
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 1f00h
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 77: je 0x100be9c2
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 74 71: je 0x100be9c2
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes 66 3D 00 02: cmp ax, 0x200
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 ED 00 00 00: jne 0x100bea48
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        test eax, eax
        ; Exact mapped bytes 7E 3D: jle 0x100be9a2
        __asm _emit 0x7e
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 3D 20 51 17 10: mov edi, dword ptr [0x10175120]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        dec eax
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        and eax, 80000007h
        ; Exact mapped bytes 79 05: jns 0x100be980
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffff8h
        inc eax
        sub eax, 4
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x100be992
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        sub eax, 2
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 33 03 04 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x100bea48
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x100bea48
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov ecx, esi
        mov dword ptr [esi + 0b0h], 0ffffffffh
        ; Exact mapped bytes E8 13 03 04 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x100bea48
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 54h]
        cmp ecx, eax
        ; Exact mapped bytes 74 42: je 0x100bea0e
        __asm _emit 0x74
        __asm _emit 0x42
        sub eax, ecx
        cmp eax, -8
        ; Exact mapped bytes 7E 2A: jle 0x100be9fd
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp eax, 8
        ; Exact mapped bytes 7D 25: jge 0x100be9fd
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp eax, -4
        ; Exact mapped bytes 7E 19: jle 0x100be9f6
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp eax, 4
        ; Exact mapped bytes 7D 14: jge 0x100be9f6
        __asm _emit 0x7d
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x100be9eb
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1B: jmp 0x100bea06
        __asm _emit 0xeb
        __asm _emit 0x1b
        xor ecx, ecx
        test eax, eax
        setg cl
        mov eax, ecx
        ; Exact mapped bytes EB 10: jmp 0x100bea06
        __asm _emit 0xeb
        __asm _emit 0x10
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 09: jmp 0x100bea06
        __asm _emit 0xeb
        __asm _emit 0x09
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B2 04 04 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 54h]
        cmp edx, eax
        ; Exact mapped bytes 75 30: jne 0x100bea48
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, eax
        and ecx, 1f00h
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 0A: jne 0x100bea35
        __asm _emit 0x75
        __asm _emit 0x0a
        and eax, 0e2fdh
        or ah, 2
        ; Exact mapped bytes EB 0F: jmp 0x100bea44
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 0C: jne 0x100bea48
        __asm _emit 0x75
        __asm _emit 0x0c
        and eax, 0e5fah
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x100bea6c
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x100bea67
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x100bea4f
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
