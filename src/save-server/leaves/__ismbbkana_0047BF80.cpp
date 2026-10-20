// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047BF80 .. +0x3B bytes.
extern "C" __declspec(naked) void __ismbbkana_0047BF80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 81 3D 00 8B 68 00 A4 03 00 00: cmp dword ptr [0x688b00], 0x3a4
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1D: jne 0x47bfad
        __asm _emit 0x75
        __asm _emit 0x1d
        push 3
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 23 00 00 00: call 0x47bfc0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x47bfad
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x47bfb4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
