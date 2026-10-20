// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5859E800 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_5859e800_5859E800() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888490dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58962430h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DE 2A FF FF: call 0x58591310
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 3e8h
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 E0 18 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe0
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EF F4 FF FF: call 0x5859dd40
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        push 64h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 65 F7 FF FF: call 0x5859dfc0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        push 12ch
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 E0 18 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xe0
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4E 46 FF FF: call 0x58592ed0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
