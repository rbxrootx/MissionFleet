// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055DD3A .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_0055dd3a_0055DD3A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 7dh
        push 5cfea0h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 0A D4 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd4
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x55dd6d
        __asm _emit 0x75
        __asm _emit 0x11
        push 7eh
        push 5cfea0h
        ; Exact mapped bytes E8 98 6C FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55dd6d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x55dd56
        __asm _emit 0x75
        __asm _emit 0xe3
        push 7fh
        push 5cfea0h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 DD D3 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xd3
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 64 31 FF FF: call 0x550f0b
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 28: je 0x55ddd8
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 90 C0 00 00 00: call dword ptr [eax + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x55ddd6
        __asm _emit 0x74
        __asm _emit 0x10
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 04: je 0x55ddd0
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0B: jmp 0x55dddb
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB C3: jmp 0x55dd9b
        __asm _emit 0xeb
        __asm _emit 0xc3
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
