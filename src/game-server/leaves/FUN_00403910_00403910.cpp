// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00403910 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_00403910_00403910() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], -1
        ; Exact mapped bytes 74 19: je 0x403940
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 99 82 13 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x82
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 96 4E 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x4e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
