// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00541ADD .. +0x1B1 bytes.
extern "C" __declspec(naked) void FUN_00541add_00541ADD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 12fh
        push 675764h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 64 87 F9 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x87
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7E 06: jle 0x541b08
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7F 14: jg 0x541b1c
        __asm _emit 0x7f
        __asm _emit 0x14
        push 132h
        push 675764h
        ; Exact mapped bytes E8 29 72 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541b1c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x541afc
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7E 06: jle 0x541b2e
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 7F 14: jg 0x541b42
        __asm _emit 0x7f
        __asm _emit 0x14
        push 133h
        push 675764h
        ; Exact mapped bytes E8 03 72 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541b42
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x541b22
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp + 10h]
        add eax, 7
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7D 14: jge 0x541b67
        __asm _emit 0x7d
        __asm _emit 0x14
        push 138h
        push 675764h
        ; Exact mapped bytes E8 DE 71 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541b67
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x541b48
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp + 14h]
        add edx, 6
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 7D 14: jge 0x541b8c
        __asm _emit 0x7d
        __asm _emit 0x14
        push 139h
        push 675764h
        ; Exact mapped bytes E8 B9 71 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541b8c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x541b6d
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x541c3b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 0ffffh
        shl ecx, 10h
        or eax, ecx
        push eax
        push 0
        push 420h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6C 9A FE FF: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x541be5
        __asm _emit 0x75
        __asm _emit 0x14
        push 13eh
        push 675764h
        ; Exact mapped bytes E8 60 71 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541be5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 BC: jne 0x541ba7
        __asm _emit 0x75
        __asm _emit 0xbc
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        shl ecx, 10h
        or eax, ecx
        push eax
        push 0
        push 41fh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 28 9A FE FF: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x541c29
        __asm _emit 0x75
        __asm _emit 0x14
        push 13fh
        push 675764h
        ; Exact mapped bytes E8 1C 71 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541c29
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 BC: jne 0x541beb
        __asm _emit 0x75
        __asm _emit 0xbc
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 76 A3 FE FF: call 0x52bfaf
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xa3
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 4A: jmp 0x541c85
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 86 FF FE FF: call 0x531bd1
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 90h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edx + 94h], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 61 FF FE FF: call 0x531bd1
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 88h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 8ch], eax
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
