// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005623F2 .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_005623f2_005623F2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F8 44 FF FF: call 0x5568fe
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x562411
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B0 00 00 00: jmp 0x5624c1
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2d6h
        push 67c6f0h
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 3C 7E F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x7e
        __asm _emit 0xf7
        __asm _emit 0xff
        push 0
        push 10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 35 10 F4 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x562449
        __asm _emit 0x75
        __asm _emit 0x14
        push 2d7h
        push 67c6f0h
        ; Exact mapped bytes E8 FC 68 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x562449
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x562424
        __asm _emit 0x75
        __asm _emit 0xd5
        push 2d8h
        push 67c6f0h
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        ; Exact mapped bytes E8 FB 7D F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x7d
        __asm _emit 0xf7
        __asm _emit 0xff
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 5A FD FC FF: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xfd
        __asm _emit 0xfc
        __asm _emit 0xff
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 92 90 00 00 00: call dword ptr [edx + 0x90]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 40 FD FC FF: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 FF FC FF: call 0x5323d0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 2A FF FC FF: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2E 01 FD FF: call 0x5325cf
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 35 FF FC FF: call 0x5323de
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x5624bf
        __asm _emit 0x75
        __asm _emit 0x12
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 2C 04 00 00: call 0x5628e9
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5624c1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
