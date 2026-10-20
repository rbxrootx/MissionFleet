// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D06F6 .. +0x176 bytes.
extern "C" __declspec(naked) void FUN_004d06f6_004D06F6() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d7cbh
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
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 90h]
        and ecx, 80000h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 09 01 00 00: je 0x4d083e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 0F 84 FC 00 00 00: je 0x4d083e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d0767
        __asm _emit 0x75
        __asm _emit 0x14
        push 82h
        push 5c7f78h
        ; Exact mapped bytes E8 9E 42 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x42
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0767
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d0742
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 92 07 06 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x07
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 104h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6F D8 01 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 104h
        push 464h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9D C8 06 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc8
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 36 B4 06 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 0A: jge 0x4d07b1
        __asm _emit 0x7d
        __asm _emit 0x0a
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 03 CF 01 00: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x4d07bb
        __asm _emit 0xeb
        __asm _emit 0x0a
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 78 D9 01 00: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C9 07 06 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x07
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 68: jne 0x4d082f
        __asm _emit 0x75
        __asm _emit 0x68
        push 104h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 24 D8 01 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 104h
        push 465h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 52 C8 06 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc8
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EB B3 06 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 0A: jge 0x4d07fc
        __asm _emit 0x7d
        __asm _emit 0x0a
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B8 CE 01 00: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 33: jmp 0x4d082f
        __asm _emit 0xeb
        __asm _emit 0x33
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2D D9 01 00: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 CC 01 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        or ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 22 D0 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 2A: jmp 0x4d0859
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0E D0 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 78h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8B D0 01 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        or ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
