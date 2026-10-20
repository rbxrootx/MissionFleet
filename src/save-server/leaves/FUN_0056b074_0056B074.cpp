// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056B074 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_0056b074_0056B074() {
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
        push 67d38ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 BC F1 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf1
        __asm _emit 0xf6
        __asm _emit 0xff
        push 63d0d0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DF F0 F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xf0
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56b0c9
        __asm _emit 0x75
        __asm _emit 0x14
        push 153h
        push 67d38ch
        ; Exact mapped bytes E8 7C DC FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xdc
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56b0c9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x56b0a4
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E2 DB 00 00: call 0x578cb9
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x56b0dd
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0C: jmp 0x56b0e9
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2A A8 00 00: call 0x575913
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xa8
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
