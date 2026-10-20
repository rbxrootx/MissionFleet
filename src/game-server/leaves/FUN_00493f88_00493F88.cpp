// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00493F88 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_00493f88_00493F88() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 70h]
        and ecx, 4000h
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x493fb6
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes FF 15 0C 26 5E 00: call dword ptr [0x5e260c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 CB D9 05 00: call 0x4f197f
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x493fd0
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes E8 78 8B 0A 00: call 0x53cb33
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x8b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 0
        push -4
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
