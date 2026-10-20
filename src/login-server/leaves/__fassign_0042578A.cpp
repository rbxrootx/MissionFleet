// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042578A .. +0x3E bytes.
extern "C" __declspec(naked) void __fassign_0042578A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        cmp dword ptr [ebp + 8], 0
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 1B: je 0x4257b3
        __asm _emit 0x74
        __asm _emit 0x1b
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes E8 D6 1B 00 00: call 0x427377
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        pop ecx
        pop ecx
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        leave
        ret
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 E8 1B 00 00: call 0x4273a4
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        pop ecx
        pop ecx
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax], ecx
        leave
        ret
    }
}
