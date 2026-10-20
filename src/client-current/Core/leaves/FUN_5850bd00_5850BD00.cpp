// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850BD00 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_5850bd00_5850BD00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 B3 62 F9 FF: call 0x584a1fd0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x62
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}
