// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00407AE0 .. +0x4E bytes.
extern "C" __declspec(naked) void __1CMiniDockFrameWnd__UAE_XZ_00407AE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 4395e9h
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
        add ecx, 110h
        ; Exact mapped bytes E8 9A 60 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 65 AC 00 00: call 0x412785
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xac
        __asm _emit 0x00
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
