// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851F040 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_5851f040_5851F040() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes 0F BE 4D 08: movsx ecx, byte ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0x08
        push ecx
        ; Exact mapped bytes E8 54 B3 33 00: call 0x5885a3a6
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb3
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        cmp eax, -1
        ; Exact mapped bytes 74 09: je 0x5851f063
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x5851f06a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        movzx eax, byte ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
