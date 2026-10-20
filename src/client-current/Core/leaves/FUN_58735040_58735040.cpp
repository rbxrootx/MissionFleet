// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58735040 .. +0xAB bytes.
extern "C" __declspec(naked) void FUN_58735040_58735040() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 6ch], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 54h
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A9 29 D5 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x29
        __asm _emit 0xd5
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 25: je 0x58735091
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        add ecx, 54h
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8F 29 D5 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x29
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 14h], eax
        push 5
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B0 A7 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xa7
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587350a3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 54h
        ; Exact mapped bytes E8 92 31 D5 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x31
        __asm _emit 0xd5
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 73 32: jae 0x587350e5
        __asm _emit 0x73
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 25: je 0x587350e3
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        add ecx, 54h
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3D 29 D5 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x29
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5E A7 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xa7
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B5: jmp 0x5873509a
        __asm _emit 0xeb
        __asm _emit 0xb5
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
