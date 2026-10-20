// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055170C .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_0055170c_0055170C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 10h], 0
        push 19bh
        push 5cf7b8h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 1C 9A FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x9a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 20h
        ; Exact mapped bytes E8 3D F8 FD FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x551757
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 64: jmp 0x5517bb
        __asm _emit 0xeb
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 20h
        ; Exact mapped bytes E8 48 F8 FD FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x551774
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 36: jmp 0x5517aa
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 2D 80 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], esp
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 19 F8 F3 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 38 2A 5E 00: call dword ptr [0x5e2a38]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        lea esp, [ebp - 20h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
