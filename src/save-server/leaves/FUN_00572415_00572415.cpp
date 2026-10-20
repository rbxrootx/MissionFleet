// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00572415 .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_00572415_00572415() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 0a8h
        push 67cd14h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 2C 7E F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x7e
        __asm _emit 0xf6
        __asm _emit 0xff
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 03 10 F3 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x10
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x572457
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a9h
        push 67cd14h
        ; Exact mapped bytes E8 EE 68 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x572457
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x572434
        __asm _emit 0x75
        __asm _emit 0xd7
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x5724ed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BB 9D FF FF: call 0x56c230
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 88h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 54 9A FF FF: call 0x56bedf
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F9 D4 FD FF: call 0x54f9a1
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3C: je 0x5724ed
        __asm _emit 0x74
        __asm _emit 0x3c
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9A 7D 00 00: call 0x57a255
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9E 6C 00 00: call 0x57916a
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 13: je 0x5724e5
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov dword ptr [ebp - 0ch], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E1: jne 0x5724cc
        __asm _emit 0x75
        __asm _emit 0xe1
        ; Exact mapped bytes EB AF: jmp 0x57249c
        __asm _emit 0xeb
        __asm _emit 0xaf
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
