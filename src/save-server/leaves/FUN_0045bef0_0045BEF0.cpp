// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045BEF0 .. +0x1A6 bytes.
extern "C" __declspec(naked) void FUN_0045bef0_0045BEF0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e9a3h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 30h
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 42 0A 07 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x0a
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 65 8E 0C 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 09: jne 0x45bf57
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 36: jmp 0x45bf8d
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 2A A0 00 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], esp
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes E8 66 16 FF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 15 48 BB 68 00: call dword ptr [0x68bb48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 8D B0 00 00 00: jge 0x45c060
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 80020005h
        ; Exact mapped bytes 75 3B: jne 0x45bff4
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ecx], 0
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 DC F2 0E 00: call 0x54b2b2
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 00 09 07 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x45c083
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 8002000ah
        ; Exact mapped bytes 75 38: jne 0x45c035
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [edx + 4], 80000000h
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [eax], 0
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 98 F2 0E 00: call 0x54b2b2
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 BC 08 07 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes EB 4E: jmp 0x45c083
        __asm _emit 0xeb
        __asm _emit 0x4e
        push 67872ch
        push 678758h
        ; Exact mapped bytes E8 D1 45 04 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x45
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 8
        cmp dword ptr [ebp - 18h], 8007000eh
        ; Exact mapped bytes 75 07: jne 0x45c057
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 87 6E 04 00: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x45c060
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 9A FE 0E 00: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0x0e
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 48 F2 0E 00: call 0x54b2b2
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 6C 08 07 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        lea esp, [ebp - 3ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
