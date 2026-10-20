// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00489803 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_00489803_00489803() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 581e28h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0c7ch], 0
        ; Exact mapped bytes 74 20: je 0x489846
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        push edx
        push 0
        push 469h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c7ch]
        ; Exact mapped bytes E8 E1 3B FC FF: call 0x44d420
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x3b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 93 23 0B 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x23
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 90 EF 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
