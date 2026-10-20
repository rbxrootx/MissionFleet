// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005668B4 .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_005668b4_005668B4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        push 153h
        push 5d0c78h
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 8D 48 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xf9
        __asm _emit 0xff
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 54 95 F6 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x95
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5668f6
        __asm _emit 0x75
        __asm _emit 0x14
        push 154h
        push 5d0c78h
        ; Exact mapped bytes E8 0F E1 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xe1
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5668f6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x5668d3
        __asm _emit 0x75
        __asm _emit 0xd7
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F2 A5 FE FF: call 0x550f0b
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 25: je 0x566947
        __asm _emit 0x74
        __asm _emit 0x25
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B2 C7 FE FF: call 0x5530e0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x566945
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 34: jmp 0x566979
        __asm _emit 0xeb
        __asm _emit 0x34
        ; Exact mapped bytes EB C6: jmp 0x56690d
        __asm _emit 0xeb
        __asm _emit 0xc6
        ; Exact mapped bytes 8B 0D 78 E8 5D 00: mov ecx, dword ptr [0x5de878]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        and ecx, 10h
        test ecx, ecx
        ; Exact mapped bytes 74 23: je 0x566977
        __asm _emit 0x74
        __asm _emit 0x23
        push 5d0cbch
        push 5d0cf4h
        ; Exact mapped bytes E8 B2 92 F6 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x92
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp + 8]
        push edx
        push 5d0cf8h
        ; Exact mapped bytes E8 A1 92 F6 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x92
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
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
