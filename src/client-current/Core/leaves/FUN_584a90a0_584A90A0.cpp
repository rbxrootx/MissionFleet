// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A90A0 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_584a90a0_584A90A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 F8 E1 FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 BF E1 FD FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 53 09 00 00: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
