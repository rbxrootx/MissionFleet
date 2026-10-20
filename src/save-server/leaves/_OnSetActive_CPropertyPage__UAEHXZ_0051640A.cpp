// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051640A .. +0x48 bytes.
extern "C" __declspec(naked) void _OnSetActive_CPropertyPage__UAEHXZ_0051640A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 144h
        push 674cach
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 3C 3E FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x3e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 74 0F: je 0x51643f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 88h], 0
        ; Exact mapped bytes EB 0A: jmp 0x516449
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D2 DF FB FF: call 0x4d441b
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xdf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
