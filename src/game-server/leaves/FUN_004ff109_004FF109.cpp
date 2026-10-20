// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF109 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_004ff109_004FF109() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 11bh
        push 5cb750h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 3D C0 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], -1
        ; Exact mapped bytes 75 02: jne 0x4ff12e
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 1F: jmp 0x4ff14d
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 14 23 5E 00: call dword ptr [0x5e2314]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4ff14d
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 83 C7 FF FF: call 0x4fb8d0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
