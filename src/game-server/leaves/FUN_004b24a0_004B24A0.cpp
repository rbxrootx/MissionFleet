// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B24A0 .. +0x115 bytes.
extern "C" __declspec(naked) void FUN_004b24a0_004B24A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        ; Exact mapped bytes E8 F5 09 00 00: call 0x4b2ea0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 74 2D: je 0x4b24de
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 6E 68 FF FF: call 0x4a8d40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4b24de
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 D3 00 00 00: jmp 0x4b25b1
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        ; Exact mapped bytes E8 A9 69 FF FF: call 0x4a8ea0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 12: jmp 0x4b2511
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 14h
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 83 94 00 00 00: jae 0x4b25b1
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 1ch]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 7C 42: jl 0x4b2569
        __asm _emit 0x7c
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 1ch]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 7F 37: jg 0x4b2569
        __asm _emit 0x7f
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        sub edx, 1
        shl edx, 4
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        cmp dword ptr [ecx + edx + 4], 0
        ; Exact mapped bytes 74 20: je 0x4b256b
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        sub eax, 1
        shl eax, 4
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [edx + eax + 4]
        ; Exact mapped bytes 0F BE 48 08: movsx ecx, byte ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x4b256b
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 94: jmp 0x4b24ff
        __asm _emit 0xeb
        __asm _emit 0x94
        push 1
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        sub eax, 1
        shl eax, 4
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        add edx, eax
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 07 02 00 00: call 0x4b27b0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        ; Exact mapped bytes E9 4E FF FF FF: jmp 0x4b24ff
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
