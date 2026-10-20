// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00428F13 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_00428f13_00428F13() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 6343bch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0c7ch], 0
        ; Exact mapped bytes 74 20: je 0x428f56
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        push edx
        push 0
        push 469h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c7ch]
        ; Exact mapped bytes E8 51 0A 00 00: call 0x4299a0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E3 26 10 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x26
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 90 BE 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xbe
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
