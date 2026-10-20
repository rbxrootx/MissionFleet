// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004902E9 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_004902e9_004902E9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 24 35 0A 00: call 0x533821
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 25: je 0x49032b
        __asm _emit 0x74
        __asm _emit 0x25
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 4]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 0A B4 05 00: call 0x4eb727
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B6 2C 00 00: call 0x492fdf
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB D5: jmp 0x490300
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
