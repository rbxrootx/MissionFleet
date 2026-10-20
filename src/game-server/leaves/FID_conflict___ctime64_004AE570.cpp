// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AE570 .. +0x2D bytes.
extern "C" __declspec(naked) void FID_conflict___ctime64_004AE570() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 23 DC FF FF: call 0x4ac1a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x4ae597
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 AE C6 00 00: call 0x4bac40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 02: jmp 0x4ae599
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
