// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00520F85 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_00520f85_00520F85() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 35 63 FF FF: call 0x5172cc
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 7ch
        ; Exact mapped bytes E8 3F 16 01 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x520fba
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c3h
        push 5cc9cch
        ; Exact mapped bytes E8 4B 3A 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x520fba
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x520f97
        __asm _emit 0x75
        __asm _emit 0xd7
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 7ch
        ; Exact mapped bytes E8 7E 17 01 00: call 0x53274b
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x520fe5
        __asm _emit 0x74
        __asm _emit 0x14
        push 2c4h
        push 5cc9cch
        ; Exact mapped bytes E8 20 3A 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x520fe5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x520fc0
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        add ecx, 7ch
        ; Exact mapped bytes E8 FC 15 01 00: call 0x5325f2
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 7ch
        ; Exact mapped bytes E8 49 17 01 00: call 0x53274b
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x52101a
        __asm _emit 0x74
        __asm _emit 0x14
        push 2c5h
        push 5cc9cch
        ; Exact mapped bytes E8 EB 39 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52101a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CB: jne 0x520feb
        __asm _emit 0x75
        __asm _emit 0xcb
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
