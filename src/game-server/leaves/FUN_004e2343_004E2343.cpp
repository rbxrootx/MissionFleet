// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E2343 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_004e2343_004E2343() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0fch
        push 5c7a18h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 FE 8D 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4e237c
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fdh
        push 5c7a18h
        ; Exact mapped bytes E8 89 26 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e237c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e2362
        __asm _emit 0x75
        __asm _emit 0xe0
        push 5c7a28h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 01 8D 01 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e23a7
        __asm _emit 0x75
        __asm _emit 0x14
        push 0feh
        push 5c7a18h
        ; Exact mapped bytes E8 5E 26 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e23a7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4e2382
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0ffh
        push 5c7a18h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 A0 8D 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4e23da
        __asm _emit 0x7d
        __asm _emit 0x14
        push 100h
        push 5c7a18h
        ; Exact mapped bytes E8 2B 26 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e23da
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e23c0
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A9 FB 04 00: call 0x531f91
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 5D: jle 0x4e2449
        __asm _emit 0x7e
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 9D FB 04 00: call 0x531f91
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 CE FB 04 00: call 0x531fcd
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 27 FD FF FF: call 0x4e2133
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4e241e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 6B FB 04 00: call 0x531f91
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 1E: jge 0x4e2449
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 96 FB 04 00: call 0x531fcd
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CD FB 04 00: call 0x532014
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB CC: jmp 0x4e2415
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
