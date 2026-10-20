// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A34F0 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_584a34f0_584A34F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 C0 EA FF FF: call 0x584a1fd0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}
