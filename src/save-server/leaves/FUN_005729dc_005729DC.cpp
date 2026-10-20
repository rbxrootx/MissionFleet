// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005729DC .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_005729dc_005729DC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 149h
        push 67cd14h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 65 78 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x78
        __asm _emit 0xf6
        __asm _emit 0xff
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 3C 0A F3 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x0a
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x572a1e
        __asm _emit 0x75
        __asm _emit 0x14
        push 14ah
        push 67cd14h
        ; Exact mapped bytes E8 27 63 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x63
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x572a1e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x5729fb
        __asm _emit 0x75
        __asm _emit 0xd7
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
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
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 60 CF FD FF: call 0x54f9a1
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 25: je 0x572a6f
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C7 60 00 00: call 0x578b1d
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4D 23 FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x23
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x572a6d
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 34: jmp 0x572aa1
        __asm _emit 0xeb
        __asm _emit 0x34
        ; Exact mapped bytes EB C6: jmp 0x572a35
        __asm _emit 0xeb
        __asm _emit 0xc6
        ; Exact mapped bytes 8B 15 D0 6C 68 00: mov edx, dword ptr [0x686cd0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        and edx, 10h
        test edx, edx
        ; Exact mapped bytes 74 23: je 0x572a9f
        __asm _emit 0x74
        __asm _emit 0x23
        push 67cd80h
        push 67cdc0h
        ; Exact mapped bytes E8 8A DB F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xdb
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 8]
        push eax
        push 67cdc4h
        ; Exact mapped bytes E8 79 DB F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xdb
        __asm _emit 0xf2
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
