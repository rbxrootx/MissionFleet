// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586975C0 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_586975c0_586975C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1f40h], -1
        ; Exact mapped bytes 74 35: je 0x58697608
        __asm _emit 0x74
        __asm _emit 0x35
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1f40h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 648h]
        push ecx
        push 8001020eh
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 53 19 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x53
        __asm _emit 0x19
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D9 E7 DE FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe7
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
