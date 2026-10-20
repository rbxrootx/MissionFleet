// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051B5FE .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_0051b5fe_0051B5FE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 123h
        push 5cb0ach
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 48 FB FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E8 AC 47 FB FF: call 0x4cfdc9
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x47
        __asm _emit 0xfb
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
