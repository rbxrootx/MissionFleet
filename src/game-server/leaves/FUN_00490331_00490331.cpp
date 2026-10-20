// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00490331 .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_00490331_00490331() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 D9 34 0A 00: call 0x533821
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x4903f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 4]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 BB B3 05 00: call 0x4eb727
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb3
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 75 14: jne 0x490389
        __asm _emit 0x75
        __asm _emit 0x14
        push 175h
        push 5ca644h
        ; Exact mapped bytes E8 7C 46 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x46
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x490389
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x49036c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 75 14: jne 0x4903ac
        __asm _emit 0x75
        __asm _emit 0x14
        push 176h
        push 5ca644h
        ; Exact mapped bytes E8 59 46 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x46
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4903ac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x49038f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 2ch
        ; Exact mapped bytes E8 55 5D 0A 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x5d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, 2ch
        ; Exact mapped bytes E8 9A 5B 0A 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x5b
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 2ch
        ; Exact mapped bytes E8 8E 5B 0A 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x5b
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 50h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x49034b
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
