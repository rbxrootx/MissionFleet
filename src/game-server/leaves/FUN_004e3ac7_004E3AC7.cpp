// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E3AC7 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_004e3ac7_004E3AC7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0fch
        push 5c7b08h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 7A 76 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4e3b00
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fdh
        push 5c7b08h
        ; Exact mapped bytes E8 05 0F 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x0f
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e3b00
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e3ae6
        __asm _emit 0x75
        __asm _emit 0xe0
        push 5c7b18h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7D 75 01 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e3b2b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0feh
        push 5c7b08h
        ; Exact mapped bytes E8 DA 0E 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x0e
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e3b2b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4e3b06
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0ffh
        push 5c7b08h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 1C 76 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4e3b5e
        __asm _emit 0x7d
        __asm _emit 0x14
        push 100h
        push 5c7b08h
        ; Exact mapped bytes E8 A7 0E 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x0e
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e3b5e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e3b44
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 4C E7 04 00: call 0x5322b8
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe7
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 5D: jle 0x4e3bcd
        __asm _emit 0x7e
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 40 E7 04 00: call 0x5322b8
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xe7
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 71 E7 04 00: call 0x5322f4
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xe7
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 FD FF FF: call 0x4e38a3
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4e3ba2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 0E E7 04 00: call 0x5322b8
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xe7
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 1E: jge 0x4e3bcd
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 39 E7 04 00: call 0x5322f4
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe7
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 70 E7 04 00: call 0x53233b
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xe7
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB CC: jmp 0x4e3b99
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
