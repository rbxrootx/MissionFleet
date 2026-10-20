// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CE3F7 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_004ce3f7_004CE3F7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 0E 00 00: call 0x4cf277
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 6349ach
        push 20h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        push ecx
        ; Exact mapped bytes E8 A1 74 F9 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x74
        __asm _emit 0xf9
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
