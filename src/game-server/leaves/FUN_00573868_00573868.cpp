// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00573868 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_00573868_00573868() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 38: call dword ptr [edx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x38
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x573897
        __asm _emit 0x75
        __asm _emit 0x14
        push 15ch
        push 5cbcc4h
        ; Exact mapped bytes E8 6E 11 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x573897
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x573874
        __asm _emit 0x75
        __asm _emit 0xd7
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 5B 24 00 00: call 0x575d00
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 1F: je 0x5738cd
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 74 14: je 0x5738cd
        __asm _emit 0x74
        __asm _emit 0x14
        push 163h
        push 5cbcc4h
        ; Exact mapped bytes E8 38 11 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5738cd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x5738a5
        __asm _emit 0x75
        __asm _emit 0xd2
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x5738da
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x5738d3
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], edx
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 10h
        ; Exact mapped bytes E8 28 24 00 00: call 0x575d20
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
