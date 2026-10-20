// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00551B50 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_00551b50_00551B50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 101h
        push 67c1e0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 F3 86 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x551b87
        __asm _emit 0x75
        __asm _emit 0x14
        push 102h
        push 67c1e0h
        ; Exact mapped bytes E8 BE 71 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x71
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x551b87
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x551b6d
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 28h]
        push eax
        push 67c208h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, 15h
        ; Exact mapped bytes 72 14: jb 0x551bc9
        __asm _emit 0x72
        __asm _emit 0x14
        push 105h
        push 67c1e0h
        ; Exact mapped bytes E8 7C 71 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x71
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x551bc9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x551ba6
        __asm _emit 0x75
        __asm _emit 0xd7
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
