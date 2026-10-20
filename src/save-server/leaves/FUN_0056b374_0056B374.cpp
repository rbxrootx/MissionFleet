// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056B374 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_0056b374_0056B374() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 0
        push 10h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 DB 80 F3 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x80
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56b3a3
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b0h
        push 67d38ch
        ; Exact mapped bytes E8 A2 D9 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xd9
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56b3a3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x56b37e
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        push 10h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 B0 80 F3 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x80
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56b3ce
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b1h
        push 67d38ch
        ; Exact mapped bytes E8 77 D9 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xd9
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56b3ce
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x56b3a9
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 124h], 0
        ; Exact mapped bytes 74 02: je 0x56b3e2
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 4E: jmp 0x56b430
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 124h], 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 104h
        ; Exact mapped bytes E8 B7 70 FC FF: call 0x5324b8
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x70
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 114h
        ; Exact mapped bytes E8 A5 70 FC FF: call 0x5324b8
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x70
        __asm _emit 0xfc
        __asm _emit 0xff
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 124h], 0
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
