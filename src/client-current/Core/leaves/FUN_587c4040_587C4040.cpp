// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4040 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_587c4040_587C4040() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be438h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 6ch], 0
        ; Exact mapped bytes 74 21: je 0x587c407c
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 C5 CF 06 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xcf
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8ch], 0
        ; Exact mapped bytes 74 39: je 0x587c40c1
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 13: je 0x587c40ad
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x587c40b4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 74 39: je 0x587c4106
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 13: je 0x587c40f2
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x587c40f9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 88h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 42 EA CB FF: call 0x58482b50
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xea
        __asm _emit 0xcb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
