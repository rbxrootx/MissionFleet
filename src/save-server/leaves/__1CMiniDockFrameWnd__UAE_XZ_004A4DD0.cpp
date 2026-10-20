// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A4DD0 .. +0x4E bytes.
extern "C" __declspec(naked) void __1CMiniDockFrameWnd__UAE_XZ_004A4DD0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d409h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0ach
        ; Exact mapped bytes E8 EB 7A 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 70 38 08 00: call 0x528680
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x38
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
