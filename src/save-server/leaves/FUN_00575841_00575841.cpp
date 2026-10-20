// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00575841 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_00575841_00575841() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 68eh
        push 67cd14h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 02 4A F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x4a
        __asm _emit 0xf6
        __asm _emit 0xff
        push 0
        push 10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 FB DB F2 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xdb
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x575883
        __asm _emit 0x75
        __asm _emit 0x14
        push 68fh
        push 67cd14h
        ; Exact mapped bytes E8 C2 34 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x34
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x575883
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x57585e
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        push 10h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 D0 DB F2 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xdb
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5758ae
        __asm _emit 0x75
        __asm _emit 0x14
        push 690h
        push 67cd14h
        ; Exact mapped bytes E8 97 34 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x34
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5758ae
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x575889
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0c0h], 0
        ; Exact mapped bytes 75 02: jne 0x5758c2
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 3B: jmp 0x5758fd
        __asm _emit 0xeb
        __asm _emit 0x3b
        push 694h
        push 67cd14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        push ecx
        ; Exact mapped bytes E8 85 49 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c0h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 04 01 00 00: call dword ptr [edx + 0x104]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
