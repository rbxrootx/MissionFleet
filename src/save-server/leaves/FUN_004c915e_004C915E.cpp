// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C915E .. +0xED bytes.
extern "C" __declspec(naked) void FUN_004c915e_004C915E() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d26fh
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
        sub esp, 10h
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 10 12 01 00: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        push 674930h
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 674928h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AA F6 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EF F8 05 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf8
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9C F6 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 61 CB 05 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xcb
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 73: jle 0x4c922e
        __asm _emit 0x7e
        __asm _emit 0x73
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 44 BB 05 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xbb
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F5 E4 05 00: call 0x5276c7
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 44: je 0x4c921f
        __asm _emit 0x74
        __asm _emit 0x44
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0A FE FF FF: call 0x4c8ff9
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 674940h
        lea ecx, [ebp - 14h]
        push ecx
        push 67493ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 42 F6 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 76 38 00 00: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 35 F6 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 07 F9 05 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf9
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB B6: jmp 0x4c91d5
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BE 36 00 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        push 674948h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 10 F6 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
