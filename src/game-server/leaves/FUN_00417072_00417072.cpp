// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417072 .. +0x191 bytes.
extern "C" __declspec(naked) void FUN_00417072_00417072() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x4170a2
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 51 01 00 00: jmp 0x4171f3
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 0ch], 31h
        mov dword ptr [ebp - 10h], 0
        lea ecx, [ebp - 0ch]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes E8 BD ED FF FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x417100
        __asm _emit 0x74
        __asm _emit 0x26
        mov dword ptr [ebp - 14h], 4
        mov dword ptr [ebp - 18h], 0
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes E8 97 ED FF FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x417107
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 EC 00 00 00: jmp 0x4171f3
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [edx + eax*4 + 78h], -1
        ; Exact mapped bytes 75 1D: jne 0x417137
        __asm _emit 0x75
        __asm _emit 0x1d
        push 1
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E3 F9 FF FF: call 0x416b13
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x4171f3
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4 + 78h]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 1D: je 0x417169
        __asm _emit 0x74
        __asm _emit 0x1d
        push 1
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B1 F9 FF FF: call 0x416b13
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x4171f3
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 86 00 00 00: call 0x417203
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 10h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 0ch]
        shl ecx, 10h
        mov edx, dword ptr [ebp - 1ch]
        or ecx, dword ptr [edx + 10h]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 14h], ecx
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 18h], 1
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 18h]
        shl ecx, 10h
        mov edx, dword ptr [ebp - 1ch]
        or ecx, dword ptr [edx + 1ch]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 20h], ecx
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 20h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        push 8002f002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 44 00 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, 1
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 E3 15 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x15
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
