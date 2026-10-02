// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B45C0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_587b45c0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        ; Exact mapped bytes 8B 15 88 5F 90 58: mov edx, dword ptr [0x58905f88]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes FF 15 9C 42 89 58: call dword ptr [0x5889429c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
