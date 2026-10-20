// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004121BC .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_004121bc_004121BC() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        cmp dword ptr [esi + 4], 0
        lea edi, [esi + 4]
        ; Exact mapped bytes 0F 85 A4 00 00 00: jne 0x412272
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        push 4359afh
        mov ecx, 44dc10h
        ; Exact mapped bytes E8 6A 4C 02 00: call 0x436e48
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fh
        mov ebx, eax
        ; Exact mapped bytes E8 BC 4D 02 00: call 0x436fa3
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebx + 4], 0
        lea ebp, [ebx + 4]
        ; Exact mapped bytes 75 1E: jne 0x41220e
        __asm _emit 0x75
        __asm _emit 0x1e
        push ebp
        ; Exact mapped bytes E8 AA A3 01 00: call 0x42c5a0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x41220e
        __asm _emit 0x75
        __asm _emit 0x0c
        push 0fh
        ; Exact mapped bytes E8 0A 4E 02 00: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 13 AB 01 00: call 0x42cd21
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        push edi
        push dword ptr [ebp]
        ; Exact mapped bytes E8 83 A3 01 00: call 0x42c59a
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        mov ebp, eax
        mov eax, dword ptr [esi]
        push ebp
        mov ecx, esi
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x412234
        __asm _emit 0x75
        __asm _emit 0x0f
        push 0fh
        ; Exact mapped bytes E8 E7 4D 02 00: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        push ebp
        mov ecx, esi
        ; Exact mapped bytes FF 50 24: call dword ptr [eax + 0x24]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x24
        inc dword ptr [ebx + 8]
        push 0fh
        ; Exact mapped bytes E8 D5 4D 02 00: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        push dword ptr [esi + 54h]
        push 67h
        push dword ptr [edi]
        ; Exact mapped bytes E8 4A A3 01 00: call 0x42c594
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [esi + 3ch], 0
        push 1
        pop ebx
        pop ebp
        ; Exact mapped bytes 75 0A: jne 0x41225e
        __asm _emit 0x75
        __asm _emit 0x0a
        push ebx
        push 65h
        push dword ptr [edi]
        ; Exact mapped bytes E8 36 A3 01 00: call 0x42c594
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        test byte ptr [esp + 10h], 4
        ; Exact mapped bytes 74 0D: je 0x412272
        __asm _emit 0x74
        __asm _emit 0x0d
        push ebx
        push 6eh
        push dword ptr [edi]
        ; Exact mapped bytes E8 25 A3 01 00: call 0x42c594
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi + 0ch], ebx
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
