// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00403B38 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_00403b38_00403B38() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 581054h
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 1F: je 0x403b80
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 96 98 0E 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 4], 0
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 56 4C 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x4c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
