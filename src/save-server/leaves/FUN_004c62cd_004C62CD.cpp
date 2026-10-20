// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C62CD .. +0xED bytes.
extern "C" __declspec(naked) void FUN_004c62cd_004C62CD() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c0d2h
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
        ; Exact mapped bytes E8 A1 40 01 00: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        push 6712b0h
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 6712a8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3B 25 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 80 27 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x27
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2D 25 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F2 F9 05 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf9
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 73: jle 0x4c639d
        __asm _emit 0x7e
        __asm _emit 0x73
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 D5 E9 05 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F4 13 06 00: call 0x527735
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x13
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 44: je 0x4c638e
        __asm _emit 0x74
        __asm _emit 0x44
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 9B FC FF FF: call 0x4c5ff9
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 6712c0h
        lea ecx, [ebp - 14h]
        push ecx
        push 6712bch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D3 24 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 07 67 00 00: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C6 24 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3F 27 06 00: call 0x528acb
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x27
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB B6: jmp 0x4c6344
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 4F 65 00 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        push 6712c8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 24 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x06
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
