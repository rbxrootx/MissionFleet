// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FFAC7 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_004ffac7_004FFAC7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4ffaed
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c0h
        push 6756ach
        ; Exact mapped bytes E8 58 92 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ffaed
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4ffad3
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ecx + 64h]
        and esi, 0ff00h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 87 67 FD FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x67
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 10000000h
        or esi, eax
        mov dword ptr [ebp - 4], esi
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        and eax, 3
        test eax, eax
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x4ffc18
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 60h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 3C: je 0x4ffb72
        __asm _emit 0x74
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 60h]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4ffb57
        __asm _emit 0x74
        __asm _emit 0x14
        push 2cch
        push 6756ach
        ; Exact mapped bytes E8 EE 91 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ffb57
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D9: jne 0x4ffb36
        __asm _emit 0x75
        __asm _emit 0xd9
        mov eax, dword ptr [ebp - 4]
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4ffb70
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 80h
        ; Exact mapped bytes EB 3B: jmp 0x4ffbad
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 60h]
        and edx, 2
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x4ffb93
        __asm _emit 0x75
        __asm _emit 0x14
        push 2d2h
        push 6756ach
        ; Exact mapped bytes E8 B2 91 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ffb93
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4ffb72
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 4]
        and ecx, 10000000h
        test ecx, ecx
        ; Exact mapped bytes 75 07: jne 0x4ffbad
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 40h
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 57: je 0x4ffc0a
        __asm _emit 0x74
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 4]
        xor edx, 10000000h
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 41: je 0x4ffc08
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 60h]
        and edx, 0fffffffch
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 60h], edx
        mov ecx, dword ptr [ebp - 8]
        or ecx, 2
        or ecx, 1
        or ecx, 4
        or ecx, 10h
        push ecx
        push 0
        push 0
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 15 A4 BE 68 00: call dword ptr [0x68bea4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 0E: jmp 0x4ffc18
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        and al, 0fch
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 60h], eax
        mov eax, dword ptr [ebp - 4]
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
