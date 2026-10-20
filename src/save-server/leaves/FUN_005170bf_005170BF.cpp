// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005170BF .. +0x158 bytes.
extern "C" __declspec(naked) void FUN_005170bf_005170BF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DC 02 FC FF: call 0x4d73bf
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x5170f1
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 1D 01 00 00: jmp 0x51720e
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 06: je 0x5170fd
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 75 16: jne 0x517113
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 8]
        and ecx, 8000h
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x517113
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 8], 0f000h
        ; Exact mapped bytes 72 07: jb 0x51711a
        __asm _emit 0x72
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F4 00 00 00: jmp 0x51720e
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 77 59 01 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 66: je 0x517191
        __asm _emit 0x74
        __asm _emit 0x66
        ; Exact mapped bytes 8B 15 D0 6C 68 00: mov edx, dword ptr [0x686cd0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        and edx, 8
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x517149
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        push 674d78h
        ; Exact mapped bytes E8 CF 94 F8 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 14: jne 0x517165
        __asm _emit 0x75
        __asm _emit 0x14
        push 2cah
        push 674cach
        ; Exact mapped bytes E8 E0 1B 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517165
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x517149
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x517191
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 7D: jmp 0x51720e
        __asm _emit 0xeb
        __asm _emit 0x7d
        ; Exact mapped bytes E8 C3 16 FC FF: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x16
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 43: je 0x5171e2
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes A1 D0 6C 68 00: mov eax, dword ptr [0x686cd0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5171bc
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 674da4h
        ; Exact mapped bytes E8 5C 94 F8 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5171e2
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 2C: jmp 0x51720e
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes A1 D0 6C 68 00: mov eax, dword ptr [0x686cd0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x51720c
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 674dc8h
        ; Exact mapped bytes E8 0C 94 F8 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
