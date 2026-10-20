// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00578BF3 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_00578bf3_00578BF3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 198h
        push 67cd20h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 53 16 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x16
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 3ch
        mov esp, ebp
        pop ebp
        ret
    }
}
