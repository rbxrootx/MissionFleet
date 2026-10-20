// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056F61B .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_0056f61b_0056F61B() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ff9fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov eax, dword ptr [ebp + 8]
        sub eax, 0e0h
        mov dword ptr [ebp - 18h], eax
        push 0aadh
        push 5d053ch
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 05 BB F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xbb
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 81 CE FD FF: call 0x54c4e4
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 8000ffffh
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 0c0h], 0
        ; Exact mapped bytes 74 0E: je 0x56f68b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 10 01 00 00: call dword ptr [edx + 0x110]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 0c0h], 0
        ; Exact mapped bytes 74 19: je 0x56f6b0
        __asm _emit 0x74
        __asm _emit 0x19
        push 0ab9h
        push 5d053ch
        ; Exact mapped bytes E8 5A 53 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 01: je 0x56f6b0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x56f68b
        __asm _emit 0x75
        __asm _emit 0xd5
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 39: jmp 0x56f6f8
        __asm _emit 0xeb
        __asm _emit 0x39
        push 584850h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C4 B9 F8 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xb9
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56f6e4
        __asm _emit 0x75
        __asm _emit 0x14
        push 0abch
        push 5d053ch
        ; Exact mapped bytes E8 21 53 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56f6e4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
    }
}
