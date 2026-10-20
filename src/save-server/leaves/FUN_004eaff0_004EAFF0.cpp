// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EAFF0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_004eaff0_004EAFF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 3ffffffeh
        ; Exact mapped bytes 72 13: jb 0x4eb016
        __asm _emit 0x72
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        ; Exact mapped bytes E8 9C 9D 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        push 5
        ; Exact mapped bytes E8 13 0B 00 00: call 0x4ebb29
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
