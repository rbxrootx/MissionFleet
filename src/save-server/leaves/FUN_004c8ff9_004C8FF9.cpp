// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C8FF9 .. +0x165 bytes.
extern "C" __declspec(naked) void FUN_004c8ff9_004C8FF9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 111h
        push 67490ch
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 48 12 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4c9035
        __asm _emit 0x75
        __asm _emit 0x14
        push 112h
        push 67490ch
        ; Exact mapped bytes E8 10 FD 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c9035
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4c9018
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4c905d
        __asm _emit 0x75
        __asm _emit 0x14
        push 115h
        push 67490ch
        ; Exact mapped bytes E8 E8 FC 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c905d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4c9043
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 56: jne 0x4c90bf
        __asm _emit 0x75
        __asm _emit 0x56
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4c907b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 73 19: jae 0x4c909f
        __asm _emit 0x73
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 02: je 0x4c909d
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4c909f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D3: jmp 0x4c9072
        __asm _emit 0xeb
        __asm _emit 0xd3
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4c90b9
        __asm _emit 0x75
        __asm _emit 0x14
        push 11dh
        push 67490ch
        ; Exact mapped bytes E8 8C FC 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c90b9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4c909f
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        push 10h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 9A A3 FD FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa3
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c90e4
        __asm _emit 0x75
        __asm _emit 0x14
        push 121h
        push 67490ch
        ; Exact mapped bytes E8 61 FC 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c90e4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4c90bf
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 3B: jne 0x4c9133
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 09: jmp 0x4c910f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 73 19: jae 0x4c9133
        __asm _emit 0x73
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 02: je 0x4c9131
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4c9133
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D3: jmp 0x4c9106
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 8
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 9C 39 00 00: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [eax], edx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
