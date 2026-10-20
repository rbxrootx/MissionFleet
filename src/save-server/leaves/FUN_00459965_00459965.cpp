// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00459965 .. +0x275 bytes.
extern "C" __declspec(naked) void FUN_00459965_00459965() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 0A: jne 0x459983
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 4E 02 00 00: jmp 0x459bd1
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        cmp edx, ecx
        ; Exact mapped bytes 74 07: je 0x45999e
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 33 02 00 00: jmp 0x459bd1
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 11h
        ; Exact mapped bytes 0F 87 C1 01 00 00: ja 0x459b74
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 8D DA 9B 45 00: jmp dword ptr [ecx*4 + 0x459bda]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xda
        __asm _emit 0x9b
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 0A 02 00 00: jmp 0x459bd1
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BF 42 08: movsx eax, word ptr [edx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 51 08: movsx edx, word ptr [ecx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x08
        xor ecx, ecx
        cmp eax, edx
        sete cl
        mov eax, ecx
        ; Exact mapped bytes E9 EE 01 00 00: jmp 0x459bd1
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx + 8]
        xor ecx, ecx
        cmp eax, edx
        sete cl
        mov eax, ecx
        ; Exact mapped bytes E9 D0 01 00 00: jmp 0x459bd1
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BF 42 08: movsx eax, word ptr [edx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 51 08: movsx edx, word ptr [ecx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x08
        xor ecx, ecx
        cmp eax, edx
        sete cl
        mov eax, ecx
        ; Exact mapped bytes E9 B4 01 00 00: jmp 0x459bd1
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        xor edx, edx
        cmp ecx, dword ptr [eax + 8]
        sete dl
        mov eax, edx
        ; Exact mapped bytes E9 9C 01 00 00: jmp 0x459bd1
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0ch]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 75 17: jne 0x459a5a
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 75 09: jne 0x459a5a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x459a61
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E9 68 01 00 00: jmp 0x459bd1
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes D9 40 08: fld dword ptr [eax + 8]
        __asm _emit 0xd9
        __asm _emit 0x40
        __asm _emit 0x08
        ; Exact mapped bytes D8 59 08: fcomp dword ptr [ecx + 8]
        __asm _emit 0xd8
        __asm _emit 0x59
        __asm _emit 0x08
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 40h
        ; Exact mapped bytes 74 09: je 0x459a85
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 07: jmp 0x459a8c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes E9 3D 01 00 00: jmp 0x459bd1
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes DD 42 08: fld qword ptr [edx + 8]
        __asm _emit 0xdd
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes DC 58 08: fcomp qword ptr [eax + 8]
        __asm _emit 0xdc
        __asm _emit 0x58
        __asm _emit 0x08
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 40h
        ; Exact mapped bytes 74 09: je 0x459ab0
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 07: jmp 0x459ab7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes E9 12 01 00 00: jmp 0x459bd1
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes DD 41 08: fld qword ptr [ecx + 8]
        __asm _emit 0xdd
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes DC 5A 08: fcomp qword ptr [edx + 8]
        __asm _emit 0xdc
        __asm _emit 0x5a
        __asm _emit 0x08
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 40h
        ; Exact mapped bytes 74 09: je 0x459adb
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes EB 07: jmp 0x459ae2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x459bd1
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 4C BB 68 00: call dword ptr [0x68bb4c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 4C BB 68 00: call dword ptr [0x68bb4c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 75 31: jne 0x459b3b
        __asm _emit 0x75
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 4C BB 68 00: call dword ptr [0x68bb4c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 A5 03 01 00: call 0x469ed0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x459b3b
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 07: jmp 0x459b42
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x459bd1
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        xor ecx, ecx
        cmp eax, dword ptr [edx + 8]
        sete cl
        mov eax, ecx
        ; Exact mapped bytes EB 72: jmp 0x459bd1
        __asm _emit 0xeb
        __asm _emit 0x72
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        xor edx, edx
        cmp ecx, dword ptr [eax + 8]
        sete dl
        mov eax, edx
        ; Exact mapped bytes EB 5D: jmp 0x459bd1
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        and ecx, 2000h
        test ecx, ecx
        ; Exact mapped bytes 74 26: je 0x459bac
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        and eax, 4000h
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x459bac
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes E8 FC F2 FF FF: call 0x458ea6
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 25: jmp 0x459bd1
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x459bc9
        __asm _emit 0x74
        __asm _emit 0x14
        push 19ah
        push 678664h
        ; Exact mapped bytes E8 7C F1 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf1
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x459bc9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x459bac
        __asm _emit 0x75
        __asm _emit 0xdd
        xor eax, eax
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
