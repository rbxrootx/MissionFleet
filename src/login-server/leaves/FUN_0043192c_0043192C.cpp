// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043192C .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_0043192c_0043192C() {
    __asm {
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 89 48 04: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 89 50 08: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 50 0C: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 89 50 10: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 48 14: mov dword ptr [eax + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x14
        ; Exact mapped bytes 89 50 18: mov dword ptr [eax + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
