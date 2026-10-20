// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B80A0 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_586b80a0_586B80A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 FB F1 DC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf1
        __asm _emit 0xdc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 8F 05 00 00: call 0x586b8660
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 22h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
