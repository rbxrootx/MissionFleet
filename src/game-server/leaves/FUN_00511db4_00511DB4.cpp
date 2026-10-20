// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00511DB4 .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_00511db4_00511DB4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 379h
        push 5c84b0h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 8D 93 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 68h], 1
        ; Exact mapped bytes 7F 14: jg 0x511df0
        __asm _emit 0x7f
        __asm _emit 0x14
        push 37ah
        push 5c84b0h
        ; Exact mapped bytes E8 15 2C 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x511df0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x511dd3
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 65 3B 02 00: call 0x535969
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E7 A3 02 00: call 0x53c1f7
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa3
        __asm _emit 0x02
        __asm _emit 0x00
        lea edx, [ebp - 8]
        push edx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FA E8 FF FF: call 0x51071c
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1A A4 02 00: call 0x53c243
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xa4
        __asm _emit 0x02
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
        ; Exact mapped bytes 7D 37: jge 0x511e87
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ecx + edx + 4], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 92 CF FD FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x511e85
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
        ; Exact mapped bytes EB 60: jmp 0x511ee7
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
        ; Exact mapped bytes 7D 24: jge 0x511ee7
        __asm _emit 0x7d
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 33 CF FD FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x511ee7
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
