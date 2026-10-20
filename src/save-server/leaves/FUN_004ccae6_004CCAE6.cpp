// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CCAE6 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_004ccae6_004CCAE6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x4ccb91
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 81 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x81
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 7D 10: jge 0x4ccb1d
        __asm _emit 0x7d
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A4 81 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x81
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 98 14 67 00: cmp eax, dword ptr [0x671498]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x14
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 75 0D: jne 0x4ccb2a
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 94 81 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 7D 1C: jge 0x4ccb46
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 81 81 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x81
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 59 FF FF FF: call 0x4cca9d
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 4B: jmp 0x4ccb91
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 42 FB FF FF: call 0x4cc690
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 63 81 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x81
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 98 14 67 00: cmp eax, dword ptr [0x671498]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x14
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x4ccb72
        __asm _emit 0x75
        __asm _emit 0x14
        push 14eh
        push 6714ach
        ; Exact mapped bytes E8 D3 C1 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xc1
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ccb72
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x4ccb4e
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 81 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x81
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 24 BA 68 00: call dword ptr [0x68ba24]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
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
