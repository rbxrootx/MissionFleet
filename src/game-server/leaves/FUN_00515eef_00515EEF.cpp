// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00515EEF .. +0x148 bytes.
extern "C" __declspec(naked) void FUN_00515eef_00515EEF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 14h], ecx
        push 1ach
        push 5c8b74h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 55 52 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        sub edx, 2bh
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0e6h
        ; Exact mapped bytes 0F 87 F0 00 00 00: ja 0x516017
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        xor eax, eax
        mov al, byte ptr [ecx + 51603fh]
        ; Exact mapped bytes FF 24 85 37 60 51 00: jmp dword ptr [eax*4 + 0x516037]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x60
        __asm _emit 0x51
        __asm _emit 0x00
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 A4 00 00 00: call dword ptr [edx + 0xa4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x515f63
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x516031
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FD 5B 02 00: call 0x53bb74
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5B 5C 02 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 4eh
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x516012
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 8], 0fffffdf8h
        ; Exact mapped bytes 74 0C: je 0x515fa9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 8], 0fffffdeeh
        ; Exact mapped bytes 75 69: jne 0x516012
        __asm _emit 0x75
        __asm _emit 0x69
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 8], 0fffffdf8h
        ; Exact mapped bytes 75 16: jne 0x515fd7
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 31: je 0x515ffb
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x515ffb
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 8], 0fffffdeeh
        ; Exact mapped bytes 75 2F: jne 0x516012
        __asm _emit 0x75
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 0F: je 0x515ffb
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 75 17: jne 0x516012
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 87 DB FD FF: call 0x4f3b96
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 1A: jmp 0x516031
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6B DB FD FF: call 0x4f3b96
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
