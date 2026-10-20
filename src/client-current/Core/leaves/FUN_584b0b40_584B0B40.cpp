// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B0B40 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_584b0b40_584B0B40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 74 18: je 0x584b0b6a
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 29 A6 30 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xa6
        __asm _emit 0x30
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 14: jmp 0x584b0b7e
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 63 53 FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
