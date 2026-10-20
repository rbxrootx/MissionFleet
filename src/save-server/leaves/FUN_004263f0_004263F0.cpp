// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004263F0 .. +0x1A7 bytes.
extern "C" __declspec(naked) void FUN_004263f0_004263F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 4ch]
        mov ecx, 13h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 18: je 0x42642b
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 8]
        push eax
        push 63310ch
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 7E B7 07 00: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xb7
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 10h], eax
        push 217bch
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 79 F4 03 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x42645c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 64h
        ; Exact mapped bytes 73 5F: jae 0x4264c1
        __asm _emit 0x73
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + eax*4 + 94h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 37ch
        mov dword ptr [edx + eax + 2e4h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 278h]
        or ecx, 0fffffffeh
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [eax + edx + 278h], ecx
        ; Exact mapped bytes EB 92: jmp 0x426453
        __asm _emit 0xeb
        __asm _emit 0x92
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x4264d3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 32h
        ; Exact mapped bytes 0F 83 95 00 00 00: jae 0x426572
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + ecx*4 + 16b14h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 370h
        mov dword ptr [eax + ecx + 16bdch], 1
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x42651d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 7D 4A: jge 0x42656d
        __asm _emit 0x7d
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + ecx*4 + 2f0h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + eax*4 + 270h], 0ffffffffh
        ; Exact mapped bytes EB A7: jmp 0x426514
        __asm _emit 0xeb
        __asm _emit 0xa7
        ; Exact mapped bytes E9 58 FF FF FF: jmp 0x4264ca
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        add edx, 78h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 94 AB FD FF: call 0x401118
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 4ch
        cmp ebp, esp
        ; Exact mapped bytes E8 5F E8 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
