// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00560DBA .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_00560dba_00560DBA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 7dh
        push 67c678h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 8A 94 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x94
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x560ded
        __asm _emit 0x75
        __asm _emit 0x11
        push 7eh
        push 67c678h
        ; Exact mapped bytes E8 58 7F FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x560ded
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x560dd6
        __asm _emit 0x75
        __asm _emit 0xe3
        push 7fh
        push 67c678h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 5D 94 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x94
        __asm _emit 0xf7
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
        ; Exact mapped bytes E8 54 EB FE FF: call 0x54f97b
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 28: je 0x560e58
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
        ; Exact mapped bytes 74 10: je 0x560e56
        __asm _emit 0x74
        __asm _emit 0x10
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 04: je 0x560e50
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0B: jmp 0x560e5b
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB C3: jmp 0x560e1b
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
