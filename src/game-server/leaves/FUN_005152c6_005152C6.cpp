// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005152C6 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_005152c6_005152C6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 15: jne 0x5152ea
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 37 B4 FF FF: call 0x51071c
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 06: jmp 0x5152f0
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], eax
        push 585e68h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8D 5D FE FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x515335
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 33 F8 FD FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 8f2h
        push 5c84b0h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 3B 5E FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        push 1
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B7 70 01 00: call 0x52c3ea
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x51534f
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 5c8a10h
        push 5c8a48h
        ; Exact mapped bytes E8 D1 A8 FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xa8
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C A1 FD FF: call 0x4ef47b
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
