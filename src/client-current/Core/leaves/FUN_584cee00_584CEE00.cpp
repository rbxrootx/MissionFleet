// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CEE00 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_584cee00_584CEE00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 6F FF FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 78 42 89 58: call dword ptr [0x58894278]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 74 11: je 0x584cee2f
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        and eax, 10h
        ; Exact mapped bytes 75 09: jne 0x584cee2f
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x584cee36
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        movzx eax, byte ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
