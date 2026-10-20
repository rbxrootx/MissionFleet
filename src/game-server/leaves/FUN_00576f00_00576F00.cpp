// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00576F00 .. +0x238 bytes.
extern "C" __declspec(naked) void FUN_00576f00_00576F00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x576f23
        __asm _emit 0x75
        __asm _emit 0x11
        push 49h
        push 5d0900h
        ; Exact mapped bytes E8 E2 DA FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xda
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x576f23
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x576f0c
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 11: jne 0x576f42
        __asm _emit 0x75
        __asm _emit 0x11
        push 4ah
        push 5d0900h
        ; Exact mapped bytes E8 C3 DA FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xda
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x576f42
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E1: jne 0x576f29
        __asm _emit 0x75
        __asm _emit 0xe1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 5ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 1C: mov ax, word ptr [edx + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [edx + 5ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 1E: mov dx, word ptr [ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x1e
        cmp eax, edx
        ; Exact mapped bytes 7E 18: jle 0x576f80
        __asm _emit 0x7e
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ecx + 5ch]
        ; Exact mapped bytes 66 8B 4A 1C: mov cx, word ptr [edx + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x1c
        ; Exact mapped bytes 66 89 48 1E: mov word ptr [eax + 0x1e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x1e
        ; Exact mapped bytes E8 7B E5 FB FF: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe5
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 27: jne 0x576fb8
        __asm _emit 0x75
        __asm _emit 0x27
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 1E: jne 0x576fb8
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x577058
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 38h]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x577058
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 5ch]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 68: jne 0x57702e
        __asm _emit 0x75
        __asm _emit 0x68
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 5ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D9 0D 00 00: call 0x577db0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 30: jne 0x57700b
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 0D: je 0x576ff1
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 38h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x57700b
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 03 12 00 00: call 0x578202
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 07: je 0x57700b
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 24 01 00 00: jmp 0x57712f
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 5ch]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 75 15: jne 0x57702e
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 FA BE F5 FF: call 0x4d2f1d
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xbe
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x57702e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x57712f
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D4 D6 FB FF: call 0x53470a
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [edx + 5ch]
        ; Exact mapped bytes 66 89 41 18: mov word ptr [ecx + 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D9 D6 FB FF: call 0x534723
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx]
        mov edx, dword ptr [ecx + 5ch]
        ; Exact mapped bytes 66 89 42 1A: mov word ptr [edx + 0x1a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x1a
        ; Exact mapped bytes EB 42: jmp 0x57709a
        __asm _emit 0xeb
        __asm _emit 0x42
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AA D6 FB FF: call 0x53470a
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xd6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [edx + 5ch]
        ; Exact mapped bytes 66 89 41 18: mov word ptr [ecx + 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AF D6 FB FF: call 0x534723
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx]
        mov edx, dword ptr [ecx + 5ch]
        ; Exact mapped bytes 66 89 42 1A: mov word ptr [edx + 0x1a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 74 11 00 00: call 0x578202
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 07: je 0x57709a
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x57712f
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 11: jne 0x5770b3
        __asm _emit 0x75
        __asm _emit 0x11
        push 79h
        push 5d0900h
        ; Exact mapped bytes E8 52 D9 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xd9
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5770b3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E1: jne 0x57709a
        __asm _emit 0x75
        __asm _emit 0xe1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 5ch]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 11: jne 0x5770d8
        __asm _emit 0x75
        __asm _emit 0x11
        push 7ah
        push 5d0900h
        ; Exact mapped bytes E8 2D D9 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xd9
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5770d8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x5770b9
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 5ch]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 04: jne 0x5770f0
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3F: jmp 0x57712f
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [edx + 18h], ecx
        push 0f044h
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1ch
        ; Exact mapped bytes E8 71 3A F8 FF: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x3a
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x577124
        __asm _emit 0x75
        __asm _emit 0x11
        push 7fh
        push 5d0900h
        ; Exact mapped bytes E8 E1 D8 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xd8
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x577124
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5770ff
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, 1
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
