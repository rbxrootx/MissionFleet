// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047F030 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_0047f030_0047F030() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        mov dword ptr [ebp - 94h], 94h
        lea eax, [ebp - 94h]
        push eax
        ; Exact mapped bytes FF 15 74 B8 68 00: call dword ptr [0x68b874]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x47f069
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 84h], 2
        ; Exact mapped bytes 75 0C: jne 0x47f069
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 98h], 1
        ; Exact mapped bytes EB 0A: jmp 0x47f073
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov eax, dword ptr [ebp - 98h]
        mov esp, ebp
        pop ebp
        ret
    }
}
