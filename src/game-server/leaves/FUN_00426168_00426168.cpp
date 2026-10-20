// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426168 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_00426168_00426168() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 64 AA 0C 00: call 0x4f0be2
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xaa
        __asm _emit 0x0c
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        push ecx
        push 3eeh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D3 89 0C 00: call 0x4eeb67
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 3D 26 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x26
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
