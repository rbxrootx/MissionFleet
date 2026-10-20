// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044CFA0 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_0044cfa0_0044CFA0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b0a9h
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
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 20h], ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 66 C0 07 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xc0
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F7 02 00 00: call 0x44d2e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 3B 05 04 78 5D 00: cmp eax, dword ptr [0x5d7804]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 74 51: je 0x44d053
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 71 F9 FF FF: call 0x44c980
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        ; Exact mapped bytes E8 32 F9 FF FF: call 0x44c950
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x44d03a
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 E0 42 FF FF: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 17: jmp 0x44d051
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 A7 42 FF FF: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB A4: jmp 0x44cff7
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 B8 C0 07 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xc0
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 61 B7 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
