// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055AC29 .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_0055ac29_0055AC29() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f5b8h
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
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], eax
        push 1cbh
        push 5cebe0h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 FC 04 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58a190h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1F 04 FA FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55ac89
        __asm _emit 0x75
        __asm _emit 0x14
        push 1cch
        push 5cebe0h
        ; Exact mapped bytes E8 7C 9D FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x9d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55ac89
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x55ac64
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 4D D1 FF FF: call 0x557de4
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 14: je 0x55acb0
        __asm _emit 0x74
        __asm _emit 0x14
        push 1cdh
        push 5cebe0h
        ; Exact mapped bytes E8 55 9D FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x9d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55acb0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x55ac8f
        __asm _emit 0x75
        __asm _emit 0xd9
        mov dword ptr [ebp - 14h], 80004005h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 07: je 0x55ace2
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 4B: jmp 0x55ad2f
        __asm _emit 0xeb
        __asm _emit 0x4b
        push 584850h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 9F 03 FA FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x03
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55ad09
        __asm _emit 0x75
        __asm _emit 0x14
        push 1d5h
        push 5cebe0h
        ; Exact mapped bytes E8 FC 9C FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55ad09
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x55ace4
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 BE 28 FF FF: call 0x54d5d6
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
