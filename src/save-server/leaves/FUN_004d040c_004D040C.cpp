// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D040C .. +0x12E bytes.
extern "C" __declspec(naked) void FUN_004d040c_004D040C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 24h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp + 28h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp + 2ch]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes E8 24 16 06 00: call 0x531a7d
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x16
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp + 30h]
        mov dword ptr [ebp - 34h], ecx
        lea edx, [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x4d048a
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 38h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 92 AC 00 00 00: call dword ptr [edx + 0xac]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x4d0531
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 CC FD FF FF: call 0x4d025f
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 0C BF 68 00: call dword ptr [0x68bf0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4d04e6
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 671bach
        ; Exact mapped bytes E8 32 01 FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 66 FE FF FF: call 0x4d0351
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4d04fd
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 92 AC 00 00 00: call dword ptr [edx + 0xac]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x4d0507
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2A: jmp 0x4d0531
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 74 14: je 0x4d0526
        __asm _emit 0x74
        __asm _emit 0x14
        push 2c5h
        push 671a64h
        ; Exact mapped bytes E8 1F 88 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0526
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x4d0507
        __asm _emit 0x75
        __asm _emit 0xdb
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 2C 00: ret 0x2c
        __asm _emit 0xc2
        __asm _emit 0x2c
        __asm _emit 0x00
    }
}
