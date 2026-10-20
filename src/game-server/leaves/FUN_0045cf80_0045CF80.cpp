// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045CF80 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_0045cf80_0045CF80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 74 15: je 0x45cfb5
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 28h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 57 04 09 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        add ecx, 18h
        ; Exact mapped bytes E8 20 07 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 16 B8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
