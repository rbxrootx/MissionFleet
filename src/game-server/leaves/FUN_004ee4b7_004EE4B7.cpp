// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EE4B7 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_004ee4b7_004EE4B7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 91 F2 FF FF: call 0x4ed757
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 8F EB F9 FF: call 0x48d060
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xeb
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
