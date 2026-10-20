// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004051E0 .. +0x17B bytes.
extern "C" __declspec(naked) void FUN_004051e0_004051E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 3F 01 00 00: je 0x405346
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + 8]
        ; Exact mapped bytes 7D 61: jge 0x405279
        __asm _emit 0x7d
        __asm _emit 0x61
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 25: jne 0x405243
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov edx, dword ptr [ebp + 8]
        mov dl, byte ptr [edx]
        mov byte ptr [ecx + eax], dl
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 2C: jmp 0x40526f
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 0ch]
        push eax
        ; Exact mapped bytes E8 A3 00 06 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], eax
        mov eax, 1
        ; Exact mapped bytes E9 CF 00 00 00: jmp 0x405348
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes 0F BF 15 FC 80 65 00: movsx edx, word ptr [0x6580fc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x80
        __asm _emit 0x65
        __asm _emit 0x00
        add edx, 15h
        push edx
        push 65808ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes E8 2F 6E 0C 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x6e
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 39 00 06 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 CD 71 0C 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x71
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 4], eax
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 25: jne 0x405313
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov eax, dword ptr [ebp + 8]
        mov al, byte ptr [eax]
        mov byte ptr [edx + ecx], al
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 2C: jmp 0x40533f
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 0ch]
        push ecx
        ; Exact mapped bytes E8 D3 FF 05 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], ecx
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x405348
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 9B FA 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xfa
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
