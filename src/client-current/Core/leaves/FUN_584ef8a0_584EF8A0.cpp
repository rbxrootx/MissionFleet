// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EF8A0 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_584ef8a0_584EF8A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        push 588a26c4h
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 53 1A 36 00: call 0x58851315
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x1a
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 05: je 0x584ef8d3
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 1E: jmp 0x584ef8f1
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 81 FE FF FF: call 0x584ef760
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 96 1B 36 00: call 0x58851481
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x1b
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
