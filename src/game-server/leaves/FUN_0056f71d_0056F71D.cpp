// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056F71D .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_0056f71d_0056F71D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ffa9h
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
        push 0ac5h
        push 5d053ch
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 03 BA F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xba
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7F CD FD FF: call 0x54c4e4
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 8000ffffh
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 0c0h], 0
        ; Exact mapped bytes 74 22: je 0x56f7a1
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0c0h]
        cmp dword ptr [ecx + 0bch], 0
        ; Exact mapped bytes 74 10: je 0x56f7a1
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 14 01 00 00: call dword ptr [eax + 0x114]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 74 2B: je 0x56f7d8
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0c0h]
        cmp dword ptr [eax + 0bch], 0
        ; Exact mapped bytes 74 19: je 0x56f7d8
        __asm _emit 0x74
        __asm _emit 0x19
        push 0ad5h
        push 5d053ch
        ; Exact mapped bytes E8 32 52 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x52
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 01: je 0x56f7d8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C3: jne 0x56f7a1
        __asm _emit 0x75
        __asm _emit 0xc3
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 39: jmp 0x56f820
        __asm _emit 0xeb
        __asm _emit 0x39
        push 584850h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 9C B8 F8 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xb8
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56f80c
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ad8h
        push 5d053ch
        ; Exact mapped bytes E8 F9 51 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x51
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56f80c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
    }
}
