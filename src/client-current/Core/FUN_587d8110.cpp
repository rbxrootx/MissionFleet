// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D8110 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_587d8110() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DB 16 FF FF: call 0x587c9800
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be6cch
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
