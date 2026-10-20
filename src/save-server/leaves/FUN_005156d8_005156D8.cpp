// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005156D8 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_005156d8_005156D8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AA B2 FB FF: call 0x4d0991
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xb2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 74 19: je 0x51570c
        __asm _emit 0x74
        __asm _emit 0x19
        push 84ch
        push 673dc0h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 98h]
        push edx
        ; Exact mapped bytes E8 54 4B FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x4b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
