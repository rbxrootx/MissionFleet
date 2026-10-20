// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054F034 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_0054f034_0054F034() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 184h
        push 67bee8h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 0D B2 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x54f070
        __asm _emit 0x75
        __asm _emit 0x14
        push 185h
        push 67bee8h
        ; Exact mapped bytes E8 D5 9C FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54f070
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x54f053
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 02: jne 0x54f07e
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 7F: jmp 0x54f0fd
        __asm _emit 0xeb
        __asm _emit 0x7f
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 D9 43 F5 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x43
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54f0a5
        __asm _emit 0x75
        __asm _emit 0x14
        push 18ah
        push 67bee8h
        ; Exact mapped bytes E8 A0 9C FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54f0a5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x54f07e
        __asm _emit 0x75
        __asm _emit 0xd3
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 10h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 09: je 0x54f0db
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 B8 F3 FF FF: call 0x54e493
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 14: je 0x54f0f7
        __asm _emit 0x74
        __asm _emit 0x14
        push 193h
        push 67bee8h
        ; Exact mapped bytes E8 4E 9C FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54f0f7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x54f0db
        __asm _emit 0x75
        __asm _emit 0xde
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
