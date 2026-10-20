// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00504141 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_00504141_00504141() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x504162
        __asm _emit 0x75
        __asm _emit 0x11
        push 65h
        push 677834h
        ; Exact mapped bytes E8 E3 4B 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504162
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x50414b
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x50417f
        __asm _emit 0x75
        __asm _emit 0x11
        push 66h
        push 677834h
        ; Exact mapped bytes E8 C6 4B 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50417f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x504168
        __asm _emit 0x75
        __asm _emit 0xe3
        push 1
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 D2 F2 F9 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf2
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5041a9
        __asm _emit 0x75
        __asm _emit 0x11
        push 68h
        push 677834h
        ; Exact mapped bytes E8 9C 4B 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5041a9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x504185
        __asm _emit 0x75
        __asm _emit 0xd6
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 A8 F2 F9 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf2
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5041d3
        __asm _emit 0x75
        __asm _emit 0x11
        push 69h
        push 677834h
        ; Exact mapped bytes E8 72 4B 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5041d3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x5041af
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp + 10h]
        mov esi, dword ptr [ebp + 0ch]
        mov edi, dword ptr [ebp + 8]
        mov edx, ecx
        mov eax, edi
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
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
