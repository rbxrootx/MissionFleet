// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00466640 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_00466640_00466640() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 63e158h
        push 1bh
        ; Exact mapped bytes E8 59 A2 00 00: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 0F: je 0x466672
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 F1 B9 00 00: call 0x472060
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 1bh
        ; Exact mapped bytes E8 D7 A2 00 00: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
