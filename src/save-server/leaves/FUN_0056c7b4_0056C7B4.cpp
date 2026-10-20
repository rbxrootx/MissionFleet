// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056C7B4 .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_0056c7b4_0056C7B4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        push 153h
        push 67d450h
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 8D DA F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xda
        __asm _emit 0xf6
        __asm _emit 0xff
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 64 6C F3 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x6c
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56c7f6
        __asm _emit 0x75
        __asm _emit 0x14
        push 154h
        push 67d450h
        ; Exact mapped bytes E8 4F C5 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc5
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56c7f6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x56c7d3
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
        ; Exact mapped bytes E8 62 31 FE FF: call 0x54f97b
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 25: je 0x56c847
        __asm _emit 0x74
        __asm _emit 0x25
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 22 53 FE FF: call 0x551b50
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x53
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x56c845
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 34: jmp 0x56c879
        __asm _emit 0xeb
        __asm _emit 0x34
        ; Exact mapped bytes EB C6: jmp 0x56c80d
        __asm _emit 0xeb
        __asm _emit 0xc6
        ; Exact mapped bytes 8B 0D D0 6C 68 00: mov ecx, dword ptr [0x686cd0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        and ecx, 10h
        test ecx, ecx
        ; Exact mapped bytes 74 23: je 0x56c877
        __asm _emit 0x74
        __asm _emit 0x23
        push 67d494h
        push 67d4cch
        ; Exact mapped bytes E8 B2 3D F3 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x3d
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp + 8]
        push edx
        push 67d4d0h
        ; Exact mapped bytes E8 A1 3D F3 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x3d
        __asm _emit 0xf3
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
