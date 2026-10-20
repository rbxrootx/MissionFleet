// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FB120 .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_004fb120_004FB120() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 392h
        push 674fe8h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 21 F1 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 6ch], 1
        ; Exact mapped bytes 7F 14: jg 0x4fb15c
        __asm _emit 0x7f
        __asm _emit 0x14
        push 393h
        push 674fe8h
        ; Exact mapped bytes E8 E9 DB 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fb15c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4fb13f
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 EC 6C 03 00: call 0x531e5c
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DB 0A 03 00: call 0x52bc57
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BE E7 FF FF: call 0x4f994c
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0E 0B 03 00: call 0x52bca3
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 78h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [eax + ecx + 4], edx
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 78h]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [edx + eax]
        ; Exact mapped bytes 7D 37: jge 0x4fb1f3
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ecx + edx + 4], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B6 B0 FD FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x4fb1f1
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 E4 00 00 00: call dword ptr [edx + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 60: jmp 0x4fb253
        __asm _emit 0xeb
        __asm _emit 0x60
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 78h]
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        imul ecx, ecx, 0ch
        mov esi, dword ptr [ebp - 0ch]
        mov esi, dword ptr [esi + 78h]
        mov edx, dword ptr [edx + eax + 8]
        add edx, dword ptr [esi + ecx + 8]
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 78h]
        mov esi, dword ptr [ebp - 8]
        add esi, dword ptr [ecx + eax]
        cmp edx, esi
        ; Exact mapped bytes 7D 24: jge 0x4fb253
        __asm _emit 0x7d
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 57 B0 FD FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x4fb253
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 E4 00 00 00: call dword ptr [edx + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe4
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
