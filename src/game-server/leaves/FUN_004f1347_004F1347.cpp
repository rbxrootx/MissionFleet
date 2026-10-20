// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F1347 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_004f1347_004F1347() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8A 69 00 00: call 0x4f7ce0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 582eb0h
        push 20h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1ch
        push ecx
        ; Exact mapped bytes E8 01 80 FB FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
