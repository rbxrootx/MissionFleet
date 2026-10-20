// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58598A30 .. +0x117 bytes.
extern "C" __declspec(naked) void FUN_58598a30_58598A30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 100h], 40000000h
        ; Exact mapped bytes 0F 85 F7 00 00 00: jne 0x58598b43
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0fch], 64h
        ; Exact mapped bytes 75 67: jne 0x58598abf
        __asm _emit 0x75
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 508h]
        ; Exact mapped bytes E8 6A D5 F2 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xd5
        __asm _emit 0xf2
        __asm _emit 0xff
        cmp dword ptr [eax], 100h
        ; Exact mapped bytes 75 4C: jne 0x58598aba
        __asm _emit 0x75
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A F1 FF FF: call 0x58597b90
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 100h], 0
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 D3 EE FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xd3
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4f4h]
        mov dword ptr [ebp - 8], edx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3D D4 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4f8h]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 27 D4 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd4
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x58598b43
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0fch], 0c8h
        ; Exact mapped bytes 75 75: jne 0x58598b43
        __asm _emit 0x75
        __asm _emit 0x75
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 508h]
        ; Exact mapped bytes E8 F4 D4 F2 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xd4
        __asm _emit 0xf2
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 62: jne 0x58598b43
        __asm _emit 0x75
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 F0 FF FF: call 0x58597b90
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 100h], 0
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E0 D2 EE FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd2
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4f8h]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CA D3 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xd3
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 508h]
        mov dword ptr [ebp - 14h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B4 D3 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd3
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50ch]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9E D3 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xd3
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
