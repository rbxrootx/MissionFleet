// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040E530 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_0040e530_0040E530() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 110h
        ; Exact mapped bytes E8 F1 F5 01 00: call 0x42db36
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 114h
        ; Exact mapped bytes E8 E3 F5 01 00: call 0x42db36
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 118h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 11ch], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
