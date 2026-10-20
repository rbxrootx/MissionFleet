// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E97AB .. +0x126 bytes.
extern "C" __declspec(naked) void FUN_004e97ab_004E97AB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 6A FF FF FF: call 0x4e972e
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 75 37: jne 0x4e9804
        __asm _emit 0x75
        __asm _emit 0x37
        mov ecx, 1
        sub ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 4D FF FF FF: call 0x4e972e
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 75 14: jne 0x4e97fe
        __asm _emit 0x75
        __asm _emit 0x14
        push 0e8h
        push 674180h
        ; Exact mapped bytes E8 47 F5 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e97fe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4e97e4
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        imul edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        add eax, edx
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 0C: jne 0x4e982b
        __asm _emit 0x75
        __asm _emit 0x0c
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1E 3A FE FF: call 0x4cd247
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 0F: jmp 0x4e983a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 0D 3A FE FF: call 0x4cd247
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x4e98c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x4e985e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fbh
        push 674180h
        ; Exact mapped bytes E8 E7 F4 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e985e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4e9844
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CA 06 00 00: call 0x4e9f40
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 09: je 0x4e9884
        __asm _emit 0x74
        __asm _emit 0x09
        push 0
        push 3
        ; Exact mapped bytes E8 A5 22 00 00: call 0x4ebb29
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3B: je 0x4e98c5
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 27 B4 03 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 C7 04 50 00 00: mov word ptr [eax + edx*2], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 40 B4 03 00: call 0x524cf1
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3B 33 FE FF: call 0x4ccbf8
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AC 2D FE FF: call 0x4cc671
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
