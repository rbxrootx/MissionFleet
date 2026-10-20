// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054C528 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_0054c528_0054C528() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 4fh
        push 5cc198h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 21 EC FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xec
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor eax, eax
        cmp dword ptr [ecx + 20h], 0
        setne al
        mov esp, ebp
        pop ebp
        ret
    }
}
