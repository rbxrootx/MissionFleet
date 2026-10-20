// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00440F60 .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_00440f60_00440F60() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ab29h
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
        sub esp, 0ch
        mov dword ptr [ebp - 18h], 0cccccccch
        mov dword ptr [ebp - 14h], 0cccccccch
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 A5 80 08 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 06: jmp 0x440fb0
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 3B 15 04 78 5D 00: cmp edx, dword ptr [0x5d7804]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 74 4B: je 0x441006
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 4C 03 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8E FF FF FF: call 0x440f60
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 15 03 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 74 F3 FF FF: call 0x440360
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E8 07 00 00: call 0x4417e0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0C F6 FF FF: call 0x440610
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB A4: jmp 0x440faa
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 0B 81 08 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x81
        __asm _emit 0x08
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
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 B7 77 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x77
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
