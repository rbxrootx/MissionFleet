// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050F122 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_0050f122_0050F122() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 76 14: jbe 0x50f145
        __asm _emit 0x76
        __asm _emit 0x14
        push 240h
        push 5c68bch
        ; Exact mapped bytes E8 C0 58 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50f145
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x50f129
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 35: jne 0x50f188
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 77 08: ja 0x50f163
        __asm _emit 0x77
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 14h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 25: jae 0x50f188
        __asm _emit 0x73
        __asm _emit 0x25
        push -0ch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 5c6af4h
        ; Exact mapped bytes E8 92 0A FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x0a
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 30: jmp 0x50f1b8
        __asm _emit 0xeb
        __asm _emit 0x30
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        push 407h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        push edx
        push 1
        push 407h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
