// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586DE510 .. +0x26D bytes.
extern "C" __declspec(naked) void FUN_586de510_586DE510() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 04: or cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 178h], 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1E 76 FF FF: call 0x586d5b90
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 180h]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 58 79 DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x79
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 184h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 42 79 DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x79
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4b0h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DC 79 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x79
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4b4h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C6 79 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x79
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4b8h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B0 79 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x79
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4bch]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9A 79 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x79
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4a4h]
        mov dword ptr [ebp - 24h], edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D4 78 DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x78
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4a8h]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 BE 78 DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x78
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4fch]
        mov dword ptr [ebp - 30h], eax
        push 588b2798h
        ; Exact mapped bytes E8 B8 39 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x39
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A6 A9 06 00: call 0x58748ff0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xa9
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 4fch]
        ; Exact mapped bytes E8 C8 A7 06 00: call 0x58748e20
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa7
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586de66b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 1D: jge 0x586de68e
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 608h]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 05 79 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x79
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586de662
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586de6a0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 1D: jge 0x586de6c3
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 600h]
        mov dword ptr [ebp - 38h], ecx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D0 78 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x78
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586de697
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586de6d5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 1D: jge 0x586de6f8
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 610h]
        mov dword ptr [ebp - 3ch], edx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 9B 78 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x78
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586de6cc
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586de70a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 1D: jge 0x586de72d
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 618h]
        mov dword ptr [ebp - 40h], eax
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 66 78 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x78
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586de701
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586de73f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 4
        ; Exact mapped bytes 7D 1D: jge 0x586de762
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 624h]
        mov dword ptr [ebp - 44h], ecx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 31 78 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x78
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586de736
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 634h]
        mov dword ptr [ebp - 48h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 18 78 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x78
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
