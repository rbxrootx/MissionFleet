// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F1F4A .. +0xD7 bytes.
extern "C" __declspec(naked) void _OnCloseDocument_CDocument__UAEXXZ_004F1F4A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 48h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 48h], 0
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 28h
        ; Exact mapped bytes E8 D9 49 03 00: call 0x52694a
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 60: jne 0x4f1fd5
        __asm _emit 0x75
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 28h
        ; Exact mapped bytes E8 E3 49 03 00: call 0x526963
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        push 319h
        push 678234h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 C8 82 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D2 0A FE FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 31bh
        push 678234h
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 AA 82 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 9C 00 00 00: call dword ptr [edx + 0x9c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        ; Exact mapped bytes EB 91: jmp 0x4f1f66
        __asm _emit 0xeb
        __asm _emit 0x91
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 48h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 50 74: call dword ptr [eax + 0x74]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 48h], 0
        ; Exact mapped bytes 74 2B: je 0x4f201d
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 12: je 0x4f2016
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4f201d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
