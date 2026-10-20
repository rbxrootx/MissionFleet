// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E2268 .. +0xDB bytes.
extern "C" __declspec(naked) void FUN_004e2268_004E2268() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0ech
        push 5c7a18h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 D9 8E 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4e22a1
        __asm _emit 0x7d
        __asm _emit 0x14
        push 0edh
        push 5c7a18h
        ; Exact mapped bytes E8 64 27 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e22a1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e2287
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4e22c1
        __asm _emit 0x7d
        __asm _emit 0x14
        push 0eeh
        push 5c7a18h
        ; Exact mapped bytes E8 44 27 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e22c1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4e22a7
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        cmp eax, dword ptr [ecx + 8]
        ; Exact mapped bytes 7E 14: jle 0x4e22e9
        __asm _emit 0x7e
        __asm _emit 0x14
        push 0efh
        push 5c7a18h
        ; Exact mapped bytes E8 1C 27 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e22e9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4e22c7
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        sub edx, eax
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 25: je 0x4e232b
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        add eax, ecx
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 68 A5 FC FF: call 0x4ac890
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xa5
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        sub ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], ecx
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
