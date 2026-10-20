// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046B0A0 .. +0x2D bytes.
extern "C" __declspec(naked) void FID_conflict___ctime64_0046B0A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 93 FD FF FF: call 0x46ae40
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x46b0c7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 EE CE 00 00: call 0x477fb0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 02: jmp 0x46b0c9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
