// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00510783 .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_00510783_00510783() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 172h
        push 5c84b0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 BE A9 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        push 173h
        push 5c84b0h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 AB A9 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 1C 26 5E 00: call dword ptr [0x5e261c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0F C8 02 00: call 0x53cfe5
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x51088c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0e900h
        ; Exact mapped bytes 0F 82 A1 00 00 00: jb 0x51088c
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0e9ffh
        ; Exact mapped bytes 0F 87 94 00 00 00: ja 0x51088c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 11: je 0x51080f
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        sub edx, 0e900h
        shr edx, 4
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], edx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 16: je 0x51082b
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        sub eax, 0e900h
        xor edx, edx
        mov ecx, 10h
        div ecx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 21: je 0x510852
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [edx + 68h]
        ; Exact mapped bytes 7C 14: jl 0x510852
        __asm _emit 0x7c
        __asm _emit 0x14
        push 17ch
        push 5c84b0h
        ; Exact mapped bytes E8 B3 41 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x510852
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x51082b
        __asm _emit 0x75
        __asm _emit 0xd3
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 21: je 0x51087f
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx]
        cmp ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes 7C 14: jl 0x51087f
        __asm _emit 0x7c
        __asm _emit 0x14
        push 17dh
        push 5c84b0h
        ; Exact mapped bytes E8 86 41 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51087f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x510858
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, 1
        ; Exact mapped bytes EB 20: jmp 0x5108ac
        __asm _emit 0xeb
        __asm _emit 0x20
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x51089b
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], 0ffffffffh
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 09: je 0x5108aa
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], 0ffffffffh
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
