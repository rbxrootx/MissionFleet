// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051B7DB .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_0051b7db_0051B7DB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 28h], ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 38 03 00 00: call 0x51bb24
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 18h
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 02 9B F4 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x9b
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 10h], 0ffffffffh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 78 AA FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xaa
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 20h
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x51b869
        __asm _emit 0x74
        __asm _emit 0x4c
        push 0
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 199h
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], -1
        ; Exact mapped bytes 74 08: je 0x51b847
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x51b84e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 15: je 0x51b869
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 74 0F: je 0x51b869
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 76 08: jbe 0x51b88b
        __asm _emit 0x76
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB 06: jmp 0x51b891
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 10h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ch], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
