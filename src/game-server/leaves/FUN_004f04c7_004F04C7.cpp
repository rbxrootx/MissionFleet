// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F04C7 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_004f04c7_004F04C7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 0E 00 00: call 0x4f1347
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 582a8ch
        push 20h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        push ecx
        ; Exact mapped bytes E8 81 8E FB FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x8e
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 40h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 3ch], ecx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
