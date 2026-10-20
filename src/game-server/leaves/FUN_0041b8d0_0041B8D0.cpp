// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041B8D0 .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_0041b8d0_0041B8D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 579dc9h
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
        ; Exact mapped bytes E8 35 D7 0A 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 06: jmp 0x41b920
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 3B 15 34 2F 5D 00: cmp edx, dword ptr [0x5d2f34]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 74 4B: je 0x41b976
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 2C F6 FF FF: call 0x41af60
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8E FF FF FF: call 0x41b8d0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 05 F6 FF FF: call 0x41af50
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 14 F6 FF FF: call 0x41af70
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 78 0E 00 00: call 0x41c7e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6C F4 FF FF: call 0x41ade0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB A4: jmp 0x41b91a
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 9B D7 0A 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xd7
        __asm _emit 0x0a
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
        ; Exact mapped bytes E8 47 CE 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
