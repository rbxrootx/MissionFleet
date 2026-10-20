// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00577E28 .. +0x3DA bytes.
extern "C" __declspec(naked) void FUN_00577e28_00577E28() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5803cch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 184h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 174h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 F2 02 00 00: jne 0x57814b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 174h]
        cmp dword ptr [eax + 9ch], 0
        ; Exact mapped bytes 0F 84 DF 02 00 00: je 0x57814b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 174h]
        mov edx, dword ptr [ecx + 9ch]
        push edx
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 11: jne 0x577e99
        __asm _emit 0x75
        __asm _emit 0x11
        push 2eh
        push 5d1154h
        ; Exact mapped bytes E8 6C CB FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xcb
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x577e99
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x577e82
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 84 93 02 00 00: je 0x578146
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 14000ch
        push 1
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 59 AD F5 FF: call 0x4d2c20
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xad
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 57 B2 F5 FF: call 0x4d3130
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xb2
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 58h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 58: jne 0x577f3a
        __asm _emit 0x75
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 174h]
        cmp dword ptr [ecx + 98h], 0
        ; Exact mapped bytes 74 12: je 0x577f03
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 174h]
        mov eax, dword ptr [edx + 98h]
        push eax
        ; Exact mapped bytes E8 D1 F0 F8 FF: call 0x506fd4
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 174h]
        mov edx, dword ptr [ecx + 9ch]
        push edx
        ; Exact mapped bytes E8 BF F0 F8 FF: call 0x506fd4
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 174h]
        mov dword ptr [eax + 98h], 0
        mov ecx, dword ptr [ebp - 174h]
        mov dword ptr [ecx + 9ch], 0
        ; Exact mapped bytes E9 FA 01 00 00: jmp 0x578134
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 160h]
        push edx
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 8F B0 F5 FF: call 0x4d2fdb
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        mov eax, dword ptr [ebp - 178h]
        mov dword ptr [ebp - 17ch], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 3D 90 FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 10h]
        add eax, edx
        push eax
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 F2 00 00 00: jne 0x57807c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 168h]
        push ecx
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 B0 B0 F5 FF: call 0x4d304c
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        mov edx, dword ptr [ebp - 180h]
        mov dword ptr [ebp - 184h], edx
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 ED 8F FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x8f
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 10h]
        add edx, ecx
        push edx
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        neg eax
        mov byte ptr [ebp - 164h], al
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 168h]
        ; Exact mapped bytes E8 5E 58 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x58
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 164h]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 7F: jne 0x57807c
        __asm _emit 0x75
        __asm _emit 0x7f
        lea ecx, [ebp - 170h]
        push ecx
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 AF B0 F5 FF: call 0x4d30be
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        mov edx, dword ptr [ebp - 188h]
        mov dword ptr [ebp - 18ch], edx
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 7A 8F FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x8f
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 10h]
        add edx, ecx
        push edx
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        neg eax
        mov byte ptr [ebp - 16ch], al
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 170h]
        ; Exact mapped bytes E8 EB 57 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x57
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 16ch]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x57807c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 190h], 0
        ; Exact mapped bytes EB 0A: jmp 0x578086
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 190h], 1
        mov cl, byte ptr [ebp - 190h]
        mov byte ptr [ebp - 15ch], cl
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 160h]
        ; Exact mapped bytes E8 AB 57 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x57
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 15ch]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 59: je 0x57810a
        __asm _emit 0x74
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 174h]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 74 12: je 0x5780d2
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 174h]
        mov edx, dword ptr [ecx + 98h]
        push edx
        ; Exact mapped bytes E8 02 EF F8 FF: call 0x506fd4
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xef
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 174h]
        mov ecx, dword ptr [eax + 9ch]
        push ecx
        ; Exact mapped bytes E8 F0 EE F8 FF: call 0x506fd4
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xee
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 174h]
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 98h], ecx
        mov edx, dword ptr [ebp - 174h]
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [edx + 9ch], ecx
        ; Exact mapped bytes EB 2A: jmp 0x578134
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 58h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 0C: je 0x57811f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes E8 B5 EE F8 FF: call 0x506fd4
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xee
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 58h]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x578134
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        ; Exact mapped bytes E8 A0 EE F8 FF: call 0x506fd4
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xee
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 CA B2 F5 FF: call 0x4d3410
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xb2
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x5781ef
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 14000ch
        push 1
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 C1 AA F5 FF: call 0x4d2c20
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xaa
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 4
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 BF AF F5 FF: call 0x4d3130
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xaf
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 174h]
        cmp dword ptr [edx + 98h], 0
        ; Exact mapped bytes 74 12: je 0x578192
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 174h]
        mov ecx, dword ptr [eax + 98h]
        push ecx
        ; Exact mapped bytes E8 42 EE F8 FF: call 0x506fd4
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xee
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 174h]
        cmp dword ptr [edx + 9ch], 0
        ; Exact mapped bytes 74 12: je 0x5781b3
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 174h]
        mov ecx, dword ptr [eax + 9ch]
        push ecx
        ; Exact mapped bytes E8 21 EE F8 FF: call 0x506fd4
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xee
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 174h]
        mov eax, dword ptr [ebp - 0fch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 98h], ecx
        mov edx, dword ptr [ebp - 174h]
        mov eax, dword ptr [ebp - 0fch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [edx + 9ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 21 B2 F5 FF: call 0x4d3410
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb2
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
