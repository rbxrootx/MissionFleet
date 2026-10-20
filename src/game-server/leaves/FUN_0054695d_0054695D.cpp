// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054695D .. +0x1B1 bytes.
extern "C" __declspec(naked) void FUN_0054695d_0054695D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 12fh
        push 5c8c2ch
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 E4 47 FB FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x47
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7E 06: jle 0x546988
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7F 14: jg 0x54699c
        __asm _emit 0x7f
        __asm _emit 0x14
        push 132h
        push 5c8c2ch
        ; Exact mapped bytes E8 69 E0 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54699c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x54697c
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7E 06: jle 0x5469ae
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 7F 14: jg 0x5469c2
        __asm _emit 0x7f
        __asm _emit 0x14
        push 133h
        push 5c8c2ch
        ; Exact mapped bytes E8 43 E0 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5469c2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x5469a2
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp + 10h]
        add eax, 7
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7D 14: jge 0x5469e7
        __asm _emit 0x7d
        __asm _emit 0x14
        push 138h
        push 5c8c2ch
        ; Exact mapped bytes E8 1E E0 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5469e7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x5469c8
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp + 14h]
        add edx, 6
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 7D 14: jge 0x546a0c
        __asm _emit 0x7d
        __asm _emit 0x14
        push 139h
        push 5c8c2ch
        ; Exact mapped bytes E8 F9 DF FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x546a0c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x5469ed
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x546abb
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
        ; Exact mapped bytes E8 8C 51 FF FF: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x546a65
        __asm _emit 0x75
        __asm _emit 0x14
        push 13eh
        push 5c8c2ch
        ; Exact mapped bytes E8 A0 DF FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x546a65
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 BC: jne 0x546a27
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
        ; Exact mapped bytes E8 48 51 FF FF: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x546aa9
        __asm _emit 0x75
        __asm _emit 0x14
        push 13fh
        push 5c8c2ch
        ; Exact mapped bytes E8 5C DF FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x546aa9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 BC: jne 0x546a6b
        __asm _emit 0x75
        __asm _emit 0xbc
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 96 5A FF FF: call 0x53c54f
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 4A: jmp 0x546b05
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 96 EB FE FF: call 0x535661
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xeb
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
        ; Exact mapped bytes E8 71 EB FE FF: call 0x535661
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xeb
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
