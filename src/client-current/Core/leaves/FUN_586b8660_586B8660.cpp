// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B8660 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_586b8660_586B8660() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 22h
        ; Exact mapped bytes E8 11 F3 DC FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf3
        __asm _emit 0xdc
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], ecx
        mov dword ptr [edx + 4], ecx
        mov dword ptr [edx + 8], ecx
        mov dword ptr [edx + 0ch], ecx
        mov dword ptr [edx + 10h], ecx
        mov dword ptr [edx + 14h], ecx
        mov dword ptr [edx + 18h], ecx
        mov dword ptr [edx + 1ch], ecx
        ; Exact mapped bytes 66 89 4A 20: mov word ptr [edx + 0x20], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x20
        mov esp, ebp
        pop ebp
        ret
    }
}
