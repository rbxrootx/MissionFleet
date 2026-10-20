// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043779C .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_0043779c_0043779C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 7D: je 0x43782d
        __asm _emit 0x74
        __asm _emit 0x7d
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4b8ch
        ; Exact mapped bytes E8 12 2D FD FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x2d
        __asm _emit 0xfd
        __asm _emit 0xff
        push 6
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3588h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4b8ch
        ; Exact mapped bytes E8 EE 97 FD FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x97
        __asm _emit 0xfd
        __asm _emit 0xff
        push 64h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 358ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4b8ch
        ; Exact mapped bytes E8 D4 97 FD FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x97
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4b8ch
        ; Exact mapped bytes E8 8E 2C FD FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4b8ch
        ; Exact mapped bytes E8 5F 2C FD FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x2c
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 1
        push 0a0000h
        push 80020115h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0C FA 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x43782f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 A7 0F 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x0f
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
