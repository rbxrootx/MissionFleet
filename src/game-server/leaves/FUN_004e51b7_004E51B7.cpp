// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E51B7 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_004e51b7_004E51B7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0fch
        push 5c7bd4h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 8A 5F 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4e51f0
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fdh
        push 5c7bd4h
        ; Exact mapped bytes E8 15 F8 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e51f0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e51d6
        __asm _emit 0x75
        __asm _emit 0xe0
        push 584a78h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 8D 5E 01 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e521b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0feh
        push 5c7bd4h
        ; Exact mapped bytes E8 EA F7 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e521b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4e51f6
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0ffh
        push 5c7bd4h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 2C 5F 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4e524e
        __asm _emit 0x7d
        __asm _emit 0x14
        push 100h
        push 5c7bd4h
        ; Exact mapped bytes E8 B7 F7 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e524e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e5234
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 85 D3 04 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 5D: jle 0x4e52bd
        __asm _emit 0x7e
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 79 D3 04 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 AA D3 04 00: call 0x53261d
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 FD FF FF: call 0x4e4f93
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4e5292
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 47 D3 04 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 1E: jge 0x4e52bd
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 72 D3 04 00: call 0x53261d
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AC D3 04 00: call 0x532667
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB CC: jmp 0x4e5289
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
