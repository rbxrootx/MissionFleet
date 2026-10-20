// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E4687 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_004e4687_004E4687() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0fch
        push 5c7b7ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 BA 6A 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4e46c0
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fdh
        push 5c7b7ch
        ; Exact mapped bytes E8 45 03 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e46c0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e46a6
        __asm _emit 0x75
        __asm _emit 0xe0
        push 584a48h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 BD 69 01 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e46eb
        __asm _emit 0x75
        __asm _emit 0x14
        push 0feh
        push 5c7b7ch
        ; Exact mapped bytes E8 1A 03 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e46eb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4e46c6
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0ffh
        push 5c7b7ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 5C 6A 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4e471e
        __asm _emit 0x7d
        __asm _emit 0x14
        push 100h
        push 5c7b7ch
        ; Exact mapped bytes E8 E7 02 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e471e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e4704
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1F DD 04 00: call 0x53244b
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 5D: jle 0x4e478d
        __asm _emit 0x7e
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 13 DD 04 00: call 0x53244b
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 44 DD 04 00: call 0x532487
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 FD FF FF: call 0x4e4463
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4e4762
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E1 DC 04 00: call 0x53244b
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 1E: jge 0x4e478d
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 0C DD 04 00: call 0x532487
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 43 DD 04 00: call 0x5324ce
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB CC: jmp 0x4e4759
        __asm _emit 0xeb
        __asm _emit 0xcc
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
