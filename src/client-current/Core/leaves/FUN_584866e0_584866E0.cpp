// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584866E0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_584866e0_584866E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 08: je 0x584866f9
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 76 07: jbe 0x58486700
        __asm _emit 0x76
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 80070057h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
