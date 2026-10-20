// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58793A90 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_58793a90_58793A90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C0 F3 FF FF: call 0x58792e70
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1E: je 0x58793ad7
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2A 74 FF FF: call 0x5878af00
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
