// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00442150 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_00442150_00442150() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 0
        push 64h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D E3 0A 00: call 0x4f04c7
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 5817d8h
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 60 66 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x66
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
