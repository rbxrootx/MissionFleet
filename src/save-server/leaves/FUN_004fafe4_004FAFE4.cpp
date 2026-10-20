// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FAFE4 .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_004fafe4_004FAFE4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 379h
        push 674fe8h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 5D F2 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 68h], 1
        ; Exact mapped bytes 7F 14: jg 0x4fb020
        __asm _emit 0x7f
        __asm _emit 0x14
        push 37ah
        push 674fe8h
        ; Exact mapped bytes E8 25 DD 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xdd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fb020
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4fb003
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 28 6E 03 00: call 0x531e5c
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 17 0C 03 00: call 0x52bc57
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        lea edx, [ebp - 8]
        push edx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FA E8 FF FF: call 0x4f994c
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4A 0C 03 00: call 0x52bca3
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 7ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx + 4], edx
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 7ch]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + eax]
        ; Exact mapped bytes 7D 37: jge 0x4fb0b7
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ecx + edx + 4], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F2 B1 FD FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x4fb0b5
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 E0 00 00 00: call dword ptr [edx + 0xe0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 60: jmp 0x4fb117
        __asm _emit 0xeb
        __asm _emit 0x60
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 7ch]
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        imul ecx, ecx, 0ch
        mov esi, dword ptr [ebp - 0ch]
        mov esi, dword ptr [esi + 7ch]
        mov edx, dword ptr [edx + eax + 8]
        add edx, dword ptr [esi + ecx + 8]
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 7ch]
        mov esi, dword ptr [ebp - 4]
        add esi, dword ptr [ecx + eax]
        cmp edx, esi
        ; Exact mapped bytes 7D 24: jge 0x4fb117
        __asm _emit 0x7d
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 93 B1 FD FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x4fb117
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 E0 00 00 00: call dword ptr [edx + 0xe0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
