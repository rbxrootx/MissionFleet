// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00565174 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_00565174_00565174() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 152h
        push 5d0bb4h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 BC 5F F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x5f
        __asm _emit 0xf9
        __asm _emit 0xff
        push 58aaa8h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DF 5E F9 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x5e
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5651c9
        __asm _emit 0x75
        __asm _emit 0x14
        push 153h
        push 5d0bb4h
        ; Exact mapped bytes E8 3C F8 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5651c9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x5651a4
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 32 B1 00 00: call 0x570309
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x5651dd
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0C: jmp 0x5651e9
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A 7D 00 00: call 0x56cf63
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x7d
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
