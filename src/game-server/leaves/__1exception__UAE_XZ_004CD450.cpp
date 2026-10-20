// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD450 .. +0x34 bytes.
extern "C" __declspec(naked) void __1exception__UAE_XZ_004CD450() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 58ee44h
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 15: je 0x4cd480
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 8C FF 01 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
